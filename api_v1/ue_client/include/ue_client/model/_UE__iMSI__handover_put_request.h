/**
 * UE Control API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.6.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * _UE__iMSI__handover_put_request.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL__UE__iMSI__handover_put_request_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL__UE__iMSI__handover_put_request_H_


#include "ue_client/ModelBase.h"

#include "ue_client/model/Cell_descriptor.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Cell_descriptor;

/// <summary>
/// 
/// </summary>
class  _UE__iMSI__handover_put_request
    : public ModelBase
{
public:
    _UE__iMSI__handover_put_request();
    virtual ~_UE__iMSI__handover_put_request();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// _UE__iMSI__handover_put_request members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Cell_descriptor> getTargetCell() const;
    bool targetCellIsSet() const;
    void unsetTarget_cell();

    void setTargetCell(const std::shared_ptr<Cell_descriptor>& value);


protected:
    std::shared_ptr<Cell_descriptor> m_Target_cell;
    bool m_Target_cellIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL__UE__iMSI__handover_put_request_H_ */
