cmake_minimum_required(VERSION 2.8.4)
project(pjproject)

option(USE_PJMEDIA_ADVERTISE_RTCP  "option to add string like a=rtcp into SDP"  ON)
option(USE_OPENSSL_SSL_TLS_SUPPORT "option to use SSL and TLS support in PJSIP" ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
if (WIN32)
    if( CMAKE_SIZEOF_VOID_P EQUAL 8 )
        add_definitions(-DPJ_M_X86_64=1)
        add_definitions(-DPJ_WIN64=1)
    else()
        add_definitions(-DPJ_M_I386=1)
        add_definitions(-DPJ_WIN32=1)
    endif()
    add_definitions(-DWINVER=0x0501 -D_WIN32_WINNT=0x0501)
elseif(UNIX)
    #requires run ./configure before build
    add_definitions(-DPJ_AUTOCONF=1)
endif()

include_directories(.)
include_directories(pjlib/include)
include_directories(pjlib-util/include)
include_directories(pjmedia/include)
include_directories(pjnath/include)
include_directories(pjsip/include)

add_subdirectory(third_party)

#    pjlib/include/pj/compat/assert.h
#    pjlib/include/pj/compat/cc_armcc.h
#    pjlib/include/pj/compat/cc_codew.h
#    pjlib/include/pj/compat/cc_gcc.h
#    pjlib/include/pj/compat/cc_gcce.h
#    pjlib/include/pj/compat/cc_msvc.h
#    pjlib/include/pj/compat/cc_mwcc.h
#    pjlib/include/pj/compat/ctype.h
#    pjlib/include/pj/compat/errno.h
#    pjlib/include/pj/compat/high_precision.h
#    pjlib/include/pj/compat/m_alpha.h
#    pjlib/include/pj/compat/m_armv4.h
#    pjlib/include/pj/compat/m_i386.h
#    pjlib/include/pj/compat/m_m68k.h
#    pjlib/include/pj/compat/m_powerpc.h
#    pjlib/include/pj/compat/m_sparc.h
#    pjlib/include/pj/compat/m_x86_64.h
#    pjlib/include/pj/compat/malloc.h
#    pjlib/include/pj/compat/os_darwinos.h
#    pjlib/include/pj/compat/os_linux.h
#    pjlib/include/pj/compat/os_linux_kernel.h
#    pjlib/include/pj/compat/os_palmos.h
#    pjlib/include/pj/compat/os_rtems.h
#    pjlib/include/pj/compat/os_sunos.h
#    pjlib/include/pj/compat/os_symbian.h
#    pjlib/include/pj/compat/os_win32.h
#    pjlib/include/pj/compat/os_win32_wince.h
#    pjlib/include/pj/compat/rand.h
#    pjlib/include/pj/compat/setjmp.h
#    pjlib/include/pj/compat/size_t.h
#    pjlib/include/pj/compat/socket.h
#    pjlib/include/pj/compat/stdarg.h
#    pjlib/include/pj/compat/stdfileio.h
#    pjlib/include/pj/compat/string.h
#    pjlib/include/pj/compat/time.h

#    pjlib/src/pj/compat/sigjmp.c
#    pjlib/src/pj/compat/string.c
#    pjlib/src/pj/compat/string_compat.c
#    pjlib/src/pj/addr_resolv_linux_kernel.c
#    pjlib/src/pj/addr_resolv_symbian.cpp
#    pjlib/src/pj/exception_symbian.cpp
#    pjlib/src/pj/extra-exports.c
#    pjlib/src/pj/file_access_unistd.c
#    pjlib/src/pj/file_io_ansi.c
#    pjlib/src/pj/guid_simple.c
#    pjlib/src/pj/guid_uuid.c
#    pjlib/src/pj/ioqueue_common_abs.c
#    pjlib/src/pj/ioqueue_dummy.c
#    pjlib/src/pj/ioqueue_epoll.c
#    pjlib/src/pj/ioqueue_linux_kernel.c
#    pjlib/src/pj/ioqueue_symbian.cpp
#    pjlib/src/pj/ioqueue_winnt.c
#    pjlib/src/pj/ip_helper_generic.c
#    pjlib/src/pj/ip_helper_symbian.cpp
#    pjlib/src/pj/log_writer_printk.c
#    pjlib/src/pj/log_writer_symbian_console.cpp
#    pjlib/src/pj/os_core_linux_kernel.c
#    pjlib/src/pj/os_core_symbian.cpp
#    pjlib/src/pj/os_core_unix.c
#    pjlib/src/pj/os_error_linux_kernel.c
#    pjlib/src/pj/os_error_symbian.cpp
#    pjlib/src/pj/os_error_unix.c
#    pjlib/src/pj/os_info_symbian.cpp
#    pjlib/src/pj/os_rwmutex.c
#    pjlib/src/pj/os_symbian.h
#    pjlib/src/pj/os_time_bsd.c
#    pjlib/src/pj/os_time_common.c
#    pjlib/src/pj/os_time_linux_kernel.c
#    pjlib/src/pj/os_time_unix.c
#    pjlib/src/pj/os_timestamp_linux_kernel.c
#    pjlib/src/pj/os_timestamp_posix.c
#    pjlib/src/pj/pool_policy_kmalloc.c
#    pjlib/src/pj/pool_policy_new.cpp
#    pjlib/src/pj/sock_linux_kernel.c
#    pjlib/src/pj/sock_qos_symbian.cpp
#    pjlib/src/pj/sock_select_symbian.cpp
#    pjlib/src/pj/sock_symbian.cpp
#    pjlib/src/pj/ssl_sock_symbian.cpp
#    pjlib/src/pj/symbols.c
#    pjlib/src/pj/timer_symbian.cpp
#    pjlib/src/pj/unicode_symbian.cpp

set(PJLIB_HEADERS
    pjlib/include/pj/activesock.h
    pjlib/include/pj/addr_resolv.h
    pjlib/include/pj/array.h
    pjlib/include/pj/assert.h
    pjlib/include/pj/config.h
    pjlib/include/pj/config_site.h
    pjlib/include/pj/config_site_cmake.h
    pjlib/include/pj/config_site_cmake.in
    pjlib/include/pj/config_site_sample.h
    pjlib/include/pj/ctype.h
    pjlib/include/pj/doxygen.h
    pjlib/include/pj/errno.h
    pjlib/include/pj/except.h
    pjlib/include/pj/fifobuf.h
    pjlib/include/pj/file_access.h
    pjlib/include/pj/file_io.h
    pjlib/include/pj/guid.h
    pjlib/include/pj/hash.h
    pjlib/include/pj/ioqueue.h
    pjlib/include/pj/ip_helper.h
    pjlib/include/pj/list.h
    pjlib/include/pj/list_i.h
    pjlib/include/pj/lock.h
    pjlib/include/pj/log.h
    pjlib/include/pj/math.h
    pjlib/include/pj/os.h
    pjlib/include/pj/pool.h
    pjlib/include/pj/pool_alt.h
    pjlib/include/pj/pool_buf.h
    pjlib/include/pj/pool_i.h
    pjlib/include/pj/rand.h
    pjlib/include/pj/rbtree.h
    pjlib/include/pj/sock.h
    pjlib/include/pj/sock_qos.h
    pjlib/include/pj/sock_select.h
    pjlib/include/pj/ssl_sock.h
    pjlib/include/pj/string.h
    pjlib/include/pj/string_i.h
    pjlib/include/pj/timer.h
    pjlib/include/pj/types.h
    pjlib/include/pj/unicode.h
    pjlib/include/pj++/file.hpp
    pjlib/include/pj++/hash.hpp
    pjlib/include/pj++/list.hpp
    pjlib/include/pj++/lock.hpp
    pjlib/include/pj++/os.hpp
    pjlib/include/pj++/pool.hpp
    pjlib/include/pj++/proactor.hpp
    pjlib/include/pj++/scanner.hpp
    pjlib/include/pj++/sock.hpp
    pjlib/include/pj++/string.hpp
    pjlib/include/pj++/timer.hpp
    pjlib/include/pj++/tree.hpp
    pjlib/include/pj++/types.hpp
    pjlib/include/pjlib++.hpp
    pjlib/include/pjlib.h
    pjlib/src/pj/ioqueue_common_abs.h
    pjlib/src/pj/pool_signature.h
)
set(PJLIB_SOURCES
    pjlib/src/pj/activesock.c
    pjlib/src/pj/addr_resolv_sock.c
    pjlib/src/pj/array.c
    pjlib/src/pj/config.c
    pjlib/src/pj/ctype.c
    pjlib/src/pj/errno.c
    pjlib/src/pj/except.c
    pjlib/src/pj/fifobuf.c
    pjlib/src/pj/guid.c
    pjlib/src/pj/hash.c
    pjlib/src/pj/ioqueue_select.c
    pjlib/src/pj/list.c
    pjlib/src/pj/lock.c
    pjlib/src/pj/log.c
    pjlib/src/pj/log_writer_stdout.c
    pjlib/src/pj/os_info.c
    pjlib/src/pj/os_timestamp_common.c
    pjlib/src/pj/pool.c
    pjlib/src/pj/pool_buf.c
    pjlib/src/pj/pool_caching.c
    pjlib/src/pj/pool_dbg.c
    pjlib/src/pj/pool_policy_malloc.c
    pjlib/src/pj/rand.c
    pjlib/src/pj/rbtree.c
    pjlib/src/pj/sock_bsd.c
    pjlib/src/pj/sock_common.c
    pjlib/src/pj/sock_qos_bsd.c
    pjlib/src/pj/sock_qos_common.c
    pjlib/src/pj/sock_select.c
    pjlib/src/pj/ssl_sock_common.c
    pjlib/src/pj/ssl_sock_dump.c
    pjlib/src/pj/ssl_sock_ossl.c
    pjlib/src/pj/string.c
    pjlib/src/pj/timer.c
    pjlib/src/pj/types.c
)
if (WIN32)
    list(APPEND PJLIB_SOURCES
        pjlib/src/pj/file_access_win32.c
        pjlib/src/pj/file_io_win32.c
        pjlib/src/pj/guid_win32.c
        pjlib/src/pj/ip_helper_win32.c
        pjlib/src/pj/os_core_win32.c
        pjlib/src/pj/os_error_win32.c
        pjlib/src/pj/os_time_win32.c
        pjlib/src/pj/os_timestamp_win32.c
        pjlib/src/pj/unicode_win32.c
        pjlib/src/pj/sock_qos_dummy.c
        pjlib/src/pj/sock_qos_wm.c
    )
elseif(UNIX)
    list(APPEND PJLIB_SOURCES
        pjlib/src/pj/file_access_unistd.c
        pjlib/src/pj/file_io_ansi.c
        pjlib/src/pj/guid_simple.c
        pjlib/src/pj/ip_helper_generic.c
        pjlib/src/pj/os_core_unix.c
        pjlib/src/pj/os_error_unix.c
        pjlib/src/pj/os_time_common.c
        pjlib/src/pj/os_time_unix.c
        pjlib/src/pj/os_timestamp_posix.c
    )
endif()
add_library(pjlib STATIC ${PJLIB_SOURCES} ${PJLIB_HEADERS})
list(APPEND PJSIP_INSTALL_TARGETS pjlib)

#    pjlib/src/pjlib++-test/main.cpp
#    pjlib/src/pjlib-samples/except.c
#    pjlib/src/pjlib-samples/list.c
#    pjlib/src/pjlib-samples/log.c
#    pjlib/src/pjlib-test/exception_wrap.cpp
#    pjlib/src/pjlib-test/main_mod.c
#    pjlib/src/pjlib-test/main_rtems.c
#    pjlib/src/pjlib-test/main_symbian.cpp
#    pjlib/src/pjlib-test/main_win32.c
#    pjlib/src/pjlib-test/pool_wrap.cpp
#    pjlib/src/pjlib-test/test_wrap.cpp

set (TEST_PJLIB_SOURCES
    pjlib/src/pjlib-test/activesock.c
    pjlib/src/pjlib-test/atomic.c
    pjlib/src/pjlib-test/echo_clt.c
    pjlib/src/pjlib-test/errno.c
    pjlib/src/pjlib-test/exception.c
    pjlib/src/pjlib-test/fifobuf.c
    pjlib/src/pjlib-test/file.c
    pjlib/src/pjlib-test/hash_test.c
    pjlib/src/pjlib-test/ioq_perf.c
    pjlib/src/pjlib-test/ioq_tcp.c
    pjlib/src/pjlib-test/ioq_udp.c
    pjlib/src/pjlib-test/ioq_unreg.c
    pjlib/src/pjlib-test/list.c
    pjlib/src/pjlib-test/main.c
    pjlib/src/pjlib-test/mutex.c
    pjlib/src/pjlib-test/os.c
    pjlib/src/pjlib-test/pool.c
    pjlib/src/pjlib-test/pool_perf.c
    pjlib/src/pjlib-test/rand.c
    pjlib/src/pjlib-test/rbtree.c
    pjlib/src/pjlib-test/rtems_network_config.h
    pjlib/src/pjlib-test/select.c
    pjlib/src/pjlib-test/sleep.c
    pjlib/src/pjlib-test/sock.c
    pjlib/src/pjlib-test/sock_perf.c
    pjlib/src/pjlib-test/ssl_sock.c
    pjlib/src/pjlib-test/string.c
    pjlib/src/pjlib-test/test.c
    pjlib/src/pjlib-test/test.h
    pjlib/src/pjlib-test/thread.c
    pjlib/src/pjlib-test/timer.c
    pjlib/src/pjlib-test/timestamp.c
    pjlib/src/pjlib-test/udp_echo_srv_ioqueue.c
    pjlib/src/pjlib-test/udp_echo_srv_sync.c
    pjlib/src/pjlib-test/util.c
)
add_executable(test-pjlib ${TEST_PJLIB_SOURCES})
target_link_libraries(test-pjlib pjproject)

#    pjlib-util/src/pjlib-util/resolver_wrap.cpp
#    pjlib-util/src/pjlib-util/scanner_cis_bitwise.c
#    pjlib-util/src/pjlib-util/scanner_cis_uint.c
#    pjlib-util/src/pjlib-util/xml_wrap.cpp

set(PJLIB_UTIL_HEADERS
    pjlib-util/include/pjlib-util/base64.h
    pjlib-util/include/pjlib-util/cli.h
    pjlib-util/include/pjlib-util/cli_console.h
    pjlib-util/include/pjlib-util/cli_imp.h
    pjlib-util/include/pjlib-util/cli_telnet.h
    pjlib-util/include/pjlib-util/config.h
    pjlib-util/include/pjlib-util/crc32.h
    pjlib-util/include/pjlib-util/dns.h
    pjlib-util/include/pjlib-util/dns_server.h
    pjlib-util/include/pjlib-util/errno.h
    pjlib-util/include/pjlib-util/getopt.h
    pjlib-util/include/pjlib-util/hmac_md5.h
    pjlib-util/include/pjlib-util/hmac_sha1.h
    pjlib-util/include/pjlib-util/http_client.h
    pjlib-util/include/pjlib-util/json.h
    pjlib-util/include/pjlib-util/md5.h
    pjlib-util/include/pjlib-util/pcap.h
    pjlib-util/include/pjlib-util/resolver.h
    pjlib-util/include/pjlib-util/scanner.h
    pjlib-util/include/pjlib-util/scanner_cis_bitwise.h
    pjlib-util/include/pjlib-util/scanner_cis_uint.h
    pjlib-util/include/pjlib-util/sha1.h
    pjlib-util/include/pjlib-util/srv_resolver.h
    pjlib-util/include/pjlib-util/string.h
    pjlib-util/include/pjlib-util/stun_simple.h
    pjlib-util/include/pjlib-util/types.h
    pjlib-util/include/pjlib-util/xml.h
    pjlib-util/include/pjlib-util.h
)
set(PJLIB_UTIL_SOURCES
    pjlib-util/src/pjlib-util/base64.c
    pjlib-util/src/pjlib-util/cli.c
    pjlib-util/src/pjlib-util/cli_console.c
    pjlib-util/src/pjlib-util/cli_telnet.c
    pjlib-util/src/pjlib-util/crc32.c
    pjlib-util/src/pjlib-util/dns.c
    pjlib-util/src/pjlib-util/dns_dump.c
    pjlib-util/src/pjlib-util/dns_server.c
    pjlib-util/src/pjlib-util/errno.c
    pjlib-util/src/pjlib-util/getopt.c
    pjlib-util/src/pjlib-util/hmac_md5.c
    pjlib-util/src/pjlib-util/hmac_sha1.c
    pjlib-util/src/pjlib-util/http_client.c
    pjlib-util/src/pjlib-util/json.c
    pjlib-util/src/pjlib-util/md5.c
    pjlib-util/src/pjlib-util/pcap.c
    pjlib-util/src/pjlib-util/resolver.c
    pjlib-util/src/pjlib-util/scanner.c
    pjlib-util/src/pjlib-util/sha1.c
    pjlib-util/src/pjlib-util/srv_resolver.c
    pjlib-util/src/pjlib-util/string.c
    pjlib-util/src/pjlib-util/stun_simple.c
    pjlib-util/src/pjlib-util/stun_simple_client.c
    pjlib-util/src/pjlib-util/symbols.c
    pjlib-util/src/pjlib-util/xml.c
)
add_library(pjlib_util STATIC ${PJLIB_UTIL_SOURCES} ${PJLIB_UTIL_HEADERS})
list(APPEND PJSIP_INSTALL_TARGETS pjlib_util)

#    pjlib-util/src/pjlib-util-test/main_rtems.c
#    pjlib-util/src/pjlib-util-test/test.h

set(TEST_PJLIB_UTIL_SOURCES
    pjlib-util/src/pjlib-util-test/encryption.c
    pjlib-util/src/pjlib-util-test/http_client.c
    pjlib-util/src/pjlib-util-test/json_test.c
    pjlib-util/src/pjlib-util-test/main.c
    pjlib-util/src/pjlib-util-test/resolver_test.c
    pjlib-util/src/pjlib-util-test/stun.c
    pjlib-util/src/pjlib-util-test/test.c
    pjlib-util/src/pjlib-util-test/xml.c
)
if (WIN32)
    list(APPEND TEST_PJLIB_UTIL_SOURCES
        pjlib-util/src/pjlib-util-test/main_win32.c
    )
elseif(UNIX)
endif()
add_executable(test-pjlib-util ${TEST_PJLIB_UTIL_SOURCES})
target_link_libraries(test-pjlib-util pjproject)

#    pjmedia/src/pjmedia/echo_internal.h
#    pjmedia/src/pjmedia/ffmpeg_util.h
#    pjmedia/src/pjmedia/dummy.c
#    pjmedia/src/pjmedia/sdp_wrap.cpp

set(PJMEDIA_HEADERS
    pjmedia/include/pjmedia/alaw_ulaw.h
    pjmedia/include/pjmedia/avi.h
    pjmedia/include/pjmedia/avi_stream.h
    pjmedia/include/pjmedia/bidirectional.h
    pjmedia/include/pjmedia/circbuf.h
    pjmedia/include/pjmedia/clock.h
    pjmedia/include/pjmedia/codec.h
    pjmedia/include/pjmedia/conference.h
    pjmedia/include/pjmedia/config.h
    pjmedia/include/pjmedia/converter.h
    pjmedia/include/pjmedia/delaybuf.h
    pjmedia/include/pjmedia/doxygen.h
    pjmedia/include/pjmedia/echo.h
    pjmedia/include/pjmedia/echo_port.h
    pjmedia/include/pjmedia/endpoint.h
    pjmedia/include/pjmedia/errno.h
    pjmedia/include/pjmedia/event.h
    pjmedia/include/pjmedia/format.h
    pjmedia/include/pjmedia/frame.h
    pjmedia/include/pjmedia/g711.h
    pjmedia/include/pjmedia/jbuf.h
    pjmedia/include/pjmedia/master_port.h
    pjmedia/include/pjmedia/mem_port.h
    pjmedia/include/pjmedia/null_port.h
    pjmedia/include/pjmedia/plc.h
    pjmedia/include/pjmedia/port.h
    pjmedia/include/pjmedia/resample.h
    pjmedia/include/pjmedia/rtcp.h
    pjmedia/include/pjmedia/rtcp_xr.h
    pjmedia/include/pjmedia/rtp.h
    pjmedia/include/pjmedia/sdp.h
    pjmedia/include/pjmedia/sdp_neg.h
    pjmedia/include/pjmedia/session.h
    pjmedia/include/pjmedia/signatures.h
    pjmedia/include/pjmedia/silencedet.h
    pjmedia/include/pjmedia/sound.h
    pjmedia/include/pjmedia/sound_port.h
    pjmedia/include/pjmedia/splitcomb.h
    pjmedia/include/pjmedia/stereo.h
    pjmedia/include/pjmedia/stream.h
    pjmedia/include/pjmedia/stream_common.h
    pjmedia/include/pjmedia/symbian_sound_aps.h
    pjmedia/include/pjmedia/tonegen.h
    pjmedia/include/pjmedia/transport.h
    pjmedia/include/pjmedia/transport_adapter_sample.h
    pjmedia/include/pjmedia/transport_ice.h
    pjmedia/include/pjmedia/transport_loop.h
    pjmedia/include/pjmedia/transport_srtp.h
    pjmedia/include/pjmedia/transport_udp.h
    pjmedia/include/pjmedia/types.h
    pjmedia/include/pjmedia/vid_codec.h
    pjmedia/include/pjmedia/vid_codec_util.h
    pjmedia/include/pjmedia/vid_port.h
    pjmedia/include/pjmedia/vid_stream.h
    pjmedia/include/pjmedia/vid_tee.h
    pjmedia/include/pjmedia/wav_playlist.h
    pjmedia/include/pjmedia/wav_port.h
    pjmedia/include/pjmedia/wave.h
    pjmedia/include/pjmedia/wsola.h
    pjmedia/include/pjmedia-audiodev/audiodev.h
    pjmedia/include/pjmedia-audiodev/audiodev_imp.h
    pjmedia/include/pjmedia-audiodev/audiotest.h
    pjmedia/include/pjmedia-audiodev/config.h
    pjmedia/include/pjmedia-audiodev/errno.h
    pjmedia/include/pjmedia-codec/amr_helper.h
    pjmedia/include/pjmedia-codec/amr_sdp_match.h
    pjmedia/include/pjmedia-codec/audio_codecs.h
    pjmedia/include/pjmedia-codec/config.h
    pjmedia/include/pjmedia-codec/ffmpeg_vid_codecs.h
    pjmedia/include/pjmedia-codec/g722.h
    pjmedia/include/pjmedia-codec/g7221.h
    pjmedia/include/pjmedia-codec/g7221_sdp_match.h
    pjmedia/include/pjmedia-codec/gsm.h
    pjmedia/include/pjmedia-codec/h263_packetizer.h
    pjmedia/include/pjmedia-codec/h264_packetizer.h
    pjmedia/include/pjmedia-codec/ilbc.h
    pjmedia/include/pjmedia-codec/ipp_codecs.h
    pjmedia/include/pjmedia-codec/l16.h
    pjmedia/include/pjmedia-codec/opencore_amr.h
    pjmedia/include/pjmedia-codec/openh264.h
    pjmedia/include/pjmedia-codec/passthrough.h
    pjmedia/include/pjmedia-codec/silk.h
    pjmedia/include/pjmedia-codec/speex.h
    pjmedia/include/pjmedia-codec/types.h
    pjmedia/include/pjmedia-videodev/avi_dev.h
    pjmedia/include/pjmedia-videodev/config.h
    pjmedia/include/pjmedia-videodev/errno.h
    pjmedia/include/pjmedia-videodev/opengl_dev.h
    pjmedia/include/pjmedia-videodev/videodev.h
    pjmedia/include/pjmedia-videodev/videodev_imp.h
    pjmedia/include/pjmedia-codec.h
    pjmedia/include/pjmedia.h
    pjmedia/include/pjmedia_audiodev.h
    pjmedia/include/pjmedia_videodev.h
)
set(PJMEDIA_SOURCES
    pjmedia/src/pjmedia/alaw_ulaw.c
    pjmedia/src/pjmedia/alaw_ulaw_table.c
    pjmedia/src/pjmedia/avi_player.c
    pjmedia/src/pjmedia/bidirectional.c
    pjmedia/src/pjmedia/clock_thread.c
    pjmedia/src/pjmedia/codec.c
    pjmedia/src/pjmedia/conf_switch.c
    pjmedia/src/pjmedia/conference.c
    pjmedia/src/pjmedia/converter.c
    pjmedia/src/pjmedia/converter_libswscale.c
    pjmedia/src/pjmedia/converter_libyuv.c
    pjmedia/src/pjmedia/delaybuf.c
    pjmedia/src/pjmedia/echo_common.c
    pjmedia/src/pjmedia/echo_port.c
    pjmedia/src/pjmedia/echo_speex.c
    pjmedia/src/pjmedia/echo_suppress.c
    pjmedia/src/pjmedia/endpoint.c
    pjmedia/src/pjmedia/errno.c
    pjmedia/src/pjmedia/event.c
    pjmedia/src/pjmedia/ffmpeg_util.c
    pjmedia/src/pjmedia/format.c
    pjmedia/src/pjmedia/g711.c
    pjmedia/src/pjmedia/jbuf.c
    pjmedia/src/pjmedia/master_port.c
    pjmedia/src/pjmedia/mem_capture.c
    pjmedia/src/pjmedia/mem_player.c
    pjmedia/src/pjmedia/null_port.c
    pjmedia/src/pjmedia/plc_common.c
    pjmedia/src/pjmedia/port.c
    pjmedia/src/pjmedia/resample_libsamplerate.c
    pjmedia/src/pjmedia/resample_port.c
    pjmedia/src/pjmedia/resample_resample.c
    pjmedia/src/pjmedia/resample_speex.c
    pjmedia/src/pjmedia/rtcp.c
    pjmedia/src/pjmedia/rtcp_xr.c
    pjmedia/src/pjmedia/rtp.c
    pjmedia/src/pjmedia/sdp.c
    pjmedia/src/pjmedia/sdp_cmp.c
    pjmedia/src/pjmedia/sdp_neg.c
    pjmedia/src/pjmedia/session.c
    pjmedia/src/pjmedia/silencedet.c
    pjmedia/src/pjmedia/sound_legacy.c
    pjmedia/src/pjmedia/sound_port.c
    pjmedia/src/pjmedia/splitcomb.c
    pjmedia/src/pjmedia/stereo_port.c
    pjmedia/src/pjmedia/stream.c
    pjmedia/src/pjmedia/stream_common.c
    pjmedia/src/pjmedia/stream_info.c
    pjmedia/src/pjmedia/tonegen.c
    pjmedia/src/pjmedia/transport_adapter_sample.c
    pjmedia/src/pjmedia/transport_ice.c
    pjmedia/src/pjmedia/transport_loop.c
    pjmedia/src/pjmedia/transport_srtp.c
    pjmedia/src/pjmedia/transport_udp.c
    pjmedia/src/pjmedia/types.c
    pjmedia/src/pjmedia/vid_codec.c
    pjmedia/src/pjmedia/vid_codec_util.c
    pjmedia/src/pjmedia/vid_port.c
    pjmedia/src/pjmedia/vid_stream.c
    pjmedia/src/pjmedia/vid_stream_info.c
    pjmedia/src/pjmedia/vid_tee.c
    pjmedia/src/pjmedia/wav_player.c
    pjmedia/src/pjmedia/wav_playlist.c
    pjmedia/src/pjmedia/wav_writer.c
    pjmedia/src/pjmedia/wave.c
    pjmedia/src/pjmedia/wsola.c
)
add_library(pjmedia STATIC ${PJMEDIA_SOURCES} ${PJMEDIA_HEADERS})
set_property(TARGET pjmedia APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/third_party/portaudio/include)
set_property(TARGET pjmedia APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/third_party/build/speex)
set_property(TARGET pjmedia APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/third_party/speex/include)
set_property(TARGET pjmedia APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/third_party/build/srtp)
set_property(TARGET pjmedia APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/third_party/srtp/include)
set_property(TARGET pjmedia APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/third_party/srtp/crypto/include)
if (NOT "$ENV{DXSDK_DIR}" STREQUAL "")
    set_property(TARGET pjmedia APPEND PROPERTY INCLUDE_DIRECTORIES $ENV{DXSDK_DIR}/include)
endif()
list(APPEND PJSIP_INSTALL_TARGETS pjmedia)


#    pjmedia/src/pjmedia-audiodev/s60_g729_bitstream.h
#    pjmedia/src/pjmedia-audiodev/symb_aps_dev.cpp
#    pjmedia/src/pjmedia-audiodev/symb_mda_dev.cpp
#    pjmedia/src/pjmedia-audiodev/symb_vas_dev.cpp

set (PJMEDIA_AUDIODEV_SOURCES
    pjmedia/src/pjmedia-audiodev/audiodev.c
    pjmedia/src/pjmedia-audiodev/audiotest.c
    pjmedia/src/pjmedia-audiodev/bdimad_dev.c
    pjmedia/src/pjmedia-audiodev/errno.c
    pjmedia/src/pjmedia-audiodev/legacy_dev.c
    pjmedia/src/pjmedia-audiodev/null_dev.c
    pjmedia/src/pjmedia-audiodev/pa_dev.c
    pjmedia/src/pjmedia-audiodev/wmme_dev.c
)
if (WIN32)
    list(APPEND PJMEDIA_AUDIODEV_SOURCES
    )
elseif(UNIX)
    list(APPEND PJMEDIA_AUDIODEV_SOURCES
        pjmedia/src/pjmedia-audiodev/alsa_dev.c
        pjmedia/src/pjmedia-audiodev/android_jni_dev.c
        pjmedia/src/pjmedia-audiodev/bb10_dev.c
        pjmedia/src/pjmedia-audiodev/opensl_dev.c
    )
endif()
add_library(pjmedia_audiodev STATIC ${PJMEDIA_AUDIODEV_SOURCES})
set_property(TARGET pjmedia_audiodev APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/third_party/portaudio/include)
if(UNIX)
    set_property(TARGET pjmedia_audiodev APPEND PROPERTY COMPILE_FLAGS -DPJMEDIA_AUDIO_DEV_HAS_WMME=0)
endif()
list(APPEND PJSIP_INSTALL_TARGETS pjmedia_audiodev)


set (PJMEDIA_CODEC_HEADERS
    pjmedia/src/pjmedia-codec/g722/g722_dec.h
    pjmedia/src/pjmedia-codec/g722/g722_enc.h
)
set (PJMEDIA_CODEC_SOURCES
    pjmedia/src/pjmedia-codec/amr_sdp_match.c
    pjmedia/src/pjmedia-codec/audio_codecs.c
    pjmedia/src/pjmedia-codec/ffmpeg_vid_codecs.c
    pjmedia/src/pjmedia-codec/g722.c
    pjmedia/src/pjmedia-codec/g722/g722_dec.c
    pjmedia/src/pjmedia-codec/g722/g722_enc.c
    pjmedia/src/pjmedia-codec/g7221.c
    pjmedia/src/pjmedia-codec/g7221_sdp_match.c
    pjmedia/src/pjmedia-codec/gsm.c
    pjmedia/src/pjmedia-codec/h263_packetizer.c
    pjmedia/src/pjmedia-codec/h264_packetizer.c
    pjmedia/src/pjmedia-codec/ilbc.c
    pjmedia/src/pjmedia-codec/ipp_codecs.c
    pjmedia/src/pjmedia-codec/l16.c
    pjmedia/src/pjmedia-codec/opencore_amr.c
    pjmedia/src/pjmedia-codec/silk.c
    pjmedia/src/pjmedia-codec/speex_codec.c
)
if (WIN32)
    list(APPEND PJMEDIA_CODEC_SOURCES
        pjmedia/src/pjmedia-codec/openh264.cpp
        pjmedia/src/pjmedia-codec/passthrough.c
    )
elseif(UNIX)
endif()
add_library(pjmedia_codec STATIC ${PJMEDIA_CODEC_SOURCES} ${PJMEDIA_CODEC_HEADERS})
set_property(TARGET pjmedia_codec APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/third_party/build/speex)
set_property(TARGET pjmedia_codec APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/third_party/speex/include)
set_property(TARGET pjmedia_codec APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/third_party)
list(APPEND PJSIP_INSTALL_TARGETS pjmedia_codec)

set(PJMEDIA_VIDEODEV_SOURCES
    pjmedia/src/pjmedia-videodev/avi_dev.c
    pjmedia/src/pjmedia-videodev/colorbar_dev.c
    pjmedia/src/pjmedia-videodev/errno.c
    pjmedia/src/pjmedia-videodev/ffmpeg_dev.c
    pjmedia/src/pjmedia-videodev/sdl_dev.c
    pjmedia/src/pjmedia-videodev/videodev.c
)
if (WIN32)
    list(APPEND PJMEDIA_VIDEODEV_SOURCES
        pjmedia/src/pjmedia-videodev/dshow_dev.c
        pjmedia/src/pjmedia-videodev/dshowclasses.cpp
    )
elseif(UNIX)
    list(APPEND PJMEDIA_VIDEODEV_SOURCES
        pjmedia/src/pjmedia-videodev/opengl_dev.c
        pjmedia/src/pjmedia-videodev/v4l2_dev.c
    )
endif()
add_library(pjmedia_videodev STATIC ${PJMEDIA_VIDEODEV_SOURCES})
list(APPEND PJSIP_INSTALL_TARGETS pjmedia_videodev)


#    pjmedia/src/test/test.h
#    pjmedia/src/test/audio_tool.c
#    pjmedia/src/test/sdptest.c
#    pjmedia/src/test/session_test.c
#    pjmedia/src/test/wince_main.c
#    pjmedia/src/test/wsola_test.c

set(TEST_PJMEDIA_SOURCES
    pjmedia/src/test/codec_vectors.c
    pjmedia/src/test/jbuf_test.c
    pjmedia/src/test/main.c
    pjmedia/src/test/mips_test.c
    pjmedia/src/test/rtp_test.c
    pjmedia/src/test/sdp_neg_test.c
    pjmedia/src/test/test.c
    pjmedia/src/test/vid_codec_test.c
    pjmedia/src/test/vid_dev_test.c
    pjmedia/src/test/vid_port_test.c
)
add_executable(test-pjmedia ${TEST_PJMEDIA_SOURCES})
target_link_libraries(test-pjmedia pjproject)
add_custom_command(
    TARGET test-pjmedia PRE_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different "${CMAKE_CURRENT_SOURCE_DIR}/pjmedia/build/Jbtest.dat" "$<TARGET_FILE_DIR:test-pjmedia>/Jbtest.dat")

#    pjnath/docs/doc_ice.h
#    pjnath/docs/doc_mainpage.h
#    pjnath/docs/doc_nat.h
#    pjnath/docs/doc_samples.h
#    pjnath/docs/doc_stun.h
#    pjnath/docs/doc_turn.h

set (PJNATH_HEADERS
    pjnath/include/pjnath/config.h
    pjnath/include/pjnath/errno.h
    pjnath/include/pjnath/ice_session.h
    pjnath/include/pjnath/ice_strans.h
    pjnath/include/pjnath/nat_detect.h
    pjnath/include/pjnath/stun_auth.h
    pjnath/include/pjnath/stun_config.h
    pjnath/include/pjnath/stun_msg.h
    pjnath/include/pjnath/stun_session.h
    pjnath/include/pjnath/stun_sock.h
    pjnath/include/pjnath/stun_transaction.h
    pjnath/include/pjnath/turn_session.h
    pjnath/include/pjnath/turn_sock.h
    pjnath/include/pjnath/types.h
    pjnath/include/pjnath.h
)
set(PJNATH_SOURCES
    pjnath/src/pjnath/errno.c
    pjnath/src/pjnath/ice_session.c
    pjnath/src/pjnath/ice_strans.c
    pjnath/src/pjnath/nat_detect.c
    pjnath/src/pjnath/stun_auth.c
    pjnath/src/pjnath/stun_msg.c
    pjnath/src/pjnath/stun_msg_dump.c
    pjnath/src/pjnath/stun_session.c
    pjnath/src/pjnath/stun_sock.c
    pjnath/src/pjnath/stun_transaction.c
    pjnath/src/pjnath/turn_session.c
    pjnath/src/pjnath/turn_sock.c
)
add_library(pjnath STATIC ${PJNATH_SOURCES} ${PJNATH_HEADERS})
list(APPEND PJSIP_INSTALL_TARGETS pjnath)

#    pjnath/src/pjnath-test/server.h
#    pjnath/src/pjnath-test/test.h
#    pjnath/src/pjturn-client/client_main.c
#    pjnath/src/pjturn-srv/allocation.c
#    pjnath/src/pjturn-srv/auth.c
#    pjnath/src/pjturn-srv/auth.h
#    pjnath/src/pjturn-srv/listener_tcp.c
#    pjnath/src/pjturn-srv/listener_udp.c
#    pjnath/src/pjturn-srv/main.c
#    pjnath/src/pjturn-srv/server.c
#    pjnath/src/pjturn-srv/turn.h

set(TEST_PJNATH_SOURCES
    pjnath/src/pjnath-test/concur_test.c
    pjnath/src/pjnath-test/ice_test.c
    pjnath/src/pjnath-test/main.c
    pjnath/src/pjnath-test/server.c
    pjnath/src/pjnath-test/sess_auth.c
    pjnath/src/pjnath-test/stun.c
    pjnath/src/pjnath-test/stun_sock_test.c
    pjnath/src/pjnath-test/test.c
    pjnath/src/pjnath-test/turn_sock_test.c

)
if (WIN32)
    list(APPEND TEST_PJNATH_SOURCES
        pjnath/src/pjnath-test/main_win32.c
    )
elseif(UNIX)
endif()
add_executable(test-pjnath ${TEST_PJNATH_SOURCES})
target_link_libraries(test-pjnath pjproject)

#    pjsip/docs/doxygen.h
#    pjsip/src/pjsip/sip_auth_parser_wrap.cpp
#    pjsip/src/pjsip/sip_endpoint_wrap.cpp
#    pjsip/src/pjsip/sip_util_wrap.cpp
#    pjsip/src/pjsip/sip_util_proxy_wrap.cpp
#    pjsip/src/pjsip/sip_parser_wrap.cpp
#    pjsip/src/pjsip/sip_tel_uri_wrap.cpp
#    pjsip/src/pjsip/sip_transport_wrap.cpp
#    pjsip/src/pjsip/sip_dialog_wrap.cpp

set(PJSIP_CORE_HEADERS
    pjsip/include/pjsip_auth.h
    pjsip/include/pjsip.h
    pjsip/include/pjsip/print_util.h
    pjsip/include/pjsip/sip_auth.h
    pjsip/include/pjsip/sip_auth_aka.h
    pjsip/include/pjsip/sip_auth_msg.h
    pjsip/include/pjsip/sip_auth_parser.h
    pjsip/include/pjsip/sip_config.h
    pjsip/include/pjsip/sip_dialog.h
    pjsip/include/pjsip/sip_endpoint.h
    pjsip/include/pjsip/sip_errno.h
    pjsip/include/pjsip/sip_event.h
    pjsip/include/pjsip/sip_module.h
    pjsip/include/pjsip/sip_msg.h
    pjsip/include/pjsip/sip_multipart.h
    pjsip/include/pjsip/sip_parser.h
    pjsip/include/pjsip/sip_private.h
    pjsip/include/pjsip/sip_resolve.h
    pjsip/include/pjsip/sip_tel_uri.h
    pjsip/include/pjsip/sip_transaction.h
    pjsip/include/pjsip/sip_transport.h
    pjsip/include/pjsip/sip_transport_loop.h
    pjsip/include/pjsip/sip_transport_tcp.h
    pjsip/include/pjsip/sip_transport_tls.h
    pjsip/include/pjsip/sip_transport_udp.h
    pjsip/include/pjsip/sip_types.h
    pjsip/include/pjsip/sip_ua_layer.h
    pjsip/include/pjsip/sip_uri.h
    pjsip/include/pjsip/sip_util.h
)
set(PJSIP_CORE_SOURCES
    #Authentication
    pjsip/src/pjsip/sip_auth_aka.c
    pjsip/src/pjsip/sip_auth_client.c
    pjsip/src/pjsip/sip_auth_msg.c
    pjsip/src/pjsip/sip_auth_parser.c
    pjsip/src/pjsip/sip_auth_server.c

    #Base
    pjsip/src/pjsip/sip_errno.c

    #Core
    pjsip/src/pjsip/sip_config.c
    pjsip/src/pjsip/sip_endpoint.c
    pjsip/src/pjsip/sip_util.c
    pjsip/src/pjsip/sip_util_proxy.c

    #Messaging and parsing
    pjsip/src/pjsip/sip_msg.c
    pjsip/src/pjsip/sip_multipart.c
    pjsip/src/pjsip/sip_parser.c
    pjsip/src/pjsip/sip_tel_uri.c
    pjsip/src/pjsip/sip_uri.c

    #Transaction layer
    pjsip/src/pjsip/sip_transaction.c
    pjsip/src/pjsip/sip_util_statefull.c

    #Transport layer
    pjsip/src/pjsip/sip_resolve.c
    pjsip/src/pjsip/sip_transport.c
    pjsip/src/pjsip/sip_transport_loop.c
    pjsip/src/pjsip/sip_transport_tcp.c
    pjsip/src/pjsip/sip_transport_tls.c
    pjsip/src/pjsip/sip_transport_udp.c

    #UA layer
    pjsip/src/pjsip/sip_dialog.c
    pjsip/src/pjsip/sip_ua_layer.c
)
add_library(pjsip_core STATIC ${PJSIP_CORE_SOURCES} ${PJSIP_CORE_HEADERS})
list(APPEND PJSIP_INSTALL_TARGETS pjsip_core)

set(PJSIP_SIMPLE_HEADERS
    pjsip/include/pjsip_simple.h
    pjsip/include/pjsip-simple/errno.h
    pjsip/include/pjsip-simple/evsub.h
    pjsip/include/pjsip-simple/evsub_msg.h
    pjsip/include/pjsip-simple/iscomposing.h
    pjsip/include/pjsip-simple/mwi.h
    pjsip/include/pjsip-simple/pidf.h
    pjsip/include/pjsip-simple/presence.h
    pjsip/include/pjsip-simple/publish.h
    pjsip/include/pjsip-simple/rpid.h
    pjsip/include/pjsip-simple/types.h
    pjsip/include/pjsip-simple/xpidf.h
)
set(PJSIP_SIMPLE_SOURCES
    pjsip/src/pjsip-simple/errno.c
    pjsip/src/pjsip-simple/evsub.c
    pjsip/src/pjsip-simple/evsub_msg.c
    pjsip/src/pjsip-simple/iscomposing.c
    pjsip/src/pjsip-simple/mwi.c
    pjsip/src/pjsip-simple/pidf.c
    pjsip/src/pjsip-simple/presence.c
    pjsip/src/pjsip-simple/presence_body.c
    pjsip/src/pjsip-simple/publishc.c
    pjsip/src/pjsip-simple/rpid.c
    pjsip/src/pjsip-simple/xpidf.c
)
add_library(pjsip_simple STATIC ${PJSIP_SIMPLE_SOURCES} ${PJSIP_SIMPLE_HEADERS})
list(APPEND PJSIP_INSTALL_TARGETS pjsip_simple)

set(PJSIP_UA_HEADERS
    pjsip/include/pjsip_ua.h
    pjsip/include/pjsip-ua/sip_100rel.h
    pjsip/include/pjsip-ua/sip_inv.h
    pjsip/include/pjsip-ua/sip_regc.h
    pjsip/include/pjsip-ua/sip_replaces.h
    pjsip/include/pjsip-ua/sip_timer.h
    pjsip/include/pjsip-ua/sip_xfer.h
)
set(PJSIP_UA_SOURCES
    pjsip/src/pjsip-ua/sip_100rel.c
    pjsip/src/pjsip-ua/sip_inv.c
    pjsip/src/pjsip-ua/sip_reg.c
    pjsip/src/pjsip-ua/sip_replaces.c
    pjsip/src/pjsip-ua/sip_timer.c
    pjsip/src/pjsip-ua/sip_xfer.c
)
add_library(pjsip_ua STATIC ${PJSIP_UA_SOURCES} ${PJSIP_UA_HEADERS})
list(APPEND PJSIP_INSTALL_TARGETS pjsip_ua)

set(PJSUA_LIB_HEADERS
    pjsip/include/pjsua.h
    pjsip/include/pjsua-lib/pjsua.h
    pjsip/include/pjsua-lib/pjsua_internal.h
)
set(PJSUA_LIB_SOURCES
    pjsip/src/pjsua-lib/pjsua_acc.c
    pjsip/src/pjsua-lib/pjsua_aud.c
    pjsip/src/pjsua-lib/pjsua_call.c
    pjsip/src/pjsua-lib/pjsua_core.c
    pjsip/src/pjsua-lib/pjsua_dump.c
    pjsip/src/pjsua-lib/pjsua_im.c
    pjsip/src/pjsua-lib/pjsua_media.c
    pjsip/src/pjsua-lib/pjsua_pres.c
    pjsip/src/pjsua-lib/pjsua_vid.c
)
add_library(pjsua_lib STATIC ${PJSUA_LIB_SOURCES} ${PJSUA_LIB_HEADERS})
list(APPEND PJSIP_INSTALL_TARGETS pjsua_lib)

#    pjsip/src/pjsua2-test/main.cpp
#    pjsip/src/test/main_rtems.c
#    pjsip/src/test/test.h

set (TEST_PJSIP_SOURCES
    pjsip/src/test/dlg_core_test.c
    pjsip/src/test/dns_test.c
    pjsip/src/test/inv_offer_answer_test.c
    pjsip/src/test/main.c
    pjsip/src/test/msg_err_test.c
    pjsip/src/test/msg_logger.c
    pjsip/src/test/msg_test.c
    pjsip/src/test/multipart_test.c
    pjsip/src/test/regc_test.c
    pjsip/src/test/test.c
    pjsip/src/test/transport_loop_test.c
    pjsip/src/test/transport_tcp_test.c
    pjsip/src/test/transport_test.c
    pjsip/src/test/transport_udp_test.c
    pjsip/src/test/tsx_basic_test.c
    pjsip/src/test/tsx_bench.c
    pjsip/src/test/tsx_uac_test.c
    pjsip/src/test/tsx_uas_test.c
    pjsip/src/test/txdata_test.c
    pjsip/src/test/uri_test.c
)
if (WIN32)
    list(APPEND TEST_PJSIP_SOURCES
        pjsip/src/test/main_win32.c
    )
elseif(UNIX)
endif()
add_executable(test-pjsip ${TEST_PJSIP_SOURCES})
target_link_libraries(test-pjsip pjproject)

set (PJSUA2_LIB_HEADERS
    pjsip/include/pjsua2/account.hpp
    pjsip/include/pjsua2/call.hpp
    pjsip/include/pjsua2/config.hpp
    pjsip/include/pjsua2/doxygen.hpp
    pjsip/include/pjsua2/endpoint.hpp
    pjsip/include/pjsua2/json.hpp
    pjsip/include/pjsua2/media.hpp
    pjsip/include/pjsua2/persistent.hpp
    pjsip/include/pjsua2/presence.hpp
    pjsip/include/pjsua2/siptypes.hpp
    pjsip/include/pjsua2/types.hpp
    pjsip/include/pjsua2.hpp
)
set (PJSUA2_LIB_SOURCES
    pjsip/src/pjsua2/account.cpp
    pjsip/src/pjsua2/call.cpp
    pjsip/src/pjsua2/endpoint.cpp
    pjsip/src/pjsua2/json.cpp
    pjsip/src/pjsua2/media.cpp
    pjsip/src/pjsua2/persistent.cpp
    pjsip/src/pjsua2/presence.cpp
    pjsip/src/pjsua2/siptypes.cpp
    pjsip/src/pjsua2/types.cpp
    pjsip/src/pjsua2/util.hpp
)
add_library(pjsua2_lib STATIC ${PJSUA2_LIB_SOURCES} ${PJSUA2_LIB_HEADERS})
list(APPEND PJSIP_INSTALL_TARGETS pjsua2_lib)

set(SOURCE_FILES
    pjsip-apps/build/dummy.c
    pjsip-apps/src/3rdparty_media_sample/alt_pjsua_aud.c
    pjsip-apps/src/3rdparty_media_sample/alt_pjsua_vid.c
    pjsip-apps/src/3rdparty_media_sample/config_site.h
    pjsip-apps/src/ipjsystest/Classes/ipjsystestAppDelegate.h
    pjsip-apps/src/ipjsystest/Classes/RootViewController.h
    pjsip-apps/src/ipjsystest/Classes/TestViewController.h
    pjsip-apps/src/pjsystest/gui.h
    pjsip-apps/src/pjsystest/main_console.c
    pjsip-apps/src/pjsystest/main_wm.c
    pjsip-apps/src/pjsystest/resource.h
    pjsip-apps/src/pjsystest/systest.c
    pjsip-apps/src/pjsystest/systest.h
    pjsip-apps/src/py_pjsua/py_pjsua.c
    pjsip-apps/src/py_pjsua/py_pjsua.h
    pjsip-apps/src/python/_pjsua.c
    pjsip-apps/src/python/_pjsua.h
    pjsip-apps/src/samples/aectest.c
    pjsip-apps/src/samples/auddemo.c
    pjsip-apps/src/samples/aviplay.c
    pjsip-apps/src/samples/clidemo.c
    pjsip-apps/src/samples/confbench.c
    pjsip-apps/src/samples/confsample.c
    pjsip-apps/src/samples/debug.cpp
    pjsip-apps/src/samples/encdec.c
    pjsip-apps/src/samples/footprint.c
    pjsip-apps/src/samples/httpdemo.c
    pjsip-apps/src/samples/icedemo.c
    pjsip-apps/src/samples/invtester.c
    pjsip-apps/src/samples/jbsim.c
    pjsip-apps/src/samples/latency.c
    pjsip-apps/src/samples/level.c
    pjsip-apps/src/samples/main_rtems.c
    pjsip-apps/src/samples/mix.c
    pjsip-apps/src/samples/pcaputil.c
    pjsip-apps/src/samples/pjsip-perf.c
    pjsip-apps/src/samples/pjsua2_demo.cpp
    pjsip-apps/src/samples/playfile.c
    pjsip-apps/src/samples/playsine.c
    pjsip-apps/src/samples/proxy.h
    pjsip-apps/src/samples/recfile.c
    pjsip-apps/src/samples/resampleplay.c
    pjsip-apps/src/samples/simple_pjsua.c
    pjsip-apps/src/samples/simpleua.c
    pjsip-apps/src/samples/sipecho.c
    pjsip-apps/src/samples/siprtp.c
    pjsip-apps/src/samples/siprtp_report.c
    pjsip-apps/src/samples/sipstateless.c
    pjsip-apps/src/samples/stateful_proxy.c
    pjsip-apps/src/samples/stateless_proxy.c
    pjsip-apps/src/samples/stereotest.c
    pjsip-apps/src/samples/streamutil.c
    pjsip-apps/src/samples/strerror.c
    pjsip-apps/src/samples/tonegen.c
    pjsip-apps/src/samples/util.h
    pjsip-apps/src/samples/vid_codec_test.c
    pjsip-apps/src/samples/vid_streamutil.c
    pjsip-apps/src/swig/python/cc_mingw.c
    pjsip-apps/src/swig/pjsua2.i
    pjsip-apps/src/swig/symbols.i
    pjsip-apps/src/symsndtest/app_main.cpp
    pjsip-apps/src/symsndtest/main_symbian.cpp
    pjsip-apps/src/vidgui/vidgui.cpp
    pjsip-apps/src/vidgui/vidgui.h
    pjsip-apps/src/vidgui/vidwin.cpp
    pjsip-apps/src/vidgui/vidwin.h
    tests/pjsua/tools/cmp_wav.c
)

set (PJPROJECT_LIBRARIES
    pjlib
    pjlib_util
    pjmedia
    pjmedia_audiodev
    pjmedia_codec
    pjmedia_videodev
    pjnath
    pjsip_core
    pjsip_simple
    pjsip_ua
    pjsua_lib
    pjsua2_lib
    baseclasses
    g7221codec
    gsmcodec
    ilbccodec
    portaudio
    resample
    speex
    srtp
)
if (WIN32)
    list(APPEND PJPROJECT_PLATFORM_LIBRARIES
        milenage
        wsock32.lib
        ws2_32.lib
        ole32.lib
        dsound.lib
    )
elseif(UNIX)
    list(APPEND PJPROJECT_PLATFORM_LIBRARIES
        m
        rt
        pthread
        asound
        SDL2
        avformat
        avcodec
        avutil
        crypto
        ssl
        opencore-amrnb
        opencore-amrwb
        swscale
        v4l2
        vo-amrwbenc
    )
endif()
add_library(pjproject STATIC pjmedia/src/pjmedia/dummy.c)
target_link_libraries(pjproject ${PJPROJECT_LIBRARIES} ${PJPROJECT_PLATFORM_LIBRARIES})
list(APPEND PJSIP_INSTALL_TARGETS pjproject)
if (WIN32)
    set (PJPROJECT_LINKER_FLAGS "")
    foreach (LIB ${PJPROJECT_LIBRARIES})
        get_target_property(LIB_LOCATION ${LIB} LOCATION)
        if (LIB_LOCATION)
            set (PJPROJECT_LINKER_FLAGS "${PJPROJECT_LINKER_FLAGS} ${LIB_LOCATION}")
        endif()
    endforeach()
    set_target_properties(pjproject PROPERTIES STATIC_LIBRARY_FLAGS ${PJPROJECT_LINKER_FLAGS})
endif()

#    pjsip-apps/src/pjsua/android/jni/pjsua_app_callback.h
#    pjsip-apps/src/pjsua/bb10/src/applicationui.h
#    pjsip-apps/src/pjsua/bb10/precompiled.h
#    pjsip-apps/src/pjsua/ios/ipjsua/ipjsuaAppDelegate.h
#    pjsip-apps/src/pjsua/ios/ipjsua/ipjsuaViewController.h
#    pjsip-apps/src/pjsua/symbian/inc/pjsuaApplication.h
#    pjsip-apps/src/pjsua/symbian/inc/pjsuaAppUi.h
#    pjsip-apps/src/pjsua/symbian/inc/pjsuaContainer.h
#    pjsip-apps/src/pjsua/symbian/inc/PjsuaContainerView.h
#    pjsip-apps/src/pjsua/symbian/inc/pjsuaDocument.h
#    pjsip-apps/src/pjsua/gui.h
#    pjsip-apps/src/pjsua/pjsua_app.h
#    pjsip-apps/src/pjsua/pjsua_app_common.h
#    pjsip-apps/src/pjsua/pjsua_app_config.h
#    pjsip-apps/src/pjsua/android/jni/pjsua.i
#    pjsip-apps/src/pjsua/android/jni/pjsua_app_callback.cpp
#    pjsip-apps/src/pjsua/bb10/src/applicationui.cpp
#    pjsip-apps/src/pjsua/bb10/src/main.cpp
#    pjsip-apps/src/pjsua/symbian/src/pjsuaApplication.cpp
#    pjsip-apps/src/pjsua/symbian/src/pjsuaAppUi.cpp
#    pjsip-apps/src/pjsua/symbian/src/pjsuaContainer.cpp
#    pjsip-apps/src/pjsua/symbian/src/PjsuaContainerView.cpp
#    pjsip-apps/src/pjsua/symbian/src/pjsuaDocument.cpp
#    pjsip-apps/src/pjsua/wm/main_wm.c
#    pjsip-apps/src/pjsua/main_rtems.c

set (PJSUA_SOURCES
    pjsip-apps/src/pjsua/main.c
    pjsip-apps/src/pjsua/pjsua_app.c
    pjsip-apps/src/pjsua/pjsua_app_cli.c
    pjsip-apps/src/pjsua/pjsua_app_common.c
    pjsip-apps/src/pjsua/pjsua_app_config.c
    pjsip-apps/src/pjsua/pjsua_app_legacy.c
)
add_executable(pjsua ${PJSUA_SOURCES})
target_link_libraries(pjsua pjproject)

include(CheckIncludeFiles)
check_include_files("openssl/bio.h;openssl/err.h;openssl/x509v3.h;openssl/ssl.h" HAS_OPENSSL_HEADERS)

configure_file (
    "${PROJECT_SOURCE_DIR}/pjlib/include/pj/config_site_cmake.in"
    "${PROJECT_SOURCE_DIR}/pjlib/include/pj/config_site_cmake.h"
)

install (TARGETS pjsua                    DESTINATION bin)
install (TARGETS ${PJSIP_INSTALL_TARGETS} DESTINATION lib)
install (DIRECTORY pjlib/include          DESTINATION .)
install (DIRECTORY pjlib-util/include     DESTINATION .)
install (DIRECTORY pjmedia/include        DESTINATION .)
install (DIRECTORY pjnath/include         DESTINATION .)
install (DIRECTORY pjsip/include          DESTINATION .)
