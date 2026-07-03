# Fix: STAGING_BASELIBDIR resolves to <sysroot>/lib64 on cortexa73 64-bit builds
# because BASE_LIB:tune-cortexa73 = "lib64". OP-TEE early TA .stripped.elf files
# are installed by the synasdk-*-ta recipes under nonarch_base_libdir (/lib), so
# EARLY_SYNA_TA must use ${STAGING_DIR_HOST}${nonarch_base_libdir} to locate them.

EARLY_SYNA_TA:platypus = " ${STAGING_DIR_HOST}${nonarch_base_libdir}/optee_armtz/1316a183-894d-43fe-9893-bb946ae103f5.stripped.elf \
                            ${STAGING_DIR_HOST}${nonarch_base_libdir}/optee_armtz/1316a183-894d-43fe-9893-bb946ae10436.stripped.elf \
                            ${STAGING_DIR_HOST}${nonarch_base_libdir}/optee_armtz/1316a183-894d-43fe-9893-bb946ae1042d.stripped.elf \
                            ${SYNA_TA_PATH}/libsynap.ta/platypus/A0/1316a183-894d-43fe-9893bb946ae1042f.stripped.elf \
                            ${STAGING_DIR_HOST}${nonarch_base_libdir}/optee_armtz/1316a183-894d-43fe-9893-bb946ae103f0.stripped.elf \
"

EARLY_SYNA_TA:dolphin = " ${STAGING_DIR_HOST}${nonarch_base_libdir}/optee_armtz/1316a183-894d-43fe-9893-bb946ae103f5.stripped.elf \
                           ${STAGING_DIR_HOST}${nonarch_base_libdir}/optee_armtz/1316a183-894d-43fe-9893-bb946ae10436.stripped.elf \
                           ${STAGING_DIR_HOST}${nonarch_base_libdir}/optee_armtz/1316a183-894d-43fe-9893-bb946ae1042d.stripped.elf \
                           ${SYNA_TA_PATH}/libsynap.ta/dolphin/A0/genx/1316a183-894d-43fe-9893bb946ae1042f.stripped.elf \
                           ${STAGING_DIR_HOST}${nonarch_base_libdir}/optee_armtz/1316a183-894d-43fe-9893-bb946ae103f0.stripped.elf \
                           ${STAGING_DIR_HOST}${nonarch_base_libdir}/optee_armtz/1316a183-894d-43fe-9893-bb946ae103f3.stripped.elf \
"
