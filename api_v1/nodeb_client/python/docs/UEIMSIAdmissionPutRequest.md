# UEIMSIAdmissionPutRequest


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**nodeb** | **str** |  | [optional] 
**ue** | [**UeDescriptor**](UeDescriptor.md) |  | [optional] 

## Example

```python
from openapi_client.models.ueimsi_admission_put_request import UEIMSIAdmissionPutRequest

# TODO update the JSON string below
json = "{}"
# create an instance of UEIMSIAdmissionPutRequest from a JSON string
ueimsi_admission_put_request_instance = UEIMSIAdmissionPutRequest.from_json(json)
# print the JSON string representation of the object
print UEIMSIAdmissionPutRequest.to_json()

# convert the object into a dict
ueimsi_admission_put_request_dict = ueimsi_admission_put_request_instance.to_dict()
# create an instance of UEIMSIAdmissionPutRequest from a dict
ueimsi_admission_put_request_form_dict = ueimsi_admission_put_request.from_dict(ueimsi_admission_put_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


