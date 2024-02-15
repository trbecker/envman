#ifndef __UE_API_CLIENT_LIB_H__
#define __UE_API_CLIENT_LIB_H__
#include <uriparser/Uri.h>

int do_test_ue(std::string &ue_uri);
int do_handover_ue(std::string &ue_uri);
int do_disconnect_ue(std::string &ue_uri);

int do_test_ue(UriUriA &uri);
int do_handover_ue(UriUriA &uri);
int do_disconnect_ue(UriUriA &uri);

#endif