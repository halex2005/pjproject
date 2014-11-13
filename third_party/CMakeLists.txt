#    BaseClasses/amfilter.h
#    BaseClasses/combase.h
#    BaseClasses/ctlutil.h
#    BaseClasses/fourcc.h
#    BaseClasses/measure.h
#    BaseClasses/msgthrd.h
#    BaseClasses/mtype.h
#    BaseClasses/refclock.h
#    BaseClasses/reftime.h
#    BaseClasses/renbase.h
#    BaseClasses/seekpt.h
#    BaseClasses/streams.h
#    BaseClasses/wxdebug.h
#    BaseClasses/wxlist.h
#    BaseClasses/wxutil.h

set(BASECLASSES_SOURCES
    BaseClasses/amfilter.cpp
    BaseClasses/amvideo.cpp
    BaseClasses/arithutil.cpp
    BaseClasses/combase.cpp
    BaseClasses/ctlutil.cpp
    BaseClasses/mtype.cpp
    BaseClasses/renbase.cpp
    BaseClasses/wxdebug.cpp
    BaseClasses/wxlist.cpp
    BaseClasses/wxutil.cpp
)
add_library(baseclasses STATIC ${BASECLASSES_SOURCES})
set_property(TARGET baseclasses APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/baseclasses)

#    bdsound/include/bdimad.h
#    build/gsm/config.h
#    build/portaudio/src/pa_allocation.h
#    build/portaudio/src/pa_converters.h
#    build/portaudio/src/pa_cpuload.h
#    build/portaudio/src/pa_debugprint.h
#    build/portaudio/src/pa_dither.h
#    build/portaudio/src/pa_endianness.h
#    build/portaudio/src/pa_hostapi.h
#    build/portaudio/src/pa_linux_alsa.h
#    build/portaudio/src/pa_mac_core.h
#    build/portaudio/src/pa_mac_core_blocking.h
#    build/portaudio/src/pa_mac_core_internal.h
#    build/portaudio/src/pa_mac_core_utilities.h
#    build/portaudio/src/pa_process.h
#    build/portaudio/src/pa_ringbuffer.h
#    build/portaudio/src/pa_stream.h
#    build/portaudio/src/pa_trace.h
#    build/portaudio/src/pa_types.h
#    build/portaudio/src/pa_unix_util.h
#    build/portaudio/src/pa_util.h
#    build/portaudio/src/pa_win_waveformat.h
#    build/portaudio/src/pa_win_wmme.h
#    build/portaudio/src/portaudio.h
#    portaudio/include/pa_asio.h
#    portaudio/include/pa_jack.h
#    portaudio/include/pa_linux_alsa.h
#    portaudio/include/pa_mac_core.h
#    portaudio/include/pa_win_ds.h
#    portaudio/include/pa_win_waveformat.h
#    portaudio/include/pa_win_wmme.h
#    portaudio/include/portaudio.h
#    portaudio/pablio/pablio.h
#    portaudio/src/common/pa_allocation.h
#    portaudio/src/common/pa_converters.h
#    portaudio/src/common/pa_cpuload.h
#    portaudio/src/common/pa_debugprint.h
#    portaudio/src/common/pa_dither.h
#    portaudio/src/common/pa_endianness.h
#    portaudio/src/common/pa_hostapi.h
#    portaudio/src/common/pa_memorybarrier.h
#    portaudio/src/common/pa_process.h
#    portaudio/src/common/pa_ringbuffer.h
#    portaudio/src/common/pa_stream.h
#    portaudio/src/common/pa_trace.h
#    portaudio/src/common/pa_types.h
#    portaudio/src/common/pa_util.h
#    portaudio/src/hostapi/asio/iasiothiscallresolver.h
#    portaudio/src/hostapi/coreaudio/pa_mac_core_blocking.h
#    portaudio/src/hostapi/coreaudio/pa_mac_core_internal.h
#    portaudio/src/hostapi/coreaudio/pa_mac_core_utilities.h
#    portaudio/src/hostapi/dsound/pa_win_ds_dynlink.h
#    portaudio/src/os/unix/pa_unix_util.h
#    portaudio/src/os/win/pa_win_wdmks_utils.h
#    portaudio/src/os/win/pa_x86_plain_converters.h
#    build/portaudio/src/pa_allocation.c
#    build/portaudio/src/pa_converters.c
#    build/portaudio/src/pa_cpuload.c
#    build/portaudio/src/pa_debugprint.c
#    build/portaudio/src/pa_dither.c
#    build/portaudio/src/pa_front.c
#    build/portaudio/src/pa_linux_alsa.c
#    build/portaudio/src/pa_mac_core.c
#    build/portaudio/src/pa_mac_core_blocking.c
#    build/portaudio/src/pa_mac_core_old.c
#    build/portaudio/src/pa_mac_core_utilities.c
#    build/portaudio/src/pa_mac_hostapis.c
#    build/portaudio/src/pa_process.c
#    build/portaudio/src/pa_ringbuffer.c
#    build/portaudio/src/pa_skeleton.c
#    build/portaudio/src/pa_stream.c
#    build/portaudio/src/pa_trace.c
#    build/portaudio/src/pa_unix_hostapis.c
#    build/portaudio/src/pa_unix_oss.c
#    build/portaudio/src/pa_unix_util.c
#    build/portaudio/src/pa_win_hostapis.c
#    build/portaudio/src/pa_win_util.c
#    build/portaudio/src/pa_win_waveformat.c
#    build/portaudio/src/pa_win_wmme.c
#    portaudio/pablio/pablio.c
#    portaudio/pablio/test_rw.c
#    portaudio/pablio/test_rw_echo.c
#    portaudio/pablio/test_w_saw.c
#    portaudio/pablio/test_w_saw8.c
#    portaudio/src/common/pa_ringbuffer.c
#    portaudio/src/hostapi/coreaudio/pa_mac_core.c
#    portaudio/src/hostapi/coreaudio/pa_mac_core_blocking.c
#    portaudio/src/hostapi/coreaudio/pa_mac_core_old.c
#    portaudio/src/hostapi/coreaudio/pa_mac_core_utilities.c
#    portaudio/src/os/win/pa_win_wdmks_utils.c
#    portaudio/src/hostapi/wasapi/pa_win_wasapi.cpp
#    portaudio/src/hostapi/wdmks/pa_win_wdmks.c

