# coding: utf-8

"""
    E2 Node API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

    The version of the OpenAPI document: 1.0
    Generated by OpenAPI Generator (https://openapi-generator.tech)

    Do not edit the class manually.
"""  # noqa: E501


from __future__ import annotations
import pprint
import re  # noqa: F401
import json

from pydantic import BaseModel, Field, StrictFloat, StrictInt
from typing import Any, ClassVar, Dict, List, Union
from openapi_client.models.nodeb_descriptor import NodebDescriptor
from typing import Optional, Set
from typing_extensions import Self

class AnrPayload(BaseModel):
    """
    AnrPayload
    """ # noqa: E501
    nodeb: NodebDescriptor
    rsrp: Union[StrictFloat, StrictInt] = Field(alias="RSRP")
    rsrq: Union[StrictFloat, StrictInt] = Field(alias="RSRQ")
    sinr: Union[StrictFloat, StrictInt] = Field(alias="SINR")
    cqi: Union[StrictFloat, StrictInt] = Field(alias="CQI")
    bler: Union[StrictFloat, StrictInt] = Field(alias="BLER")
    __properties: ClassVar[List[str]] = ["nodeb", "RSRP", "RSRQ", "SINR", "CQI", "BLER"]

    model_config = {
        "populate_by_name": True,
        "validate_assignment": True,
        "protected_namespaces": (),
    }


    def to_str(self) -> str:
        """Returns the string representation of the model using alias"""
        return pprint.pformat(self.model_dump(by_alias=True))

    def to_json(self) -> str:
        """Returns the JSON representation of the model using alias"""
        # TODO: pydantic v2: use .model_dump_json(by_alias=True, exclude_unset=True) instead
        return json.dumps(self.to_dict())

    @classmethod
    def from_json(cls, json_str: str) -> Optional[Self]:
        """Create an instance of AnrPayload from a JSON string"""
        return cls.from_dict(json.loads(json_str))

    def to_dict(self) -> Dict[str, Any]:
        """Return the dictionary representation of the model using alias.

        This has the following differences from calling pydantic's
        `self.model_dump(by_alias=True)`:

        * `None` is only added to the output dict for nullable fields that
          were set at model initialization. Other fields with value `None`
          are ignored.
        """
        excluded_fields: Set[str] = set([
        ])

        _dict = self.model_dump(
            by_alias=True,
            exclude=excluded_fields,
            exclude_none=True,
        )
        # override the default output from pydantic by calling `to_dict()` of nodeb
        if self.nodeb:
            _dict['nodeb'] = self.nodeb.to_dict()
        return _dict

    @classmethod
    def from_dict(cls, obj: Optional[Dict[str, Any]]) -> Optional[Self]:
        """Create an instance of AnrPayload from a dict"""
        if obj is None:
            return None

        if not isinstance(obj, dict):
            return cls.model_validate(obj)

        _obj = cls.model_validate({
            "nodeb": NodebDescriptor.from_dict(obj["nodeb"]) if obj.get("nodeb") is not None else None,
            "RSRP": obj.get("RSRP"),
            "RSRQ": obj.get("RSRQ"),
            "SINR": obj.get("SINR"),
            "CQI": obj.get("CQI"),
            "BLER": obj.get("BLER")
        })
        return _obj


