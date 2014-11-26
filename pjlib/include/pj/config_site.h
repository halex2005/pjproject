#pragma once

#include "config_site_cmake.h"

#if defined(_WIN64) || defined(WIN64) || defined(PJ_WIN64)
#define PJMEDIA_HAS_SRTP 0
#endif

// Maximum channels supported
#define PJSIP_MAX_CHANNELS        2048

// Specify maximum transaction count in transaction hash table.
// For efficiency, the value should be 2^n-1 since it will be rounded up to 2^n.
// Default value is 1023
#define PJSIP_MAX_TSX_COUNT      (PJSIP_MAX_CHANNELS*2-1)

// Specify maximum number of dialogs in the dialog hash table.
// For efficiency, the value should be 2^n-1 since it will be rounded up to 2^n.
// Default value is 511.
#define PJSIP_MAX_DIALOG_COUNT   (PJSIP_MAX_CHANNELS-1)

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
#define PJ_IOQUEUE_MAX_HANDLES   ((PJSIP_MAX_DIALOG_COUNT + 1) * 2)

// Maximum simultaneous calls.
#define PJSUA_MAX_CALLS          (PJSIP_MAX_DIALOG_COUNT)

/**
 * The maximum file players.
 */
#define PJSUA_MAX_PLAYERS        (PJSUA_MAX_CALLS)

/**
 * The maximum file recorders.
 */
#define PJSUA_MAX_RECORDERS      (PJSUA_MAX_CALLS)

/**
 *
*/
#define PJSUA_MAX_MONITORS       (PJSUA_MAX_CALLS)

/**
 * Max ports in the conference bridge.
 * This setting is the default value for
 * pjsua_media_config.max_media_ports.
 */
#define PJSUA_MAX_CONF_PORTS     (2*PJSUA_MAX_CALLS + PJSUA_MAX_PLAYERS + PJSUA_MAX_RECORDERS + PJSUA_MAX_MONITORS)

#include "config_site_sample.h"