set(PORTAUDIO_SOURCES
#    portaudio/src/hostapi/asio/iasiothiscallresolver.cpp
#    portaudio/src/hostapi/asio/pa_asio.cpp
#    portaudio/src/hostapi/jack/pa_jack.c
#    portaudio/src/hostapi/oss/recplay.c
)
if (WIN32)
    LIST(APPEND PORTAUDIO_SOURCES
        portaudio/src/common/pa_allocation.c
        portaudio/src/common/pa_converters.c
        portaudio/src/common/pa_cpuload.c
        portaudio/src/common/pa_debugprint.c
        portaudio/src/common/pa_dither.c
        portaudio/src/common/pa_front.c
        portaudio/src/common/pa_process.c
        portaudio/src/common/pa_skeleton.c
        portaudio/src/common/pa_stream.c
        portaudio/src/common/pa_trace.c
        portaudio/src/hostapi/dsound/pa_win_ds.c
        portaudio/src/hostapi/dsound/pa_win_ds_dynlink.c
        portaudio/src/hostapi/wmme/pa_win_wmme.c
        portaudio/src/os/win/pa_win_hostapis.c
        portaudio/src/os/win/pa_win_util.c
        portaudio/src/os/win/pa_win_waveformat.c
        portaudio/src/os/win/pa_x86_plain_converters.c
    )
    add_library(portaudio STATIC ${PORTAUDIO_SOURCES})
    set_property(TARGET portaudio APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/portaudio/include)
    set_property(TARGET portaudio APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/portaudio/src/common)
    set_property(TARGET portaudio APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/portaudio/src/os/win)
    set_property(TARGET portaudio APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/$ENV{DXSDK_DIR}/include)
