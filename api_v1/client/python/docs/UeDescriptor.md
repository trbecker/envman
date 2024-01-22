# UeDescriptor


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**data_plane_flow** | [**DataPlaneFlow**](DataPlaneFlow.md) |  | 
**anr_payload** | [**List[AnrPayload]**](AnrPayload.md) |  | 
**endpoint** | **str** | Endpoint url to send operation to an UE | 

## Example

```python
from openapi_client.models.ue_descriptor import UeDescriptor

# TODO update the JSON string below
json = "{}"
# create an instance of UeDescriptor from a JSON string
ue_descriptor_instance = UeDescriptor.from_json(json)
# print the JSON string representation of the object
print UeDescriptor.to_json()

# convert the object into a dict
ue_descriptor_dict = ue_descriptor_instance.to_dict()
# create an instance of UeDescriptor from a dict
ue_descriptor_form_dict = ue_descriptor.from_dict(ue_descriptor_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


