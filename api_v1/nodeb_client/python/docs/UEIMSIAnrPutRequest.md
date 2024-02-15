# UEIMSIAnrPutRequest


## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**nodeb_list** | [**List[AnrPayload]**](AnrPayload.md) |  | [optional] 

## Example

```python
from openapi_client.models.ueimsi_anr_put_request import UEIMSIAnrPutRequest

# TODO update the JSON string below
json = "{}"
# create an instance of UEIMSIAnrPutRequest from a JSON string
ueimsi_anr_put_request_instance = UEIMSIAnrPutRequest.from_json(json)
# print the JSON string representation of the object
print UEIMSIAnrPutRequest.to_json()

# convert the object into a dict
ueimsi_anr_put_request_dict = ueimsi_anr_put_request_instance.to_dict()
# create an instance of UEIMSIAnrPutRequest from a dict
ueimsi_anr_put_request_form_dict = ueimsi_anr_put_request.from_dict(ueimsi_anr_put_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