elseif(UNIX)
    LIST(APPEND PORTAUDIO_SOURCES
        build/portaudio/src/pa_allocation.c
        build/portaudio/src/pa_converters.c
        build/portaudio/src/pa_cpuload.c
        build/portaudio/src/pa_debugprint.c
        build/portaudio/src/pa_dither.c
        build/portaudio/src/pa_front.c
        build/portaudio/src/pa_linux_alsa.c
        build/portaudio/src/pa_process.c
        build/portaudio/src/pa_skeleton.c
        build/portaudio/src/pa_stream.c
        build/portaudio/src/pa_trace.c
        build/portaudio/src/pa_unix_hostapis.c
        build/portaudio/src/pa_unix_oss.c
        build/portaudio/src/pa_unix_util.c
    )
    add_library(portaudio STATIC ${PORTAUDIO_SOURCES})
    set_property(TARGET portaudio APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/build/portaudio/src)
    set_property(TARGET portaudio APPEND PROPERTY COMPILE_DEFINITIONS HAVE_SYS_SOUNDCARD_H)
    set_property(TARGET portaudio APPEND PROPERTY COMPILE_DEFINITIONS HAVE_LINUX_SOUNDCARD_H)
    set_property(TARGET portaudio APPEND PROPERTY COMPILE_DEFINITIONS OPENSSL_NO_SSL2=1)
    set_property(TARGET portaudio APPEND PROPERTY COMPILE_DEFINITIONS PA_LITTLE_ENDIAN)
    set_property(TARGET portaudio APPEND PROPERTY COMPILE_DEFINITIONS PA_USE_ALSA=1)
    set_property(TARGET portaudio APPEND PROPERTY COMPILE_DEFINITIONS PA_USE_OSS=1)
endif()

#    g7221/common/basic_op.h
#    g7221/common/basic_op_i.h
#    g7221/common/config.h
#    g7221/common/count.h
#    g7221/common/defs.h
#    g7221/common/huff_def.h
#    g7221/common/huff_tab.h
#    g7221/common/tables.h
#    g7221/common/typedef.h
#    g7221/decode/dct4_s.h
#    g7221/encode/dct4_a.h

set(G7221_SOURCES
    g7221/common/basic_op.c
    g7221/common/common.c
    g7221/common/huff_tab.c
    g7221/common/tables.c
    g7221/decode/coef2sam.c
    g7221/decode/dct4_s.c
    g7221/decode/decoder.c
    g7221/encode/dct4_a.c
    g7221/encode/encoder.c
    g7221/encode/sam2coef.c
)
add_library(g7221codec STATIC ${G7221_SOURCES})
set_property(TARGET g7221codec APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR})
set_property(TARGET g7221codec APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/g7221/common)

#    gsm/inc/config.h
#    gsm/inc/gsm.h
#    gsm/inc/private.h
#    gsm/inc/proto.h
#    gsm/inc/unproto.h
#    gsm/inc/toast.h
#    gsm/add-test/add_test.c
#    gsm/src/toast.c
#    gsm/src/toast_alaw.c
#    gsm/src/toast_audio.c
#    gsm/src/toast_lin.c
#    gsm/src/toast_ulaw.c
#    gsm/tls/bitter.c
#    gsm/tls/ginger.c
#    gsm/tls/sour.c
#    gsm/tls/sweet.c
#    gsm/tls/taste.c
#    gsm/tls/taste.h
#    gsm/tst/cod2lin.c
#    gsm/tst/cod2txt.c
#    gsm/tst/gsm2cod.c
#    gsm/tst/lin2cod.c
#    gsm/tst/lin2txt.c

set(GSM_SOURCES
    gsm/src/add.c
    gsm/src/code.c
    gsm/src/decode.c
    gsm/src/gsm_create.c
    gsm/src/gsm_decode.c
    gsm/src/gsm_destroy.c
    gsm/src/gsm_encode.c
    gsm/src/gsm_explode.c
    gsm/src/gsm_implode.c
    gsm/src/gsm_option.c
    gsm/src/long_term.c
    gsm/src/lpc.c
    gsm/src/preprocess.c
    gsm/src/rpe.c
    gsm/src/short_term.c
    gsm/src/table.c
)
if (WIN32)
    LIST(APPEND GSM_SOURCES
        gsm/src/debug.c
        gsm/src/gsm_print.c
    )
