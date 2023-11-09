/**
* E2 Node API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "_UE_get_200_response.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

_UE_get_200_response::_UE_get_200_response()
{
    m_Ue_listIsSet = false;
    
}

void _UE_get_200_response::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool _UE_get_200_response::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool _UE_get_200_response::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "_UE_get_200_response" : pathPrefix;

         
    if (ueListIsSet())
    {
        const std::vector<std::string>& value = m_Ue_list;
        const std::string currentValuePath = _pathPrefix + ".ueList";
                
        
        { // Recursive validation of array elements
            const std::string oldValuePath = currentValuePath;
            int i = 0;
            for (const std::string& value : value)
            { 
                const std::string currentValuePath = oldValuePath + "[" + std::to_string(i) + "]";
                        
        
 
                i++;
            }
        }

    }
    
    return success;
}

bool _UE_get_200_response::operator==(const _UE_get_200_response& rhs) const
{
    return
    
    
    
    ((!ueListIsSet() && !rhs.ueListIsSet()) || (ueListIsSet() && rhs.ueListIsSet() && getUeList() == rhs.getUeList()))
    
    ;
}

bool _UE_get_200_response::operator!=(const _UE_get_200_response& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const _UE_get_200_response& o)
{
    j = nlohmann::json::object();
    if(o.ueListIsSet() || !o.m_Ue_list.empty())
        j["ue_list"] = o.m_Ue_list;
    
}

void from_json(const nlohmann::json& j, _UE_get_200_response& o)
{
    if(j.find("ue_list") != j.end())
    {
        j.at("ue_list").get_to(o.m_Ue_list);
        o.m_Ue_listIsSet = true;
    } 
    
}

std::vector<std::string> _UE_get_200_response::getUeList() const
{
    return m_Ue_list;
}
void _UE_get_200_response::setUeList(std::vector<std::string> const& value)
{
    m_Ue_list = value;
    m_Ue_listIsSet = true;
}
bool _UE_get_200_response::ueListIsSet() const
{
    return m_Ue_listIsSet;
}
void _UE_get_200_response::unsetUe_list()
{
    m_Ue_listIsSet = false;
}


} // namespace org::openapitools::server::model
