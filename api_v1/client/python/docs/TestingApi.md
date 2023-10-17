# openapi_client.TestingApi

All URIs are relative to *https://api.server.test/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**test_get**](TestingApi.md#test_get) | **GET** /test | Test API connectivity


# **test_get**
> test_get()

Test API connectivity

### Example

```python
import time
import os
import openapi_client
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
    api_instance = openapi_client.TestingApi(api_client)

    try:
        # Test API connectivity
        api_instance.test_get()
    except Exception as e:
        print("Exception when calling TestingApi->test_get: %s\n" % e)
```



### Parameters
This endpoint does not need any parameter.

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | API is reachable |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

