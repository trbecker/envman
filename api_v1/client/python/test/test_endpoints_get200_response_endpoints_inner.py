# coding: utf-8

"""
    E2 Node API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

    The version of the OpenAPI document: 1.0
    Generated by OpenAPI Generator (https://openapi-generator.tech)

    Do not edit the class manually.
"""  # noqa: E501


import unittest
import datetime

from openapi_client.models.endpoints_get200_response_endpoints_inner import EndpointsGet200ResponseEndpointsInner  # noqa: E501

class TestEndpointsGet200ResponseEndpointsInner(unittest.TestCase):
    """EndpointsGet200ResponseEndpointsInner unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional) -> EndpointsGet200ResponseEndpointsInner:
        """Test EndpointsGet200ResponseEndpointsInner
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # uncomment below to create an instance of `EndpointsGet200ResponseEndpointsInner`
        """
        model = EndpointsGet200ResponseEndpointsInner()  # noqa: E501
        if include_optional:
            return EndpointsGet200ResponseEndpointsInner(
                method = '',
                uri = '',
                description = ''
            )
        else:
            return EndpointsGet200ResponseEndpointsInner(
        )
        """

    def testEndpointsGet200ResponseEndpointsInner(self):
        """Test EndpointsGet200ResponseEndpointsInner"""
        # inst_req_only = self.make_instance(include_optional=False)
        # inst_req_and_optional = self.make_instance(include_optional=True)

if __name__ == '__main__':
    unittest.main()