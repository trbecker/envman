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


#include "Nodeb_descriptor.h"
#include "Helpers.h"

#include <sstream>

namespace org::openapitools::server::model
{

Nodeb_descriptor::Nodeb_descriptor()
{
    m_Nodeb_id = "";
    
}

void Nodeb_descriptor::validate() const
{
    std::stringstream msg;
    if (!validate(msg))
    {
        throw org::openapitools::server::helpers::ValidationException(msg.str());
    }
}

bool Nodeb_descriptor::validate(std::stringstream& msg) const
{
    return validate(msg, "");
}

bool Nodeb_descriptor::validate(std::stringstream& msg, const std::string& pathPrefix) const
{
    bool success = true;
    const std::string _pathPrefix = pathPrefix.empty() ? "Nodeb_descriptor" : pathPrefix;

        
    return success;
}

bool Nodeb_descriptor::operator==(const Nodeb_descriptor& rhs) const
{
    return
    
    
    (getNodebId() == rhs.getNodebId())
    
    
    ;
}

bool Nodeb_descriptor::operator!=(const Nodeb_descriptor& rhs) const
{
    return !(*this == rhs);
}

void to_json(nlohmann::json& j, const Nodeb_descriptor& o)
{
    j = nlohmann::json::object();
    j["nodeb_id"] = o.m_Nodeb_id;
    
}

void from_json(const nlohmann::json& j, Nodeb_descriptor& o)
{
    j.at("nodeb_id").get_to(o.m_Nodeb_id);
    
}

std::string Nodeb_descriptor::getNodebId() const
{
    return m_Nodeb_id;
}
void Nodeb_descriptor::setNodebId(std::string const& value)
{
    m_Nodeb_id = value;
}


} // namespace org::openapitools::server::model
