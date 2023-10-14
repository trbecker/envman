/**
 * UE Manager API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.1.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * E2NodeManagementApi.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_API_E2NodeManagementApi_H_
#define ORG_OPENAPITOOLS_CLIENT_API_E2NodeManagementApi_H_



#include "CppRestOpenAPIClient/ApiClient.h"
#include "CppRestOpenAPIClient/ModelBase.h"
#include "CppRestOpenAPIClient/Object.h"
#include <cpprest/details/basic_types.h>
#include <boost/optional.hpp>

namespace org {
namespace openapitools {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  E2NodeManagementApi 
{
public:

    explicit E2NodeManagementApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~E2NodeManagementApi();

    /// <summary>
    /// Unregister a E2Node
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="nodeId">The ID of the E2Node to unregister</param>
    pplx::task<void> e2NodeNodeIdDelete(
        utility::string_t nodeId
    ) const;
    /// <summary>
    /// Register or update a E2Node
    /// </summary>
    /// <remarks>
    /// If the node_id exists, update the existing E2Node. Otherwise, register a new E2Node with the given node_id.
    /// </remarks>
    /// <param name="nodeId">node_id</param>
    /// <param name="body"></param>
    pplx::task<void> e2NodeNodeIdPut(
        utility::string_t nodeId,
        std::shared_ptr<Object> body
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_API_E2NodeManagementApi_H_ */

