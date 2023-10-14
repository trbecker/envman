/**
* E2 Node UE API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * _UE__IMSI__put_request_available_gNBs_inner.h
 *
 * 
 */

#ifndef _UE__IMSI__put_request_available_gNBs_inner_H_
#define _UE__IMSI__put_request_available_gNBs_inner_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org::openapitools::server::model
{

/// <summary>
/// 
/// </summary>
class  _UE__IMSI__put_request_available_gNBs_inner
{
public:
    _UE__IMSI__put_request_available_gNBs_inner();
    virtual ~_UE__IMSI__put_request_available_gNBs_inner() = default;


    /// <summary>
    /// Validate the current data in the model. Throws a ValidationException on failure.
    /// </summary>
    void validate() const;

    /// <summary>
    /// Validate the current data in the model. Returns false on error and writes an error
    /// message into the given stringstream.
    /// </summary>
    bool validate(std::stringstream& msg) const;

    /// <summary>
    /// Helper overload for validate. Used when one model stores another model and calls it's validate.
    /// Not meant to be called outside that case.
    /// </summary>
    bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

    bool operator==(const _UE__IMSI__put_request_available_gNBs_inner& rhs) const;
    bool operator!=(const _UE__IMSI__put_request_available_gNBs_inner& rhs) const;

    /////////////////////////////////////////////
    /// _UE__IMSI__put_request_available_gNBs_inner members

    /// <summary>
    /// Identifier of the gNB.
    /// </summary>
    std::string getGNBID() const;
    void setGNBID(std::string const& value);
    /// <summary>
    /// Reference Signal Received Power from this gNB in dBm.
    /// </summary>
    int32_t getGNBRSRP() const;
    void setGNBRSRP(int32_t const value);
    /// <summary>
    /// Reference Signal Strength Indicator from this gNB in dBm.
    /// </summary>
    int32_t getGNBRSSI() const;
    void setGNBRSSI(int32_t const value);
    bool gNBRSSIIsSet() const;
    void unsetGNB_RSSI();
    /// <summary>
    /// Reference Signal Stringth Quality from this gNB ins dBm.
    /// </summary>
    int32_t getGNBRSRQ() const;
    void setGNBRSRQ(int32_t const value);
    bool gNBRSRQIsSet() const;
    void unsetGNB_RSRQ();
    /// <summary>
    /// Status of the gNB. Can be \&quot;true\&quot; to connected or \&quot;false\&quot; to disconnected.
    /// </summary>
    bool isConnected() const;
    void setConnected(bool const value);
    bool connectedIsSet() const;
    void unsetConnected();

    friend  void to_json(nlohmann::json& j, const _UE__IMSI__put_request_available_gNBs_inner& o);
    friend  void from_json(const nlohmann::json& j, _UE__IMSI__put_request_available_gNBs_inner& o);
protected:
    std::string m_GNB_ID;

    int32_t m_GNB_RSRP;

    int32_t m_GNB_RSSI;
    bool m_GNB_RSSIIsSet;
    int32_t m_GNB_RSRQ;
    bool m_GNB_RSRQIsSet;
    bool m_Connected;
    bool m_ConnectedIsSet;
    
};

} // namespace org::openapitools::server::model

#endif /* _UE__IMSI__put_request_available_gNBs_inner_H_ */
