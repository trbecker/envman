import connexion
from typing import Dict
from typing import Tuple
from typing import Union

from ue_server.models.cell_gnb_id_power_put_request import CellGnbIdPowerPutRequest  # noqa: E501
from ue_server.models.ueimsi_handover_put_request import UEIMSIHandoverPutRequest  # noqa: E501
from ue_server import util


def cell_gnb_id_power_put(gnb_id, cell_gnb_id_power_put_request):  # noqa: E501
    """cell_gnb_id_power_put

     # noqa: E501

    :param gnb_id: 
    :type gnb_id: int
    :param cell_gnb_id_power_put_request: 
    :type cell_gnb_id_power_put_request: dict | bytes

    :rtype: Union[None, Tuple[None, int], Tuple[None, int, Dict[str, str]]
    """
    if connexion.request.is_json:
        cell_gnb_id_power_put_request = CellGnbIdPowerPutRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def test_get():  # noqa: E501
    """test_get

     # noqa: E501


    :rtype: Union[None, Tuple[None, int], Tuple[None, int, Dict[str, str]]
    """
    return 'do some magic!'


def u_eimsi_disconnect_put(i_msi):  # noqa: E501
    """u_eimsi_disconnect_put

     # noqa: E501

    :param i_msi: 
    :type i_msi: str

    :rtype: Union[None, Tuple[None, int], Tuple[None, int, Dict[str, str]]
    """
    return 'do some magic!'


def u_eimsi_handover_put(i_msi, ueimsi_handover_put_request):  # noqa: E501
    """u_eimsi_handover_put

     # noqa: E501

    :param i_msi: 
    :type i_msi: str
    :param ueimsi_handover_put_request: 
    :type ueimsi_handover_put_request: dict | bytes

    :rtype: Union[None, Tuple[None, int], Tuple[None, int, Dict[str, str]]
    """
    if connexion.request.is_json:
        ueimsi_handover_put_request = UEIMSIHandoverPutRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def u_eimsi_test_put(i_msi):  # noqa: E501
    """u_eimsi_test_put

     # noqa: E501

    :param i_msi: 
    :type i_msi: str

    :rtype: Union[None, Tuple[None, int], Tuple[None, int, Dict[str, str]]
    """
    return 'do some magic!'
