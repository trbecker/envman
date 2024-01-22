# AnrPayload


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**nodeb** | [**NodebDescriptor**](NodebDescriptor.md) |  | 
**rsrp** | **float** |  | 
**rsrq** | **float** |  | 
**sinr** | **float** |  | 
**cqi** | **float** |  | 
**bler** | **float** |  | 

## Example

```python
from openapi_client.models.anr_payload import AnrPayload

# TODO update the JSON string below
json = "{}"
# create an instance of AnrPayload from a JSON string
anr_payload_instance = AnrPayload.from_json(json)
# print the JSON string representation of the object
print AnrPayload.to_json()

# convert the object into a dict
anr_payload_dict = anr_payload_instance.to_dict()
# create an instance of AnrPayload from a dict
anr_payload_form_dict = anr_payload.from_dict(anr_payload_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


