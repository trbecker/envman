# openapi_client.E2NodeManagementApi

All URIs are relative to *https://api.server.test/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**e2_node_get**](E2NodeManagementApi.md#e2_node_get) | **GET** /E2Node | Get E2Node informations, for example E2Node ID


# **e2_node_get**
> E2NodeGet200Response e2_node_get()

Get E2Node informations, for example E2Node ID

Retrieve the E2Node informations with this E2 Node.

### Example

```python
import time
import os
import openapi_client
from openapi_client.models.e2_node_get200_response import E2NodeGet200Response
from openapi_client.rest import ApiException
from pprint import pprint

# Defining the host is optional and defaults to https://api.server.test/v1
# See configuration.py for a list of all supported configuration parameters.
configuration = openapi_client.Configuration(
    host = "https://api.server.test/v1"
)


# Enter a context with an instance of the API client
with openapi_client.ApiClient(configuration) as api_client:
    # Create an instance of the API class
    api_instance = openapi_client.E2NodeManagementApi(api_client)

    try:
        # Get E2Node informations, for example E2Node ID
        api_response = api_instance.e2_node_get()
        print("The response of E2NodeManagementApi->e2_node_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling E2NodeManagementApi->e2_node_get: %s\n" % e)
```



### Parameters
This endpoint does not need any parameter.

### Return type

[**E2NodeGet200Response**](E2NodeGet200Response.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully retrieved E2Node ID |  -  |
**404** | gNB ID not found |  -  |
**500** | Internal Server Error |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

