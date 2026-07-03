# Fix: FILES referenced ${base_libdir}/optee_armtz/ which resolves to
# /lib64/optee_armtz/ on 64-bit (cortexa73) RDKE builds. Align with
# nonarch_base_libdir (/lib) to match the standard OP-TEE TA search path.

FILES:${PN} += "${nonarch_base_libdir}/optee_armtz/"
