# EndpointsGet200Response


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**endpoints** | [**List[EndpointsGet200ResponseEndpointsInner]**](EndpointsGet200ResponseEndpointsInner.md) |  | [optional] 

## Example

```python
from openapi_client.models.endpoints_get200_response import EndpointsGet200Response

# TODO update the JSON string below
json = "{}"
# create an instance of EndpointsGet200Response from a JSON string
endpoints_get200_response_instance = EndpointsGet200Response.from_json(json)
# print the JSON string representation of the object
print EndpointsGet200Response.to_json()

# convert the object into a dict
endpoints_get200_response_dict = endpoints_get200_response_instance.to_dict()
# create an instance of EndpointsGet200Response from a dict
endpoints_get200_response_form_dict = endpoints_get200_response.from_dict(endpoints_get200_response_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


