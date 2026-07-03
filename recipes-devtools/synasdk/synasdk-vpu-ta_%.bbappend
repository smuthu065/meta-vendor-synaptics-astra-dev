# Fix: Use nonarch_base_libdir (/lib) instead of base_libdir (/lib64) so
# tee-supplicant can find TAs at the standard /lib/optee_armtz path on
# 64-bit (cortexa73) RDKE builds.

do_install:append() {
    install -d ${D}${nonarch_base_libdir}/optee_armtz/
    install -m 0755 ${OUT}/*.ta ${D}${nonarch_base_libdir}/optee_armtz/
    install -m 0755 ${OUT}/*.elf ${D}${nonarch_base_libdir}/optee_armtz/
}

FILES:${PN} += "${nonarch_base_libdir}/optee_armtz/"
