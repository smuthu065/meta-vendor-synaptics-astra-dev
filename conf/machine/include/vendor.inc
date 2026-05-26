require conf/distro/include/repo-details.inc

include conf/include/rdke-vendor-bbmask.inc
include conf/include/vendor_pkg_versions.inc

#Enable esdk
DISTRO_FEATURES:append = " VENDOR"
DISTRO_FEATURES:append = " enable_esdk"

LAYER_EXTENSION = "-vendor"

VENDOR_LAYER_EXTENSION = "${MACHINE}${LAYER_EXTENSION}"
PACKAGE_EXTRA_ARCHS:append = " ${VENDOR_LAYER_EXTENSION}"

LICENSE_FLAGS_ACCEPTED += "commercial_gst-fluendo-mpegdemux \
                            commercial_${MLPREFIX}gst-ffmpeg \
                            ${@bb.utils.contains('DISTRO_FEATURES', 'gstreamer1_18','commercial_${MLPREFIX}ffmpeg','commercial_${MLPREFIX}libav',d)} \
                            commercial_libomxil \
                            commercial_gst-openmax \
                            commercial_mpg123 \
                            commercial_${MLPREFIX}x264 \
                            commercial_gstreamer1.0-omx \
                            commercial_${MLPREFIX}gstreamer1.0-libav"

# Override introduced to mark components or features to be moved into OSS layer.
OVERRIDES .= ":rdkv-oss"

#Android raspberrypi Kernel version
KERNEL_ARPI_MAJOR_VERSION = "6"
