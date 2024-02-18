#ifndef __ENVIRONMENT_MANAGER_IMPL_H__
#define __ENVIRONMENT_MANAGER_IMPL_H__
#include <map>
#include <memory>
#include <string>
#include <thread>
#include <vector>

class anr_entry {
public:
	int32_t bbu_name;
	double rsrp;
	double rsrq;
	double sinr;
	double cqi;
	double bler;
};

class flow_entry {
public:
	double average_throughput;
	double latency;
};


class ue_data {
public:
	std::string imsi;
	flow_entry flow;
	std::map<int32_t, std::shared_ptr<anr_entry>> anr;
	std::string endpoint;
};

extern std::map<std::string, std::shared_ptr<ue_data>> ue_map;
extern std::map<std::string, int32_t> association_map;

#define ENVMAN_OBSERVE_ANR (1 << 0)
#define ENVMAN_OBSERVE_FLOW (1 << 1)
#define ENVMAN_OBSERVE_ADMISSION (1 << 2)

#define ENVMAN_OBSERVE_ALL (ENVMAN_OBSERVE_ADMISSION | ENVMAN_OBSERVE_ANR | ENVMAN_OBSERVE_FLOW)

class EnvironmentManagerObserver {
public:
	EnvironmentManagerObserver() { /* pass */ };
	~EnvironmentManagerObserver() { /* pass */ };
	/**
	 * Notifies the observer about a new ANR update.
	 */
	virtual void anrUpdate(const std::string iMSI,
		const std::map<int32_t, std::shared_ptr<anr_entry>> &entries) = 0;

	/**
	 * Notifies the observer about a new Flow update.
	 */
	virtual void flowUpdate(const std::string iMSI,
		const flow_entry & entry) = 0;

	/**
	 * Notifies the observer about a new UE requessting association.
	 */
	virtual bool associationRequest(const std::shared_ptr<ue_data> ue, const int32_t &cell) = 0;

	/** 
	 * Notifiess the observer about a new UE requesting disassociation.
	 */
	virtual void disassociationRequest(const std::shared_ptr<ue_data> ue) = 0;
};

typedef std::pair<std::shared_ptr<EnvironmentManagerObserver>, uint32_t> ObserverAndType;
typedef std::vector<ObserverAndType> ObserverList;

static inline const std::shared_ptr<EnvironmentManagerObserver> &observer(const ObserverAndType &ot)
{
	return ot.first;
}

static inline const uint32_t observed_event(const ObserverAndType &ot)
{
	return ot.second;
}

class EnvironmentManager {
public:
	EnvironmentManager(uint16_t port, uint16_t threads);
	~EnvironmentManager();

	void start();
	void stop();

	void add_observer(std::shared_ptr<EnvironmentManagerObserver> observer, uint32_t type);
	void delete_observer(std::shared_ptr<EnvironmentManagerObserver> observer);

protected:
	std::shared_ptr<ObserverList> observers;
	uint16_t port;
	uint16_t threads;
};

#endif /* __ENVIRONMENT_MANAGER_IMPL_H__ */