elseif(UNIX)
endif()
add_library(gsmcodec STATIC ${GSM_SOURCES})
set_property(TARGET gsmcodec APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/gsm/inc)
set_property(TARGET gsmcodec APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/build/gsm)

#    ilbc/anaFilter.h
#    ilbc/constants.h
#    ilbc/createCB.h
#    ilbc/doCPLC.h
#    ilbc/enhancer.h
#    ilbc/filter.h
#    ilbc/FrameClassify.h
#    ilbc/gainquant.h
#    ilbc/getCBvec.h
#    ilbc/helpfun.h
#    ilbc/hpInput.h
#    ilbc/hpOutput.h
#    ilbc/iCBConstruct.h
#    ilbc/iCBSearch.h
#    ilbc/iLBC_decode.h
#    ilbc/iLBC_encode.h
#    ilbc/LPCdecode.h
#    ilbc/LPCencode.h
#    ilbc/lsf.h
#    ilbc/packing.h
#    ilbc/StateConstructW.h
#    ilbc/StateSearchW.h
#    ilbc/syntFilter.h
#    ilbc/iLBC_define.h
#    ilbc/iLBC_test.c

set(ILBC_SOURCES
    ilbc/anaFilter.c
    ilbc/constants.c
    ilbc/createCB.c
    ilbc/doCPLC.c
    ilbc/enhancer.c
    ilbc/filter.c
    ilbc/FrameClassify.c
    ilbc/gainquant.c
    ilbc/getCBvec.c
    ilbc/helpfun.c
    ilbc/hpInput.c
    ilbc/hpOutput.c
    ilbc/iCBConstruct.c
    ilbc/iCBSearch.c
    ilbc/iLBC_decode.c
    ilbc/iLBC_encode.c
    ilbc/LPCdecode.c
    ilbc/LPCencode.c
    ilbc/lsf.c
    ilbc/packing.c
    ilbc/StateConstructW.c
    ilbc/StateSearchW.c
    ilbc/syntFilter.c
)
add_library(ilbccodec STATIC ${ILBC_SOURCES})

#    build/resample/config.h
#    resample/src/largefilter.h
#    resample/include/resamplesubs.h
#    resample/src/resample.h
#    resample/src/smallfilter.h
#    resample/src/stddefs.h
#    resample/src/libresample_dll.c

set (RESAMPLE_SOURCES
    resample/src/resamplesubs.c
)
add_library(resample STATIC ${RESAMPLE_SOURCES})
set_property(TARGET resample APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/build/resample)
set_property(TARGET resample APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/resample/include)

#    build/speex/speex/speex_config_types.h
#    build/speex/config.h
#    speex/include/speex/speex.h
#    speex/include/speex/speex_bits.h
#    speex/include/speex/speex_buffer.h
#    speex/include/speex/speex_callbacks.h
#    speex/include/speex/speex_echo.h
#    speex/include/speex/speex_header.h
#    speex/include/speex/speex_jitter.h
#    speex/include/speex/speex_preprocess.h
#    speex/include/speex/speex_resampler.h
#    speex/include/speex/speex_stereo.h
#    speex/include/speex/speex_types.h
#    speex/libspeex/_kiss_fft_guts.h
#    speex/libspeex/arch.h
#    speex/libspeex/cb_search.h
#    speex/libspeex/cb_search_arm4.h
#    speex/libspeex/cb_search_bfin.h
#    speex/libspeex/cb_search_sse.h
#    speex/libspeex/fftwrap.h
#    speex/libspeex/filterbank.h
#    speex/libspeex/filters.h
#    speex/libspeex/filters_arm4.h
#    speex/libspeex/filters_bfin.h
#    speex/libspeex/filters_sse.h
#    speex/libspeex/fixed_arm4.h
#    speex/libspeex/fixed_arm5e.h
#    speex/libspeex/fixed_bfin.h
#    speex/libspeex/fixed_debug.h
#    speex/libspeex/fixed_generic.h
#    speex/libspeex/kiss_fft.h
#    speex/libspeex/kiss_fftr.h
#    speex/libspeex/lpc.h
#    speex/libspeex/lpc_bfin.h
#    speex/libspeex/lsp.h
#    speex/libspeex/lsp_bfin.h
#    speex/libspeex/ltp.h
#    speex/libspeex/ltp_arm4.h
#    speex/libspeex/ltp_bfin.h
#    speex/libspeex/ltp_sse.h
#    speex/libspeex/math_approx.h
#    speex/libspeex/misc_bfin.h
#    speex/libspeex/modes.h
#    speex/libspeex/nb_celp.h
#    speex/libspeex/os_support.h
#    speex/libspeex/pseudofloat.h
#    speex/libspeex/quant_lsp.h
#    speex/libspeex/quant_lsp_bfin.h
#    speex/libspeex/resample_sse.h
#    speex/libspeex/sb_celp.h
#    speex/libspeex/smallft.h
#    speex/libspeex/stack_alloc.h
#    speex/libspeex/vbr.h
#    speex/libspeex/vorbis_psy.h
#    speex/libspeex/vq.h
#    speex/libspeex/vq_arm4.h
#    speex/libspeex/vq_bfin.h
#    speex/libspeex/vq_sse.h
#    speex/symbian/config.h
#    speex/win32/config.h

