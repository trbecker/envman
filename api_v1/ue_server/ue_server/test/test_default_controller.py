import unittest

from flask import json

from ue_server.test import BaseTestCase


class TestDefaultController(BaseTestCase):
    """DefaultController integration test stubs"""

    def test_test_get(self):
        """Test case for test_get

        
        """
        headers = { 
        }
        response = self.client.open(
            '/v1/test',
            method='GET',
            headers=headers)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_u_eimsi_disconnect_put(self):
        """Test case for u_eimsi_disconnect_put

        
        """
        headers = { 
        }
        response = self.client.open(
            '/v1/UE/{i_msi}/disconnect'.format(i_msi='i_msi_example'),
            method='PUT',
            headers=headers)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_u_eimsi_handover_put(self):
        """Test case for u_eimsi_handover_put

        
        """
        headers = { 
        }
        response = self.client.open(
            '/v1/UE/{i_msi}/handover'.format(i_msi='i_msi_example'),
            method='PUT',
            headers=headers)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))

    def test_u_eimsi_test_put(self):
        """Test case for u_eimsi_test_put

        
        """
        headers = { 
        }
        response = self.client.open(
            '/v1/UE/{i_msi}/test'.format(i_msi='i_msi_example'),
            method='PUT',
            headers=headers)
        self.assert200(response,
                       'Response body is : ' + response.data.decode('utf-8'))


if __name__ == '__main__':
    unittest.main()
