import connexion
from typing import Dict
from typing import Tuple
from typing import Union

from openapi_server.models.ue_disconnect_delete_request import UEDisconnectDeleteRequest  # noqa: E501
from openapi_server.models.ue_handover_post_request import UEHandoverPostRequest  # noqa: E501
from openapi_server import util


def u_e_disconnect_delete(ue_disconnect_delete_request):  # noqa: E501
    """Disconnect UE

     # noqa: E501

    :param ue_disconnect_delete_request: 
    :type ue_disconnect_delete_request: dict | bytes

    :rtype: Union[None, Tuple[None, int], Tuple[None, int, Dict[str, str]]
    """
    if connexion.request.is_json:
        ue_disconnect_delete_request = UEDisconnectDeleteRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'


def u_e_handover_post(ue_handover_post_request):  # noqa: E501
    """Initiate UE handover

     # noqa: E501

    :param ue_handover_post_request: 
    :type ue_handover_post_request: dict | bytes

    :rtype: Union[None, Tuple[None, int], Tuple[None, int, Dict[str, str]]
    """
    if connexion.request.is_json:
        ue_handover_post_request = UEHandoverPostRequest.from_dict(connexion.request.get_json())  # noqa: E501
    return 'do some magic!'
