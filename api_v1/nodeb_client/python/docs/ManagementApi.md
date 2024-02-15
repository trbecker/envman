# openapi_client.ManagementApi

All URIs are relative to *https://api.server.test/v1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**u_eimsi_admission_delete**](ManagementApi.md#u_eimsi_admission_delete) | **DELETE** /UE/{iMSI}/admission | Disconnects a UE from a nodeb
[**u_eimsi_admission_put**](ManagementApi.md#u_eimsi_admission_put) | **PUT** /UE/{iMSI}/admission | Connects a UE to a nodeb
[**u_eimsi_anr_put**](ManagementApi.md#u_eimsi_anr_put) | **PUT** /UE/{iMSI}/anr | Update ANR data
[**u_eimsi_flow_put**](ManagementApi.md#u_eimsi_flow_put) | **PUT** /UE/{iMSI}/flow | update Data Plane Information


# **u_eimsi_admission_delete**
> u_eimsi_admission_delete(i_msi)

Disconnects a UE from a nodeb

### Example


```python
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
    api_instance = openapi_client.ManagementApi(api_client)
    i_msi = 'i_msi_example' # str | 

    try:
        # Disconnects a UE from a nodeb
        api_instance.u_eimsi_admission_delete(i_msi)
    except Exception as e:
        print("Exception when calling ManagementApi->u_eimsi_admission_delete: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **i_msi** | **str**|  | 

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
**200** | UE disconnected |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **u_eimsi_admission_put**
> u_eimsi_admission_put(i_msi, ueimsi_admission_put_request)

Connects a UE to a nodeb

### Example


```python
import openapi_client
from openapi_client.models.ueimsi_admission_put_request import UEIMSIAdmissionPutRequest
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
    api_instance = openapi_client.ManagementApi(api_client)
    i_msi = 'i_msi_example' # str | 
    ueimsi_admission_put_request = openapi_client.UEIMSIAdmissionPutRequest() # UEIMSIAdmissionPutRequest | 

    try:
        # Connects a UE to a nodeb
        api_instance.u_eimsi_admission_put(i_msi, ueimsi_admission_put_request)
    except Exception as e:
        print("Exception when calling ManagementApi->u_eimsi_admission_put: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **i_msi** | **str**|  | 
 **ueimsi_admission_put_request** | [**UEIMSIAdmissionPutRequest**](UEIMSIAdmissionPutRequest.md)|  | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | UE is connected |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **u_eimsi_anr_put**
> u_eimsi_anr_put(i_msi, ueimsi_anr_put_request)

Update ANR data

### Example


```python
import openapi_client
from openapi_client.models.ueimsi_anr_put_request import UEIMSIAnrPutRequest
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
    api_instance = openapi_client.ManagementApi(api_client)
    i_msi = 'i_msi_example' # str | 
    ueimsi_anr_put_request = openapi_client.UEIMSIAnrPutRequest() # UEIMSIAnrPutRequest | 

    try:
        # Update ANR data
        api_instance.u_eimsi_anr_put(i_msi, ueimsi_anr_put_request)
    except Exception as e:
        print("Exception when calling ManagementApi->u_eimsi_anr_put: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **i_msi** | **str**|  | 
 **ueimsi_anr_put_request** | [**UEIMSIAnrPutRequest**](UEIMSIAnrPutRequest.md)|  | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | ANR data updated correctly |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **u_eimsi_flow_put**
> u_eimsi_flow_put(i_msi, ueimsi_flow_put_request)

update Data Plane Information

### Example


```python
import openapi_client
from openapi_client.models.ueimsi_flow_put_request import UEIMSIFlowPutRequest
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
    api_instance = openapi_client.ManagementApi(api_client)
    i_msi = 'i_msi_example' # str | 
    ueimsi_flow_put_request = openapi_client.UEIMSIFlowPutRequest() # UEIMSIFlowPutRequest | 

    try:
        # update Data Plane Information
        api_instance.u_eimsi_flow_put(i_msi, ueimsi_flow_put_request)
    except Exception as e:
        print("Exception when calling ManagementApi->u_eimsi_flow_put: %s\n" % e)
```



### Parameters


Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
 **i_msi** | **str**|  | 
 **ueimsi_flow_put_request** | [**UEIMSIFlowPutRequest**](UEIMSIFlowPutRequest.md)|  | 

### Return type

void (empty response body)

### Authorization

No authorization required

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: Not defined

### HTTP response details

| Status code | Description | Response headers |
|-------------|-------------|------------------|
**200** | Flow updated |  -  |

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

