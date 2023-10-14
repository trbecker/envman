# UEIMSIPutRequestAvailableGNBsInner


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**g_nb_id** | **str** | Identifier of the gNB. | 
**g_nb_rsrp** | **int** | Reference Signal Received Power from this gNB in dBm. | 
**g_nb_rssi** | **int** | Reference Signal Strength Indicator from this gNB in dBm. | [optional] 
**g_nb_rsrq** | **int** | Reference Signal Stringth Quality from this gNB ins dBm. | [optional] 
**connected** | **bool** | Status of the gNB. Can be \&quot;true\&quot; to connected or \&quot;false\&quot; to disconnected. | [optional] 

## Example

```python
from openapi_client.models.ueimsi_put_request_available_gnbs_inner import UEIMSIPutRequestAvailableGNBsInner

# TODO update the JSON string below
json = "{}"
# create an instance of UEIMSIPutRequestAvailableGNBsInner from a JSON string
ueimsi_put_request_available_gnbs_inner_instance = UEIMSIPutRequestAvailableGNBsInner.from_json(json)
# print the JSON string representation of the object
print UEIMSIPutRequestAvailableGNBsInner.to_json()

# convert the object into a dict
ueimsi_put_request_available_gnbs_inner_dict = ueimsi_put_request_available_gnbs_inner_instance.to_dict()
# create an instance of UEIMSIPutRequestAvailableGNBsInner from a dict
ueimsi_put_request_available_gnbs_inner_form_dict = ueimsi_put_request_available_gnbs_inner.from_dict(ueimsi_put_request_available_gnbs_inner_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


