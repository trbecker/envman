# openapi_client.UEManagementApi

All URIs are relative to *https://api.server.test/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**u_eimsi_delete**](UEManagementApi.md#u_eimsi_delete) | **DELETE** /UE/{IMSI} | Unregister a mobile UE
[**u_eimsi_put**](UEManagementApi.md#u_eimsi_put) | **PUT** /UE/{IMSI} | Create or update information for a mobile UE
[**u_es_get**](UEManagementApi.md#u_es_get) | **GET** /UEs | List all active UE&#39;s IMSIs


# **u_eimsi_delete**
> u_eimsi_delete(imsi)

Unregister a mobile UE

Unregister a mobile UE based on their IMSI.

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
    api_instance = openapi_client.UEManagementApi(api_client)
    imsi = 'imsi_example' # str | International Mobile Subscriber Identity to be Unregistrered

    try:
        # Unregister a mobile UE
        api_instance.u_eimsi_delete(imsi)
    except Exception as e:
        print("Exception when calling UEManagementApi->u_eimsi_delete: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imsi** | **str**| International Mobile Subscriber Identity to be Unregistrered | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | UE successfully unregistrered |  -  |
**404** | UE not found |  -  |
**500** | Internal Server Error. Could be due to database issues or other internal problems. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **u_eimsi_put**
> u_eimsi_put(imsi, ueimsi_put_request)

Create or update information for a mobile UE

If the IMSI exists, update the metrics for the mobile UE. Otherwise, create a new mobile UE.

### Example

```python
import time
import os
import openapi_client
from openapi_client.models.ueimsi_put_request import UEIMSIPutRequest
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
    api_instance = openapi_client.UEManagementApi(api_client)
    imsi = 'imsi_example' # str | International Mobile Subscriber Identity
    ueimsi_put_request = openapi_client.UEIMSIPutRequest() # UEIMSIPutRequest | 

    try:
        # Create or update information for a mobile UE
        api_instance.u_eimsi_put(imsi, ueimsi_put_request)
    except Exception as e:
        print("Exception when calling UEManagementApi->u_eimsi_put: %s\n" % e)
```



### Parameters

Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **imsi** | **str**| International Mobile Subscriber Identity | 
 **ueimsi_put_request** | [**UEIMSIPutRequest**](UEIMSIPutRequest.md)|  | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | UE information successfully updated |  -  |
**201** | UE created successfully |  -  |
**400** | Bad Request, Invalid input. Could be due to invalid IMSI or missing parameters. |  -  |
**500** | Internal Server Error. Could be due to database issues or other internal problems. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **u_es_get**
> UEsGet200Response u_es_get()

List all active UE's IMSIs

Retrieve a list of all IMSIs that are currently active on this E2 Node.

### Example

```python
import time
import os
import openapi_client
from openapi_client.models.ues_get200_response import UEsGet200Response
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
    api_instance = openapi_client.UEManagementApi(api_client)

    try:
        # List all active UE's IMSIs
        api_response = api_instance.u_es_get()
        print("The response of UEManagementApi->u_es_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling UEManagementApi->u_es_get: %s\n" % e)
```



### Parameters
This endpoint does not need any parameter.

### Return type

[**UEsGet200Response**](UEsGet200Response.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details
| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Successfully retrieved list. The list could be empty if no IMSIs are active. |  -  |
**404** | No UE found on this E2 Node |  -  |
**500** | Internal Server Error. Could be due to database issues or other internal problems. |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

