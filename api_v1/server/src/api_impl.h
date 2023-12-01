#ifndef __ENVMAN_API_IMPL_H__
#define __ENVMAN_API_IMPL_H__

#include "environment_manager.h"

class api_config {
public:
    std::shared_ptr<ObserverList> observers;
    uint16_t port;
    uint16_t threads;
};


void run_api(std::shared_ptr<api_config> config);
void stop_api();

#endif