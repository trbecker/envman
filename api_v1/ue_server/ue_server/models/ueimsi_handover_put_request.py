from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from ue_server.models.base_model import Model
from ue_server.models.cell_descriptor import CellDescriptor
from ue_server import util

from ue_server.models.cell_descriptor import CellDescriptor  # noqa: E501

class UEIMSIHandoverPutRequest(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, target_cell=None):  # noqa: E501
        """UEIMSIHandoverPutRequest - a model defined in OpenAPI

        :param target_cell: The target_cell of this UEIMSIHandoverPutRequest.  # noqa: E501
        :type target_cell: CellDescriptor
        """
        self.openapi_types = {
            'target_cell': CellDescriptor
        }

        self.attribute_map = {
            'target_cell': 'target_cell'
        }

        self._target_cell = target_cell

    @classmethod
    def from_dict(cls, dikt) -> 'UEIMSIHandoverPutRequest':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The _UE__iMSI__handover_put_request of this UEIMSIHandoverPutRequest.  # noqa: E501
        :rtype: UEIMSIHandoverPutRequest
        """
        return util.deserialize_model(dikt, cls)

    @property
    def target_cell(self) -> CellDescriptor:
        """Gets the target_cell of this UEIMSIHandoverPutRequest.


        :return: The target_cell of this UEIMSIHandoverPutRequest.
        :rtype: CellDescriptor
        """
        return self._target_cell

    @target_cell.setter
    def target_cell(self, target_cell: CellDescriptor):
        """Sets the target_cell of this UEIMSIHandoverPutRequest.


        :param target_cell: The target_cell of this UEIMSIHandoverPutRequest.
        :type target_cell: CellDescriptor
        """

        self._target_cell = target_cell
