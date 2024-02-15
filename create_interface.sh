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

podman run --rm -v "${PWD}:/local" openapitools/openapi-generator-cli generate \
    -i /local/openapi/ue_api_v1.yml \
    -g cpp-restsdk \
    -o /local/api_v1/ue_client \
    --additional-properties=packageName="ue_client"

# This needs a lot of fixes to work
podman run --rm -v "${PWD}:/local" openapitools/openapi-generator-cli generate \
    -i /local/openapi/ue_api_v1.yml \
    -g python-flask \
    -o /local/api_v1/ue_server \
    --additional-properties=packageName="ue_server"