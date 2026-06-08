SUMMARY = "Custom package group for Synaptics SL1680 kernel modules"

LICENSE = "MIT"

PACKAGE_ARCH = "${VENDOR_LAYER_EXTENSION}"

inherit packagegroup

DEPENDS = "virtual/kernel"

PV = "1.0.0"
PR = "r0"

RDEPENDS:${PN} = " \
    kernel-modules \
    "