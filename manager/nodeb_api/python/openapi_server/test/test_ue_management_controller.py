import unittest

from flask import json

from openapi_server.models.ue_disconnect_delete_request import UEDisconnectDeleteRequest  # noqa: E501
from openapi_server.models.ue_handover_post_request import UEHandoverPostRequest  # noqa: E501
from openapi_server.test import BaseTestCase


class TestUEManagementController(BaseTestCase):
    """UEManagementController integration test stubs"""

    def test_u_e_disconnect_delete(self):
        """Test case for u_e_disconnect_delete

        Disconnect UE
        """
        ue_disconnect_delete_request = openapi_server.UEDisconnectDeleteRequest()
        headers = { 
            'Content-Type': 'application/json',
        }
        response = self.client.open(
            '/v1/UE/disconnect',
            method='DELETE',
            headers=headers,
            data=json.dumps(ue_disconnect_delete_request),
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_u_e_handover_post(self):
        """Test case for u_e_handover_post

        Initiate UE handover
        """
        ue_handover_post_request = openapi_server.UEHandoverPostRequest()
        headers = { 
            'Content-Type': 'application/json',
        }
        response = self.client.open(
            '/v1/UE/handover',
            method='POST',
            headers=headers,
            data=json.dumps(ue_handover_post_request),
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    unittest.main()
