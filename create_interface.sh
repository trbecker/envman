#!/bin/bash

mkdir -p simulator/ue_api simulator/nodeb_api manager/nodeb_api/python  manager/ue_api/python

podman run --rm -v "${PWD}:/local" openapitools/openapi-generator-cli generate \
    -i  /local/openapi/E2Node_UE_api.yml \
    -g cpp-pistache-server \
    -o /local/simulator/ue_api

podman run --rm -v "${PWD}:/local" openapitools/openapi-generator-cli generate \
    -i  /local/openapi/UE_Manager_api.yml \
    -g cpp-restsdk \
    -o /local/simulator/nodeb_api


podman run --rm -v "${PWD}:/local" openapitools/openapi-generator-cli generate \
    -i  /local/openapi/UE_Manager_api.yml \
    -g python-flask \
    -o /local/manager/nodeb_api/python

podman run --rm -v "${PWD}:/local" openapitools/openapi-generator-cli generate \
    -i  /local/openapi/E2Node_UE_api.yml \
    -g python \
    -o /local/manager/ue_api/python
