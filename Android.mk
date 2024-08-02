
#
# Copyright (C) 2023 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

LOCAL_PATH := $(call my-dir)

ifeq ($(TARGET_DEVICE),seur)
include $(call all-makefiles-under,$(LOCAL_PATH))
include $(CLEAR_VARS)

VULKAN_SYMLINKS := \
        $(TARGET_OUT_VENDOR)/lib/hw/vulkan.mt6781.so \
	$(TARGET_OUT_VENDOR)/lib64/hw/vulkan.mt6781.so
	
$(VULKAN_SYMLINKS): $(LOCAL_INSTALLED_MODULE)
	$(hide) echo "Linking vulkan libs"
	@ln -sf /vendor/lib/egl/libGLES_mali.so $(TARGET_OUT_VENDOR)/lib/hw/vulkan.$(TARGET_BOARD_PLATFORM).so
	@ln -sf /vendor/lib64/egl/libGLES_mali.so $(TARGET_OUT_VENDOR)/lib64/hw/vulkan.$(TARGET_BOARD_PLATFORM).so

ALL_DEFAULT_INSTALLED_MODULES += $(VULKAN_SYMLINKS)

endif
