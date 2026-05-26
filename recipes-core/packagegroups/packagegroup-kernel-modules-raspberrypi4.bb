SUMMARY = "Custom package group for RaspberryPi-4 related firmware and kernel modules"

LICENSE = "MIT"

PACKAGE_ARCH = "${VENDOR_LAYER_EXTENSION}"

inherit packagegroup

DEPENDS = "virtual/kernel"

PV = "1.0.0"
PR = "r0"

RDEPENDS:${PN} = " \
    kernel-modules \
    linux-firmware-rpidistro-bcm43455 \
    bluez-firmware-rpidistro-bcm4345c0-hcd \
    "
