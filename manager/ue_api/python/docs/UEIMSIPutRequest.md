# UEIMSIPutRequest


## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**average_throughput** | **float** | Average throughput in Mbps. Required if updating or creating. | 
**latency** | **int** | Latency in milliseconds. Required if updating or creating. | 
**rsrp** | **int** | Reference Signal Received Power in dBm. Optional if updating. | [optional] 
**sinr** | **int** | Signal-to-Interference-plus-Noise Ratio in dB. Optional if updating. | [optional] 
**cqi** | **int** | Channel Quality Indicator. Optional if updating. | [optional] 
**rsrq** | **int** | Reference Signal Received Quality. Optional if updating. | [optional] 
**bler** | **int** | Block Error Rate in percentage. Optional if updating. | [optional] 
**available_g_nbs** | [**List[UEIMSIPutRequestAvailableGNBsInner]**](UEIMSIPutRequestAvailableGNBsInner.md) | List of available gNB and their respective RSRP and RSSI in dBm. Optional if updating. | [optional] 

## Example

```python
from openapi_client.models.ueimsi_put_request import UEIMSIPutRequest

# TODO update the JSON string below
json = "{}"
# create an instance of UEIMSIPutRequest from a JSON string
ueimsi_put_request_instance = UEIMSIPutRequest.from_json(json)
# print the JSON string representation of the object
print UEIMSIPutRequest.to_json()

# convert the object into a dict
ueimsi_put_request_dict = ueimsi_put_request_instance.to_dict()
# create an instance of UEIMSIPutRequest from a dict
ueimsi_put_request_form_dict = ueimsi_put_request.from_dict(ueimsi_put_request_dict)
```
[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


