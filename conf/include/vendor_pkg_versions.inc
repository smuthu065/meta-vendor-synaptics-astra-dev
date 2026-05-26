# This layer shall be common for all RPi variants.

#Linux kernel components

PR:pn-linux-libc-headers = "r0"
PACKAGE_ARCH:pn-linux-libc-headers = "${VENDOR_LAYER_EXTENSION}"

PACKAGE_ARCH:pn-android-raspberrypi = "${VENDOR_LAYER_EXTENSION}"

PV:pn-packagegroup-kernel-modules-raspberrypi4 = "6.1.77"
PR:pn-packagegroup-kernel-modules-raspberrypi4 = "r0"
PREFERRED_VERSION_android-raspberrypi = "6.1.%"
PACKAGE_ARCH:pn-packagegroup-kernel-modules-raspberrypi4 = "${VENDOR_LAYER_EXTENSION}"

PV:pn-linux-firmware-rpidistro = "1.0.0"
PR:pn-linux-firmware-rpidistro = "r0"
PACKAGE_ARCH:pn-linux-firmware-rpidistro = "${VENDOR_LAYER_EXTENSION}"

#Platform components

PV:pn-bluez-firmware-rpidistro = "1.0.0"
PR:pn-bluez-firmware-rpidistro = "r0"
PACKAGE_ARCH:pn-bluez-firmware-rpidistro = "${VENDOR_LAYER_EXTENSION}"

PV:pn-userland = "20220323"
PR:pn-userland = "r0"
PACKAGE_ARCH:pn-userland = "${VENDOR_LAYER_EXTENSION}"

PV:pn-pi-bluetooth = "0.1.17"
PR:pn-pi-bluetooth = "r0"
PACKAGE_ARCH:pn-pi-bluetooth = "${VENDOR_LAYER_EXTENSION}"

PV:pn-udev-rules-rpi = "1.0"
PR:pn-udev-rules-rpi = "r0"
PACKAGE_ARCH:pn-udev-rules-rpi = "${VENDOR_LAYER_EXTENSION}"

#OSS Components

PV:pn-libepoxy = "1.5.9"
PR:pn-libepoxy = "r0"
PACKAGE_ARCH:pn-libepoxy = "${VENDOR_LAYER_EXTENSION}"

PV:pn-make-mod-scripts = "1.0"
PR:pn-make-mod-scripts = "r0"
PACKAGE_ARCH:pn-make-mod-scripts = "${VENDOR_LAYER_EXTENSION}"

PV:pn-cairo = "1.16.0"
PR:pn-cairo = "r1"
PACKAGE_ARCH:pn-cairo = "${VENDOR_LAYER_EXTENSION}"

#PV:pn-libdrm = "2.4.110"
PR:pn-libdrm = "r0"
PACKAGE_ARCH:pn-libdrm = "${VENDOR_LAYER_EXTENSION}"

PV:pn-mesa = "22.0.3"
PR:pn-mesa = "r0"
PACKAGE_ARCH:pn-mesa = "${VENDOR_LAYER_EXTENSION}"
PACKAGE_ARCH:pn-libegl-mesa = "${VENDOR_LAYER_EXTENSION}"
PACKAGE_ARCH:pn-libgles2-mesa = "${VENDOR_LAYER_EXTENSION}"
PACKAGE_ARCH:pn-libgl-mesa = "${VENDOR_LAYER_EXTENSION}"
PACKAGE_ARCH:pn-libgbm = "${VENDOR_LAYER_EXTENSION}"

PV:pn-librsvg = "2.40.21"
PR:pn-librsvg = "r0"
PACKAGE_ARCH:pn-librsvg = "${VENDOR_LAYER_EXTENSION}"

PV:pn-mpg123 = "1.29.3"
PR:pn-mpg123 = "r0"
PACKAGE_ARCH:pn-mpg123 = "${VENDOR_LAYER_EXTENSION}"

PV:pn-pango = "1.44.7"
PR:pn-pango = "r0"
PACKAGE_ARCH:pn-pango = "${VENDOR_LAYER_EXTENSION}"

PV:pn-pulseaudio = "15.0"
PR:pn-pulseaudio = "r0"
PACKAGE_ARCH:pn-pulseaudio = "${VENDOR_LAYER_EXTENSION}"

