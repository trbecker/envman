#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>

#include "environment_manager.h"
#include "api_impl.h"

std::map<std::string, std::shared_ptr<ue_data>> ue_map;

EnvironmentManager::EnvironmentManager(
    uint16_t port, uint16_t threads,
    std::shared_ptr<EnvironmentManagerObserver> observer) :
    port(port), threads(threads), observer(observer)
{ /* pass*/ }

EnvironmentManager::~EnvironmentManager()
{ /* pass */ }

void EnvironmentManager::start()
{
    std::shared_ptr<api_config> config = std::make_shared<api_config>();
    config->port = port;
    config->observer = observer;
    config->threads = threads;
    run_api(config);
}

void EnvironmentManager::stop()
{
	stop_api();
}
