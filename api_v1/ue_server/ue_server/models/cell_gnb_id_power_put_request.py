from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from ue_server.models.base_model import Model
from ue_server.models.cell_descriptor import CellDescriptor
from ue_server import util

from ue_server.models.cell_descriptor import CellDescriptor  # noqa: E501

class CellGnbIdPowerPutRequest(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, target_cell=None, target_power=None):  # noqa: E501
        """CellGnbIdPowerPutRequest - a model defined in OpenAPI

        :param target_cell: The target_cell of this CellGnbIdPowerPutRequest.  # noqa: E501
        :type target_cell: CellDescriptor
        :param target_power: The target_power of this CellGnbIdPowerPutRequest.  # noqa: E501
        :type target_power: float
        """
        self.openapi_types = {
            'target_cell': CellDescriptor,
            'target_power': float
        }

        self.attribute_map = {
            'target_cell': 'target_cell',
            'target_power': 'target_power'
        }

        self._target_cell = target_cell
        self._target_power = target_power

    @classmethod
    def from_dict(cls, dikt) -> 'CellGnbIdPowerPutRequest':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The _cell__gnb_id__power_put_request of this CellGnbIdPowerPutRequest.  # noqa: E501
        :rtype: CellGnbIdPowerPutRequest
        """
        return util.deserialize_model(dikt, cls)

    @property
    def target_cell(self) -> CellDescriptor:
        """Gets the target_cell of this CellGnbIdPowerPutRequest.


        :return: The target_cell of this CellGnbIdPowerPutRequest.
        :rtype: CellDescriptor
        """
        return self._target_cell

    @target_cell.setter
    def target_cell(self, target_cell: CellDescriptor):
        """Sets the target_cell of this CellGnbIdPowerPutRequest.


        :param target_cell: The target_cell of this CellGnbIdPowerPutRequest.
        :type target_cell: CellDescriptor
        """

        self._target_cell = target_cell

    @property
    def target_power(self) -> float:
        """Gets the target_power of this CellGnbIdPowerPutRequest.


        :return: The target_power of this CellGnbIdPowerPutRequest.
        :rtype: float
        """
        return self._target_power

    @target_power.setter
    def target_power(self, target_power: float):
        """Sets the target_power of this CellGnbIdPowerPutRequest.


        :param target_power: The target_power of this CellGnbIdPowerPutRequest.
        :type target_power: float
        """

        self._target_power = target_power
