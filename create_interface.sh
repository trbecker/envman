#!/bin/bash

mkdir -p api_v1/{server,client/python}

podman run --rm -v "${PWD}:/local" openapitools/openapi-generator-cli generate \
    -i  /local/openapi/api_v1.yml \
    -g cpp-pistache-server \
    -o /local/api_v1/server

podman run --rm -v "${PWD}:/local" openapitools/openapi-generator-cli generate \
    -i  /local/openapi/api_v1.yml \
    -g python \
    -o /local/api_v1/client/python
