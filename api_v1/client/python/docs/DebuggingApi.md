# openapi_client.DebuggingApi

All URIs are relative to *https://api.server.test/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**u_e_get**](DebuggingApi.md#u_e_get) | **GET** /UE | Get the list of UEs connected to the NodeB
[**u_eimsi_info_get**](DebuggingApi.md#u_eimsi_info_get) | **GET** /UE/{iMSI}/info | Get the information of the UE associated with the NodeB


# **u_e_get**
> UEGet200Response u_e_get()

Get the list of UEs connected to the NodeB

### Example


```python
import openapi_client
from openapi_client.models.ue_get200_response import UEGet200Response
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
    api_instance = openapi_client.DebuggingApi(api_client)

    try:
        # Get the list of UEs connected to the NodeB
        api_response = api_instance.u_e_get()
        print("The response of DebuggingApi->u_e_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling DebuggingApi->u_e_get: %s\n" % e)
```



### Parameters

This endpoint does not need any parameter.

### Return type

[**UEGet200Response**](UEGet200Response.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | UE list |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **u_eimsi_info_get**
> UEIMSIInfoGet200Response u_eimsi_info_get(i_msi)

Get the information of the UE associated with the NodeB

### Example


```python
import openapi_client
from openapi_client.models.ueimsi_info_get200_response import UEIMSIInfoGet200Response
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
    api_instance = openapi_client.DebuggingApi(api_client)
    i_msi = 'i_msi_example' # str | 

    try:
        # Get the information of the UE associated with the NodeB
        api_response = api_instance.u_eimsi_info_get(i_msi)
        print("The response of DebuggingApi->u_eimsi_info_get:\n")
        pprint(api_response)
    except Exception as e:
        print("Exception when calling DebuggingApi->u_eimsi_info_get: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **i_msi** | **str**|  | 

### Return type

[**UEIMSIInfoGet200Response**](UEIMSIInfoGet200Response.md)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | UE info provided |  -  |
**404** | UE not found |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