#    speex/libspeex/testdenoise.c
#    speex/libspeex/testecho.c
#    speex/libspeex/testenc.c
#    speex/libspeex/testenc_uwb.c
#    speex/libspeex/testenc_wb.c
#    speex/libspeex/testjitter.c
#    speex/libspeex/testresample.c
#    speex/libspeex/buffer.c
#    speex/libspeex/jitter.c
#    speex/libspeex/scal.c
#    speex/libspeex/vorbis_psy.c

set (SPEEX_SOURCES
    speex/libspeex/bits.c
    speex/libspeex/cb_search.c
    speex/libspeex/exc_5_64_table.c
    speex/libspeex/exc_5_256_table.c
    speex/libspeex/exc_8_128_table.c
    speex/libspeex/exc_10_16_table.c
    speex/libspeex/exc_10_32_table.c
    speex/libspeex/exc_20_32_table.c
    speex/libspeex/fftwrap.c
    speex/libspeex/filterbank.c
    speex/libspeex/filters.c
    speex/libspeex/gain_table.c
    speex/libspeex/gain_table_lbr.c
    speex/libspeex/hexc_10_32_table.c
    speex/libspeex/hexc_table.c
    speex/libspeex/high_lsp_tables.c
    speex/libspeex/kiss_fft.c
    speex/libspeex/kiss_fftr.c
    speex/libspeex/lpc.c
    speex/libspeex/lsp.c
    speex/libspeex/lsp_tables_nb.c
    speex/libspeex/ltp.c
    speex/libspeex/mdf.c
    speex/libspeex/modes.c
    speex/libspeex/modes_wb.c
    speex/libspeex/nb_celp.c
    speex/libspeex/preprocess.c
    speex/libspeex/quant_lsp.c
    speex/libspeex/resample.c
    speex/libspeex/sb_celp.c
    speex/libspeex/smallft.c
    speex/libspeex/speex.c
    speex/libspeex/speex_callbacks.c
    speex/libspeex/speex_header.c
    speex/libspeex/stereo.c
    speex/libspeex/vbr.c
    speex/libspeex/vq.c
    speex/libspeex/window.c
)
add_library(speex STATIC ${SPEEX_SOURCES})
set_property(TARGET speex APPEND PROPERTY COMPILE_FLAGS -DHAVE_CONFIG_H)
set_property(TARGET speex APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/build/speex)
set_property(TARGET speex APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/speex/include)

