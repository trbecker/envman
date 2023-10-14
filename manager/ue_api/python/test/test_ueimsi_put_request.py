# coding: utf-8

"""
    E2 Node UE API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

    The version of the OpenAPI document: 1.0
    Generated by OpenAPI Generator (https://openapi-generator.tech)

    Do not edit the class manually.
"""  # noqa: E501


import unittest
import datetime

from openapi_client.models.ueimsi_put_request import UEIMSIPutRequest  # noqa: E501

class TestUEIMSIPutRequest(unittest.TestCase):
    """UEIMSIPutRequest unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional) -> UEIMSIPutRequest:
        """Test UEIMSIPutRequest
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # uncomment below to create an instance of `UEIMSIPutRequest`
        """
        model = UEIMSIPutRequest()  # noqa: E501
        if include_optional:
            return UEIMSIPutRequest(
                average_throughput = 55.5,
                latency = 90,
                rsrp = -98,
                sinr = 22,
                cqi = 10,
                rsrq = -14,
                bler = 1,
                available_g_nbs = [{"gNB_ID":"gNB12345","gNB_RSRP":-96,"connected":true},{"gNB_ID":"gNB67890","gNB_RSRP":-100,"connected":false}]
            )
        else:
            return UEIMSIPutRequest(
                average_throughput = 55.5,
                latency = 90,
        )
        """

    def testUEIMSIPutRequest(self):
        """Test UEIMSIPutRequest"""
        # inst_req_only = self.make_instance(include_optional=False)
        # inst_req_and_optional = self.make_instance(include_optional=True)

if __name__ == '__main__':
    unittest.main()
