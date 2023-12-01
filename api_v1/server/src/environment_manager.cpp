#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include "environment_manager.h"
#include "api_impl.h"

std::map<std::string, std::shared_ptr<ue_data>> ue_map;

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
    ObserverAndType entry(observer, event_type);
    observers->push_back(entry);
}