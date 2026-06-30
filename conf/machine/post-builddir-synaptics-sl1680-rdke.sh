#!/usr/bin/env bash

# Post-builddir hook for synaptics-sl1680-rdke.
# RDKE already executes oe-init-build-env; apply Synaptics-specific defaults.

_RDKE_BUILDDIR="${BUILDDIR:-$PWD}"
_LOCAL_CONF="${_RDKE_BUILDDIR}/conf/local.conf"
_BBLAYERS_CONF="${_RDKE_BUILDDIR}/conf/bblayers.conf"
_SYNA_EULA_STR="Synaptics-EULA"
_MACHINE_NAME="${1:-${MACHINE:-}}"
_DISPLAY_SERVER_VALUE="${DISPLAY_SERVER:-}"
_OOBE_VALUE="${OOBE:-}"
_HOOK_FILE_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
_WS_ROOT=$( cd -- "${_HOOK_FILE_DIR}/../../../../.." &> /dev/null && pwd )
_META_OE_DIR="${_WS_ROOT}/rdke/common/meta-openembedded"
_XFCE_LAYER_DIR="${_META_OE_DIR}/meta-xfce"
_GNOME_LAYER_DIR="${_META_OE_DIR}/meta-gnome"

if [ ! -f "${_LOCAL_CONF}" ]; then
	echo "WARNING: local.conf not found at ${_LOCAL_CONF}"
	unset _RDKE_BUILDDIR _LOCAL_CONF _BBLAYERS_CONF _SYNA_EULA_STR _MACHINE_NAME _DISPLAY_SERVER_VALUE _OOBE_VALUE _HOOK_FILE_DIR _WS_ROOT _META_OE_DIR _XFCE_LAYER_DIR _GNOME_LAYER_DIR
	return 0
fi

# Ensure base license flags exist.
if ! grep -q '^LICENSE_FLAGS_ACCEPTED' "${_LOCAL_CONF}"; then
	echo 'LICENSE_FLAGS_ACCEPTED = "commercial"' >> "${_LOCAL_CONF}"
fi

# Ensure Synaptics EULA token is included exactly once.
if ! grep -q "${_SYNA_EULA_STR}" "${_LOCAL_CONF}"; then
	_CURRENT_LICENSE_FLAGS=$(grep '^LICENSE_FLAGS_ACCEPTED' "${_LOCAL_CONF}" | tail -n 1)
	if [ -n "${_CURRENT_LICENSE_FLAGS}" ]; then
		_ESCAPED_CURRENT=$(printf '%s\n' "${_CURRENT_LICENSE_FLAGS}" | sed 's/[\/&]/\\&/g')
		_UPDATED_LICENSE_FLAGS=$(printf '%s\n' "${_CURRENT_LICENSE_FLAGS}" | sed "s/\"$/ ${_SYNA_EULA_STR}\"/")
		_ESCAPED_UPDATED=$(printf '%s\n' "${_UPDATED_LICENSE_FLAGS}" | sed 's/[\/&]/\\&/g')
		sed -i "s/^${_ESCAPED_CURRENT}$/${_ESCAPED_UPDATED}/" "${_LOCAL_CONF}"
	fi
fi

# Keep display-server settings idempotent between setup runs.
sed -i '/DISTRO_FEATURES:append = " x11"/d;/DISTRO_FEATURES:append = " wayland"/d;/DISTRO_FEATURES:remove = " wayland"/d;/DISTRO_FEATURES:remove = " x11"/d;/DISTRO_FEATURES_NATIVESDK:remove = "x11"/d;/XSERVER:append = " xf86-video-modesetting"/d' "${_LOCAL_CONF}"

if [ -n "${_DISPLAY_SERVER_VALUE}" ]; then
	if [ "is${_DISPLAY_SERVER_VALUE}" = "isx11" ]; then
		echo 'DISTRO_FEATURES:append = " x11"' >> "${_LOCAL_CONF}"
		echo 'XSERVER:append = " xf86-video-modesetting"' >> "${_LOCAL_CONF}"
		echo 'DISTRO_FEATURES:remove = " wayland"' >> "${_LOCAL_CONF}"

		# For sl1680, include x11 UI layers if present.
		if [ "is${_MACHINE_NAME}" = "issynaptics-sl1680-rdke" ] && [ -f "${_BBLAYERS_CONF}" ]; then
			if [ -d "${_XFCE_LAYER_DIR}" ] && ! grep -q "${_XFCE_LAYER_DIR}" "${_BBLAYERS_CONF}"; then
				echo "BBLAYERS += \" ${_XFCE_LAYER_DIR} \"" >> "${_BBLAYERS_CONF}"
			fi
			if [ -d "${_GNOME_LAYER_DIR}" ] && ! grep -q "${_GNOME_LAYER_DIR}" "${_BBLAYERS_CONF}"; then
				echo "BBLAYERS += \" ${_GNOME_LAYER_DIR} \"" >> "${_BBLAYERS_CONF}"
			fi
		fi
	else
		echo 'DISTRO_FEATURES:append = " wayland"' >> "${_LOCAL_CONF}"
		echo 'DISTRO_FEATURES:remove = " x11"' >> "${_LOCAL_CONF}"
		echo 'DISTRO_FEATURES_NATIVESDK:remove = "x11"' >> "${_LOCAL_CONF}"
	fi
else
	# Default display stack for RDKE Synaptics flow.
	echo 'DISTRO_FEATURES:append = " wayland"' >> "${_LOCAL_CONF}"
	echo 'DISTRO_FEATURES:remove = " x11"' >> "${_LOCAL_CONF}"
	echo 'DISTRO_FEATURES_NATIVESDK:remove = "x11"' >> "${_LOCAL_CONF}"
fi

# Enable virtualization feature when OOBE is enabled for supported machines.
if [ "is${_OOBE_VALUE}" = "isenabled" ]; then
	if [ "is${_MACHINE_NAME}" = "issynaptics-sl1680-rdke" ]; then
		if ! grep -q 'DISTRO_FEATURES:append = " virtualization"' "${_LOCAL_CONF}"; then
			echo 'DISTRO_FEATURES:append = " virtualization"' >> "${_LOCAL_CONF}"
		fi
	fi
fi

unset _RDKE_BUILDDIR _LOCAL_CONF _BBLAYERS_CONF _SYNA_EULA_STR _MACHINE_NAME _DISPLAY_SERVER_VALUE _OOBE_VALUE _HOOK_FILE_DIR _WS_ROOT _META_OE_DIR _XFCE_LAYER_DIR _GNOME_LAYER_DIR _CURRENT_LICENSE_FLAGS _ESCAPED_CURRENT _UPDATED_LICENSE_FLAGS _ESCAPED_UPDATED
