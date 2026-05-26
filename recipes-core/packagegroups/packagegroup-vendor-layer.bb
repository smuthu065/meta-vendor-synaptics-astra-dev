SUMMARY = "Custom package group for vendor layer"

LICENSE = "MIT"

PACKAGE_ARCH = "${VENDOR_LAYER_EXTENSION}"

inherit packagegroup

DEPENDS = " virtual/kernel make-mod-scripts"

PV = "4.11.1"
PR = "r0"

RDEPENDS:${PN} = " \
        ffmpeg \
        pi-bluetooth \
        sysint-soc \
        systemaudioplatform \
        virtual/vendor-westeros-soc \
        virtual/vendor-westeros-sink \
        rdk-gstreamer-utils-platform \
        ${@bb.utils.contains('DISTRO_FEATURES', 'apparmor', 'apparmor-vendor', '', d)} \
        displayinfo-soc \
        "

# Include MACHINE specific packagegroup.
RDEPENDS:${PN}:append:raspberrypi4 = " \
        packagegroup-kernel-modules-raspberrypi4 \
        packagegroup-hal-raspberrypi4 \
        "

# These packages shall be moved to OSS layer in future.
RDEPENDS:${PN}:append:rdkv-oss = " \
        cairo \
        essos \
        gstreamer1.0 \
        gstreamer1.0-libav \
        gstreamer1.0-plugins-bad \
        gstreamer1.0-plugins-bad-meta \
        gstreamer1.0-plugins-base \
        gstreamer1.0-plugins-base-meta \
        gstreamer1.0-plugins-good \
        gstreamer1.0-plugins-good-meta \
        gstreamer1.0-rtsp-server \
        libdrm \
        libepoxy \
        libmms \
        librsvg \
        mpg123 \
        pango \
        pulseaudio \
        wpa-supplicant \
        wayland-default-egl \
        westeros \
        westeros-simplebuffer \
        westeros-simpleshell \
        gpu-layer \
        ${@bb.utils.contains('DISTRO_FEATURES', 'vulkan', " vulkan-loader vulkan-tools ", "", d)} \
        "
