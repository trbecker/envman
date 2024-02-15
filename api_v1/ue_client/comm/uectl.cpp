#include <ue_client/api/DefaultApi.h>
#include <boost/program_options.hpp>

namespace api = org::openapitools::client::api;
namespace http_client = web::http::client;
namespace http = web::http;
namespace po = boost::program_options;

#define DEFAULT_SIMULATOR_HOST "http://127.0.0.1:8080/v1";

std::shared_ptr<api::DefaultApi> get_api(std::string base_url)
{
    std::shared_ptr<api::ApiConfiguration> config =
        std::make_shared<api::ApiConfiguration>();
    config->setBaseUrl(base_url);

    std::shared_ptr<api::ApiClient> client =
        std::make_shared<api::ApiClient>(config);

    return std::make_shared<api::DefaultApi>(client);
}

void do_test(std::shared_ptr<api::DefaultApi> api)
{
    try {
        api->testGet().get();
    } catch (api::ApiException &e) {
        std::cerr << e.what() << std::endl;
    }
}

int do_handover(std::shared_ptr<api::DefaultApi> api, std::string iMSI)
{
    try {
        api->uEIMSIHandoverPut(iMSI);
        return http::status_codes::Accepted;
    } catch (api::ApiException &e) {
        return e.error_code().value();
    }
}

int do_disconnect(std::shared_ptr<api::DefaultApi> api, std::string iMSI)
{
    try
    {
        api->uEIMSIDisconnectPut(iMSI);
        return http::status_codes::Accepted;
    }
    catch (api::ApiException &e)
    {
        return e.error_code().value();
    }
}

int main(int argc, char **argv)
{
    std::string base_url = DEFAULT_SIMULATOR_HOST;

    po::options_description desc("Allowed options");
    desc.add_options()
        ("ue-simulator-host", "IP address of the UE simulator")
        ("test", "Test the api")
        ("disconnect", po::value<std::string>(), "disconnect an UE")
        ("handover", po::value<std::string>(), "handover a UE");

    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);

    if (vm.count("ue-simulator-host")) {
        base_url = vm["ue-simulator-host"].as<std::string>();
    }

    std::cout << "Base URL is " << base_url << std::endl;
    auto api = get_api(base_url);

    if (vm.count("test")) {
        do_test(api);
        return 0;
    }

    if (vm.count("disconnect")) {
        std::string iMSI = vm["disconnect"].as<std::string>();
        do_disconnect(api, iMSI);
    }

    if (vm.count("handover"))
    {
        std::string iMSI = vm["handover"].as<std::string>();
        do_handover(api, iMSI);
    }

    return 0;
}