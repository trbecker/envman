from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from ue_server.models.base_model import Model
from ue_server import util


class CellDescriptor(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, mnc=None, mcc=None, nodeb_id=None):  # noqa: E501
        """CellDescriptor - a model defined in OpenAPI

        :param mnc: The mnc of this CellDescriptor.  # noqa: E501
        :type mnc: str
        :param mcc: The mcc of this CellDescriptor.  # noqa: E501
        :type mcc: str
        :param nodeb_id: The nodeb_id of this CellDescriptor.  # noqa: E501
        :type nodeb_id: int
        """
        self.openapi_types = {
            'mnc': str,
            'mcc': str,
            'nodeb_id': int
        }

        self.attribute_map = {
            'mnc': 'mnc',
            'mcc': 'mcc',
            'nodeb_id': 'nodeb_id'
        }

        self._mnc = mnc
        self._mcc = mcc
        self._nodeb_id = nodeb_id

    @classmethod
    def from_dict(cls, dikt) -> 'CellDescriptor':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The cell_descriptor of this CellDescriptor.  # noqa: E501
        :rtype: CellDescriptor
        """
        return util.deserialize_model(dikt, cls)

    @property
    def mnc(self) -> str:
        """Gets the mnc of this CellDescriptor.


        :return: The mnc of this CellDescriptor.
        :rtype: str
        """
        return self._mnc

    @mnc.setter
    def mnc(self, mnc: str):
        """Sets the mnc of this CellDescriptor.


        :param mnc: The mnc of this CellDescriptor.
        :type mnc: str
        """

        self._mnc = mnc

    @property
    def mcc(self) -> str:
        """Gets the mcc of this CellDescriptor.


        :return: The mcc of this CellDescriptor.
        :rtype: str
        """
        return self._mcc

    @mcc.setter
    def mcc(self, mcc: str):
        """Sets the mcc of this CellDescriptor.


        :param mcc: The mcc of this CellDescriptor.
        :type mcc: str
        """

        self._mcc = mcc

    @property
    def nodeb_id(self) -> int:
        """Gets the nodeb_id of this CellDescriptor.


        :return: The nodeb_id of this CellDescriptor.
        :rtype: int
        """
        return self._nodeb_id

    @nodeb_id.setter
    def nodeb_id(self, nodeb_id: int):
        """Sets the nodeb_id of this CellDescriptor.


        :param nodeb_id: The nodeb_id of this CellDescriptor.
        :type nodeb_id: int
        """

        self._nodeb_id = nodeb_id
