#include "lib.h"

#include <uriparser/Uri.h>

#include <cerrno>

int do_test_ue(std::string &ue_uri)
{
    UriUriA uri;
    const char * error_pos;

    if (uriParseSingleUriA(&uri, ue_uri.c_str(), &error_pos) != URI_SUCCESS) {
        return -EINVAL;
    }
}
int do_handover_ue(std::string &ue_uri)
{

}

int do_disconnect_ue(std::string &ue_uri)
{

}

int do_test_ue(UriUriA &uri)
{

}

int do_handover_ue(UriUriA &uri)
{

}

int do_disconnect_ue(UriUriA &uri)
{

}