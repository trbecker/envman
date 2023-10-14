# UEsGet200Response


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**imsis_active** | **List[str]** |  | [optional] 
**message** | **str** |  | [optional] 

## Example

```python
from openapi_client.models.ues_get200_response import UEsGet200Response

# TODO update the JSON string below
json = "{}"
# create an instance of UEsGet200Response from a JSON string
ues_get200_response_instance = UEsGet200Response.from_json(json)
# print the JSON string representation of the object
print UEsGet200Response.to_json()

# convert the object into a dict
ues_get200_response_dict = ues_get200_response_instance.to_dict()
# create an instance of UEsGet200Response from a dict
ues_get200_response_form_dict = ues_get200_response.from_dict(ues_get200_response_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