PV:pn-libmms = "0.6.4"
PR:pn-libmms = "r0"
PACKAGE_ARCH:pn-libmms = "${VENDOR_LAYER_EXTENSION}"

PV:pn-alsa-plugins = "1.2.6"
PR:pn-alsa-plugins = "r0"
PACKAGE_ARCH:pn-alsa-plugins = "${VENDOR_LAYER_EXTENSION}"

PACKAGE_ARCH:pn-vulkan-tools = "${VENDOR_LAYER_EXTENSION}"
PACKAGE_ARCH:pn-vulkan-loader = "${VENDOR_LAYER_EXTENSION}"
PACKAGE_ARCH:pn-vulkan-headers = "${VENDOR_LAYER_EXTENSION}"
PACKAGE_ARCH:pn-vkmark = "${VENDOR_LAYER_EXTENSION}"
PREFERRED_VERSION_vulkan-tools = "1.3.204.1"
PREFERRED_VERSION_vulkan-headers = "1.3.204.1"
PREFERRED_VERSION_vulkan-loader = "1.3.204.1"

#Gstreamer components

GST_VERSION = "1.18.5"
GST_REVISION = "r0"

PV:pn-gstreamer1.0 = "${GST_VERSION}"
PR:pn-gstreamer1.0 = "${GST_REVISION}"
PACKAGE_ARCH:pn-gstreamer1.0 = "${VENDOR_LAYER_EXTENSION}"
PREFERRED_VERSION_gstreamer1.0 ?= "${GST_VERSION}"

PV:pn-gstreamer1.0-plugins-base = "${GST_VERSION}"
PR:pn-gstreamer1.0-plugins-base = "${GST_REVISION}"
PACKAGE_ARCH:pn-gstreamer1.0-plugins-base = "${VENDOR_LAYER_EXTENSION}"
PREFERRED_VERSION_gstreamer1.0-plugins-base ?= "${GST_VERSION}"

PV:pn-gstreamer1.0-plugins-base-meta = "${GST_VERSION}"
PR:pn-gstreamer1.0-plugins-base-meta = "${GST_REVISION}"
PACKAGE_ARCH:pn-gstreamer1.0-plugins-base-meta = "${VENDOR_LAYER_EXTENSION}"
PREFERRED_VERSION_gstreamer1.0-plugins-base-meta ?= "${GST_VERSION}"

PV:pn-gstreamer1.0-libav = "${GST_VERSION}"
PR:pn-gstreamer1.0-libav = "${GST_REVISION}"
PACKAGE_ARCH:pn-gstreamer1.0-libav = "${VENDOR_LAYER_EXTENSION}"
PREFERRED_VERSION_gstreamer1.0-libav ?= "${GST_VERSION}"

PV:pn-gstreamer1.0-plugins-good = "${GST_VERSION}"
PR:pn-gstreamer1.0-plugins-good = "${GST_REVISION}"
PACKAGE_ARCH:pn-gstreamer1.0-plugins-good = "${VENDOR_LAYER_EXTENSION}"
PREFERRED_VERSION_gstreamer1.0-plugins-good ?= "${GST_VERSION}"

PV:pn-gstreamer1.0-plugins-good-meta = "${GST_VERSION}"
PR:pn-gstreamer1.0-plugins-good-meta = "${GST_REVISION}"
PACKAGE_ARCH:pn-gstreamer1.0-plugins-good-meta = "${VENDOR_LAYER_EXTENSION}"
PREFERRED_VERSION_gstreamer1.0-plugins-good-meta ?= "${GST_VERSION}"

PV:pn-gstreamer1.0-plugins-bad = "${GST_VERSION}"
PR:pn-gstreamer1.0-plugins-bad = "${GST_REVISION}"
PACKAGE_ARCH:pn-gstreamer1.0-plugins-bad = "${VENDOR_LAYER_EXTENSION}"
PREFERRED_VERSION_gstreamer1.0-plugins-bad ?= "${GST_VERSION}"

