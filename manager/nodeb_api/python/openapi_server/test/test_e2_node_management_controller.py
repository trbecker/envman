import unittest

from flask import json

from openapi_server.test import BaseTestCase


class TestE2NodeManagementController(BaseTestCase):
    """E2NodeManagementController integration test stubs"""

    def test_e2_node_node_id_delete(self):
        """Test case for e2_node_node_id_delete

        Unregister a E2Node
        """
        headers = { 
        }
        response = self.client.open(
            '/v1/E2Node/{node_id}'.format(node_id='node_id_example'),
            method='DELETE',
            headers=headers)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_e2_node_node_id_put(self):
        """Test case for e2_node_node_id_put

        Register or update a E2Node
        """
        body = None
        headers = { 
            'Content-Type': 'application/json',
        }
        response = self.client.open(
            '/v1/E2Node/{node_id}'.format(node_id='node_id_example'),
            method='PUT',
            headers=headers,
            data=json.dumps(body),
            content_type='application/json')
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    unittest.main()
