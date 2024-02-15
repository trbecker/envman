# UEIMSIFlowPutRequest


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**flow** | [**DataPlaneFlow**](DataPlaneFlow.md) |  | [optional] 

## Example

```python
from openapi_client.models.ueimsi_flow_put_request import UEIMSIFlowPutRequest

# TODO update the JSON string below
json = "{}"
# create an instance of UEIMSIFlowPutRequest from a JSON string
ueimsi_flow_put_request_instance = UEIMSIFlowPutRequest.from_json(json)
# print the JSON string representation of the object
print UEIMSIFlowPutRequest.to_json()

# convert the object into a dict
ueimsi_flow_put_request_dict = ueimsi_flow_put_request_instance.to_dict()
# create an instance of UEIMSIFlowPutRequest from a dict
ueimsi_flow_put_request_form_dict = ueimsi_flow_put_request.from_dict(ueimsi_flow_put_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


