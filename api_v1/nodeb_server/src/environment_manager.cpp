#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include "environment_manager.h"
#include "api_impl.h"

std::map<std::string, std::shared_ptr<ue_data>> ue_map;
std::map<std::string, int32_t> association_map;

EnvironmentManager::EnvironmentManager(uint16_t port, uint16_t threads) :
    port(port), threads(threads)
{
    observers = std::make_shared<ObserverList>();
}

EnvironmentManager::~EnvironmentManager()
{ /* pass */ }

void EnvironmentManager::start()
{
    std::shared_ptr<api_config> config = std::make_shared<api_config>();
    config->port = port;
    config->observers = observers;
    config->threads = threads;
    run_api(config);
}

void EnvironmentManager::stop()
{
	stop_api();
}

void EnvironmentManager::add_observer(std::shared_ptr<EnvironmentManagerObserver> observer,
        uint32_t event_type)
{
    // Seek if the observer was added already.
    for (auto it = observers->begin(); it != observers->end(); it++) {
        if (it->first == observer) {
            it->second |= event_type;
	    return;
	}
    }

    // No observer by pointer. Create a new one.
    ObserverAndType entry(observer, event_type);
    observers->push_back(entry);
}

void EnvironmentManager::delete_observer(std::shared_ptr<EnvironmentManagerObserver> observer)
{
    auto it = observers->begin();
    while(it != observers->end())
        if (it->first == observer)
            observers->erase(it);
        else
	    it++;
}
