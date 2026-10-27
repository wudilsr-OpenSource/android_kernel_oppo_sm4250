ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
        dtbo-$(CONFIG_ARCH_BENGAL) += \
                bengal-soda-20021-overlay.dtbo

bengal-soda-20021-overlay.dtbo-base := bengal-soda.dtb

endif

always		:= $(dtb-y)
subdir-y	:= $(dts-dirs)
clean-files    := *.dtb *.dtbo