#    build/srtp/srtp_config.h
#    srtp/crypto/include/aes.h
#    srtp/crypto/include/aes_cbc.h
#    srtp/crypto/include/aes_icm.h
#    srtp/crypto/include/alloc.h
#    srtp/crypto/include/auth.h
#    srtp/crypto/include/cipher.h
#    srtp/crypto/include/crypto.h
#    srtp/crypto/include/crypto_kernel.h
#    srtp/crypto/include/crypto_math.h
#    srtp/crypto/include/crypto_types.h
#    srtp/crypto/include/cryptoalg.h
#    srtp/crypto/include/datatypes.h
#    srtp/crypto/include/err.h
#    srtp/crypto/include/gf2_8.h
#    srtp/crypto/include/hmac.h
#    srtp/crypto/include/integers.h
#    srtp/crypto/include/kernel_compat.h
#    srtp/crypto/include/key.h
#    srtp/crypto/include/null_auth.h
#    srtp/crypto/include/null_cipher.h
#    srtp/crypto/include/prng.h
#    srtp/crypto/include/rand_source.h
#    srtp/crypto/include/rdb.h
#    srtp/crypto/include/rdbx.h
#    srtp/crypto/include/sha1.h
#    srtp/crypto/include/stat.h
#    srtp/crypto/include/xfm.h
#    srtp/include/getopt_s.h
#    srtp/include/rtp.h
#    srtp/include/rtp_priv.h
#    srtp/include/srtp.h
#    srtp/include/srtp_priv.h
#    srtp/include/ut_sim.h
#    srtp/crypto/test/aes_calc.c
#    srtp/crypto/test/auth_driver.c
#    srtp/crypto/test/cipher_driver.c
#    srtp/crypto/test/datatypes_driver.c
#    srtp/crypto/test/env.c
#    srtp/crypto/test/kernel_driver.c
#    srtp/crypto/test/rand_gen.c
#    srtp/crypto/test/sha1_driver.c
#    srtp/crypto/test/stat_driver.c
#    srtp/test/dtls_srtp_driver.c
#    srtp/test/getopt_s.c
#    srtp/test/lfsr.c
#    srtp/test/rdbx_driver.c
#    srtp/test/replay_driver.c
#    srtp/test/roc_driver.c
#    srtp/test/rtp.c
#    srtp/test/rtpw.c
#    srtp/test/srtp_driver.c
#    srtp/config_in.h
#    srtp/crypto/kernel/err.c
#    srtp/crypto/math/math.c
#    srtp/crypto/rng/rand_linux_kernel.c
#    srtp/tables/aes_tables.c

set (SRTP_SOURCES
    srtp/crypto/cipher/aes.c
    srtp/crypto/cipher/aes_cbc.c
    srtp/crypto/cipher/aes_icm.c
    srtp/crypto/cipher/cipher.c
    srtp/crypto/cipher/null_cipher.c
    srtp/crypto/hash/auth.c
    srtp/crypto/hash/hmac.c
    srtp/crypto/hash/null_auth.c
    srtp/crypto/hash/sha1.c
    srtp/crypto/kernel/alloc.c
    srtp/crypto/kernel/crypto_kernel.c
    srtp/crypto/kernel/key.c
    srtp/crypto/math/datatypes.c
    srtp/crypto/math/stat.c
    srtp/crypto/replay/rdb.c
    srtp/crypto/replay/rdbx.c
    srtp/crypto/rng/ctr_prng.c
    srtp/crypto/rng/prng.c
    srtp/crypto/rng/rand_source.c
    srtp/pjlib/srtp_err.c
    srtp/srtp/srtp.c
)
if (WIN32)
    LIST(APPEND SRTP_SOURCES
        srtp/crypto/ae_xfm/xfm.c
        srtp/crypto/math/gf2_8.c
    )
elseif(UNIX)
    LIST(APPEND SRTP_SOURCES
        srtp/crypto/replay/ut_sim.c
    )
endif()
add_library(srtp STATIC ${SRTP_SOURCES})
set_property(TARGET srtp APPEND PROPERTY COMPILE_FLAGS -DHAVE_CONFIG_H)
set_property(TARGET srtp APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/build/srtp)
set_property(TARGET srtp APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/srtp/include)
set_property(TARGET srtp APPEND PROPERTY INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/srtp/crypto/include)

if (WIN32)

    #    milenage/milenage.h
    #    milenage/rijndael.h

    set (MILENAGE_SOURCES
        milenage/milenage.c
        milenage/rijndael.c
    )
    add_library(milenage STATIC ${MILENAGE_SOURCES})

    set (MP3_SOURCES
        mp3/BladeMP3EncDLL.h
        mp3/mp3_port.h
        mp3/mp3_writer.c
    )
    add_library(mp3 STATIC ${MP3_SOURCES})

endif()

