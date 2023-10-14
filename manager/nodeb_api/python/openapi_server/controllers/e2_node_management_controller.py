import connexion
from typing import Dict
from typing import Tuple
from typing import Union

from openapi_server import util


def e2_node_node_id_delete(node_id):  # noqa: E501
    """Unregister a E2Node

     # noqa: E501

    :param node_id: The ID of the E2Node to unregister
    :type node_id: str

    :rtype: Union[None, Tuple[None, int], Tuple[None, int, Dict[str, str]]
    """
    return 'do some magic!'


def e2_node_node_id_put(node_id, body):  # noqa: E501
    """Register or update a E2Node

    If the node_id exists, update the existing E2Node. Otherwise, register a new E2Node with the given node_id. # noqa: E501

    :param node_id: node_id
    :type node_id: str
    :param body: 
    :type body: 

    :rtype: Union[None, Tuple[None, int], Tuple[None, int, Dict[str, str]]
    """
    return 'do some magic!'
