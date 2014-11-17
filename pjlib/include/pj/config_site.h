#pragma once

#define PJ_HAS_SSL_SOCK 1
#define PJSIP_HAS_TLS_TRANSPORT 1

#if defined(_WIN64) || defined(WIN64) || defined(PJ_WIN64)
#define PJMEDIA_HAS_SRTP 0
#endif

// Specify maximum transaction count in transaction hash table.
// For efficiency, the value should be 2^n-1 since it will be rounded up to 2^n.
// Default value is 1023
#define PJSIP_MAX_TSX_COUNT   (2048*2-1)

// Specify maximum number of dialogs in the dialog hash table.
// For efficiency, the value should be 2^n-1 since it will be rounded up to 2^n.
// Default value is 511.
#define PJSIP_MAX_DIALOG_COUNT   (2048-1)

/**
 * Constants for declaring the maximum handles that can be supported by
 * a single IOQ framework. This constant might not be relevant to the
 * underlying I/O queue impelementation, but still, developers should be
 * aware of this constant, to make sure that the program will not break when
 * the underlying implementation changes.
 * Max size sockets ioqueue.
 * When work with `select` absolute size is - CHANNELS_PER_IOQUEUE в endpoint.h;
 * For  IOCP - must be equal to double cound for channels.
 */
#define PJ_IOQUEUE_MAX_HANDLES  ((PJSIP_MAX_DIALOG_COUNT + 1) * 2)

// Maximum simultaneous calls.
#define PJSUA_MAX_CALLS (PJSIP_MAX_DIALOG_COUNT)

#include "config_site_sample.h"