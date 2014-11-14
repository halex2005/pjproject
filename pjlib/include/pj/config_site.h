#pragma once

#define PJ_HAS_SSL_SOCK 1
#define PJSIP_HAS_TLS_TRANSPORT 1

#if defined(_WIN64) || defined(WIN64) || defined(PJ_WIN64)
#define PJMEDIA_HAS_SRTP 0
#endif

#include "config_site_sample.h"