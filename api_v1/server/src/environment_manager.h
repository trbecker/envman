#ifndef __ENVIRONMENT_MANAGER_IMPL_H__
#define __ENVIRONMENT_MANAGER_IMPL_H__
#include <map>
#include <memory>
#include <string>
#include <thread>

class anr_entry {
public:
	std::string bbu_name;
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
	std::map<std::string, std::shared_ptr<anr_entry>> anr;
	std::string endpoint;
};

extern std::map<std::string, std::shared_ptr<ue_data>> ue_map;

class EnvironmentManagerObserver {
public:
	EnvironmentManagerObserver() { /* pass */ };
	~EnvironmentManagerObserver() { /* pass */ };
	/**
	 * Notifies the observer about a new ANR update.
	 */
	virtual void anrUpdate(const std::string iMSI,
		const std::map<std::string, std::shared_ptr<anr_entry>> &entries) = 0;

	/**
	 * Notifies the observer about a new Flow update.
	 */
	virtual void flowUpdate(const std::string iMSI,
		const flow_entry & entry) = 0;

	/**
	 * Notifies the observer about a new UE requessting association.
	 */
	virtual void associationRequest(const std::shared_ptr<ue_data> ue) = 0;

	/** 
	 * Notifiess the observer about a new UE requesting disassociation.
	 */
	virtual void disassociationRequest(const std::shared_ptr<ue_data> ue) = 0;
};

class EnvironmentManager {
public:
	EnvironmentManager(uint16_t port, uint16_t threads,
		std::shared_ptr<EnvironmentManagerObserver> observer);
	~EnvironmentManager();

	void start();
	void stop();

protected:
	std::shared_ptr<EnvironmentManagerObserver> observer;
	uint16_t port;
	uint16_t threads;
};

#endif /* __ENVIRONMENT_MANAGER_IMPL_H__ */