PV:pn-gstreamer1.0-plugins-bad-meta = "${GST_VERSION}"
PR:pn-gstreamer1.0-plugins-bad-meta = "${GST_REVISION}"
PACKAGE_ARCH:pn-gstreamer1.0-plugins-bad-meta = "${VENDOR_LAYER_EXTENSION}"
PREFERRED_VERSION_gstreamer1.0-plugins-bad-meta ?= "${GST_VERSION}"

PV:pn-gstreamer1.0-rtsp-server = "${GST_VERSION}"
PR:pn-gstreamer1.0-rtsp-server = "${GST_REVISION}"
PACKAGE_ARCH:pn-gstreamer1.0-rtsp-server = "${VENDOR_LAYER_EXTENSION}"
PREFERRED_VERSION_gstreamer1.0-rtsp-server ?= "${GST_VERSION}"

# Westeros components

WESTEROS_VERSION = "1.01.64"
WESTEROS_REVISION = "r0"

# Tip of westeros master as of Oct 01, 2025
# Tag - Westeros-1.01.61 (revision - 9e675285a527115e65fcb0e7d2fc7a24a1e46e82)
WESTEROS_SRCREV = "Westeros-1.01.64"

PV:pn-westeros-simplebuffer = "${WESTEROS_VERSION}"
PR:pn-westeros-simplebuffer = "${WESTEROS_REVISION}"
PACKAGE_ARCH:pn-westeros-simplebuffer = "${VENDOR_LAYER_EXTENSION}"
SRCREV:pn-westeros-simplebuffer = "${WESTEROS_SRCREV}"

PV:pn-westeros-simpleshell = "${WESTEROS_VERSION}"
PR:pn-westeros-simpleshell = "${WESTEROS_REVISION}"
PACKAGE_ARCH:pn-westeros-simpleshell = "${VENDOR_LAYER_EXTENSION}"
SRCREV:pn-westeros-simpleshell = "${WESTEROS_SRCREV}"

PV:pn-westeros-soc-drm = "${WESTEROS_VERSION}"
PR:pn-westeros-soc-drm = "${WESTEROS_REVISION}"
PACKAGE_ARCH:pn-westeros-soc-drm = "${VENDOR_LAYER_EXTENSION}"
SRCREV:pn-westeros-soc-drm = "${WESTEROS_SRCREV}"

PV:pn-westeros = "${WESTEROS_VERSION}"
PR:pn-westeros = "${WESTEROS_REVISION}"
PACKAGE_ARCH:pn-westeros = "${VENDOR_LAYER_EXTENSION}"
SRCREV:pn-westeros = "${WESTEROS_SRCREV}"

PV:pn-essos = "${WESTEROS_VERSION}"
PR:pn-essos = "${WESTEROS_REVISION}"
PACKAGE_ARCH:pn-essos = "${VENDOR_LAYER_EXTENSION}"
SRCREV:pn-essos = "${WESTEROS_SRCREV}"

PV:pn-westeros-sink = "${WESTEROS_VERSION}"
PR:pn-westeros-sink = "${WESTEROS_REVISION}"
PACKAGE_ARCH:pn-westeros-sink = "${VENDOR_LAYER_EXTENSION}"
SRCREV:pn-westeros-sink = "${WESTEROS_SRCREV}"

PV:pn-wayland-default-egl = "1.20.0"
PR:pn-wayland-default-egl = "r0"
PACKAGE_ARCH:pn-wayland-default-egl = "${VENDOR_LAYER_EXTENSION}"

# RDKV HAL component versions

