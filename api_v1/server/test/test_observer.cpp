#include <iostream>
#include "../src/environment_manager.h"

class EnvironmentManagerTest : public EnvironmentManager {
public:
	EnvironmentManagerTest(uint16_t port, uint16_t threads) :
		EnvironmentManager(port, threads) { /* pass */ }

	size_t observers_length() {
		return observers->size();
	}

	ObserverAndType get_observer(int pos) {
		return observers->at(pos);
	}
};

class Observer : public EnvironmentManagerObserver {
	virtual void anrUpdate(const std::string iMSI,
                const std::map<std::string, std::shared_ptr<anr_entry>> &entries) {

	}

	virtual void flowUpdate(const std::string iMSI,
                const flow_entry & entry) {

	}

	virtual void associationRequest(const std::shared_ptr<ue_data> ue) {

	}

	virtual void disassociationRequest(const std::shared_ptr<ue_data> ue) {

	}
};

int main(void)
{
	auto observer1 = std::make_shared<Observer>();
	auto observer2 = std::make_shared<Observer>();
	auto observer3 = std::make_shared<Observer>();

	EnvironmentManagerTest test(8081, 2);
	test.add_observer(observer1, ENVMAN_OBSERVE_ANR);
	test.add_observer(observer1, ENVMAN_OBSERVE_FLOW);
	std::cout << "observers " << test.observers_length() << " expected 1" << std::endl;
	std::cout << "event_type " << test.get_observer(0).second << " expected " <<
		(int)(ENVMAN_OBSERVE_ANR | ENVMAN_OBSERVE_FLOW) << std::endl;
	test.delete_observer(observer2);
	std::cout << "observers " << test.observers_length() << " expected 1" << std::endl;
	test.delete_observer(observer1);
	std::cout << "observers " << test.observers_length() << " expected 0" << std::endl;
	test.add_observer(observer1, ENVMAN_OBSERVE_ANR);
	test.add_observer(observer2, ENVMAN_OBSERVE_FLOW);
	std::cout << "observers " << test.observers_length() << " expected 2" << std::endl;
	test.delete_observer(observer3);
	std::cout << "observers " << test.observers_length() << " expected 2" << std::endl;
	test.delete_observer(observer2);
	std::cout << "observers " << test.observers_length() << " expected 1" << std::endl;
	test.delete_observer(observer1);
	std::cout << "observers " << test.observers_length() << " expected 0" << std::endl;
}