# RDKV HAL component versions of raspberrypi4
SRCREV:pn-devicesettings-hal-raspberrypi4 = "1.4.2"
PV:pn-devicesettings-hal-raspberrypi4 = "1.4.2"
PR:pn-devicesettings-hal-raspberrypi4 = "r0"
PACKAGE_ARCH:pn-devicesettings-hal-raspberrypi4 = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-hdmicec-hal-raspberrypi4 = "1.2.0"
PV:pn-hdmicec-hal-raspberrypi4 = "1.2.0"
PR:pn-hdmicec-hal-raspberrypi4 = "r0"
PACKAGE_ARCH:pn-hdmicec-hal-raspberrypi4 = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-iarmmgrs-hal-raspberrypi4 = "1.0.0"
PV:pn-iarmmgrs-hal-raspberrypi4 = "2.0.1"
PR:pn-iarmmgrs-hal-raspberrypi4 = "r0"
PACKAGE_ARCH:pn-iarmmgrs-hal-raspberrypi4 = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-pwrmgr-hal-raspberrypi4 = "1.2.0"
PV:pn-pwrmgr-hal-raspberrypi4 = "1.2.0"
PR:pn-pwrmgr-hal-raspberrypi4 = "r0"
PACKAGE_ARCH:pn-pwrmgr-hal-raspberrypi4 = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-deepsleepmgr-hal-raspberrypi4 = "1.1.1"
PV:pn-deepsleepmgr-hal-raspberrypi4 = "1.1.1"
PR:pn-deepsleepmgr-hal-raspberrypi4 = "r0"
PACKAGE_ARCH:pn-deepsleepmgr-hal-raspberrypi4 = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-mfrlibs-hal-raspberrypi4 = "1.1.0"
PV:pn-mfrlibs-hal-raspberrypi4 = "1.1.0"
PR:pn-mfrlibs-hal-raspberrypi4 = "r0"
PACKAGE_ARCH:pn-mfrlibs-hal-raspberrypi4 = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-sysint-soc = "1.1.14"
PV:pn-sysint-soc = "1.1.14"
PR:pn-sysint-soc = "r0"
PACKAGE_ARCH:pn-sysint-soc = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-systemaudioplatform = "1.0.1"
PV:pn-systemaudioplatform = "1.0.1"
PR:pn-systemaudioplatform = "r0"
PACKAGE_ARCH:pn-systemaudioplatform = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-rdk-gstreamer-utils-platform = "1.2.0"
PV:pn-rdk-gstreamer-utils-platform = "1.2.0"
PR:pn-rdk-gstreamer-utils-platform = "r0"
PACKAGE_ARCH:pn-rdk-gstreamer-utils-platform = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-audio-service-rpi = "1.0"
PV:pn-audio-service-rpi = "1.0"
PR:pn-audio-service-rpi = "r0"
PACKAGE_ARCH:pn-audio-service-rpi = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-gst-drm-plugins-rpi = "1.0"
PV:pn-gst-drm-plugins-rpi = "1.0"
PR:pn-gst-drm-plugins-rpi = "r0"
PACKAGE_ARCH:pn-gst-drm-plugins-rpi = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-secapi2-adapter-rpi  = "1.0"
PV:pn-secapi2-adapter-rpi  = "1.0"
PR:pn-secapi2-adapter-rpi  = "r0"
PACKAGE_ARCH:pn-secapi2-adapter-rpi  = "${VENDOR_LAYER_EXTENSION}"

PREFERRED_VERSION_ffmpeg = "4.2.2"
PR:pn-ffmpeg = "r2"
PACKAGE_ARCH:pn-ffmpeg = "${VENDOR_LAYER_EXTENSION}"

PV:pn-apparmor-vendor = "1.0.1"
PR:pn-apparmor-vendor = "r0"
PACKAGE_ARCH:pn-apparmor-vendor = "${VENDOR_LAYER_EXTENSION}"
SRCREV:pn-apparmor-vendor = "1.0.1"
SRCREV_rdk-apparmor-profiles:pn-apparmor-vendor = "2.4.0"

SRCREV:pn-displayinfo-soc = "1.0.0"
PV:pn-displayinfo-soc = "1.0.0"
PR:pn-displayinfo-soc = "r0"
PACKAGE_ARCH:pn-displayinfo-soc = "${VENDOR_LAYER_EXTENSION}"

SRCREV:pn-miracast-hal-raspberrypi4 = "1.0.1"
PV:pn-miracast-hal-raspberrypi4 = "1.0.1"
PR:pn-miracast-hal-raspberrypi4 = "r0"
PACKAGE_ARCH:pn-miracast-hal-raspberrypi4 = "${VENDOR_LAYER_EXTENSION}"

PV:pn-gpu-layer = "1.0.0"
PR:pn-gpu-layer = "r0"
PACKAGE_ARCH:pn-gpu-layer = "${VENDOR_LAYER_EXTENSION}"
