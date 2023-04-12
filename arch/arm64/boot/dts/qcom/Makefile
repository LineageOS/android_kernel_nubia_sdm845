dtb-$(CONFIG_ARCH_QCOM)	+= apq8016-sbc.dtb msm8916-mtp.dtb
dtb-$(CONFIG_ARCH_QCOM)	+= msm8996-mtp.dtb
dtb-$(CONFIG_ARCH_QCOM)	+= apq8096-db820c.dtb

ifeq ($(CONFIG_MACH_NUBIA_SDM845),y)
always  += sdm845-4k-panel-mtp-overlay.dtb \
           sda845-v2.1.dtb \
           sdm845-v2.dtb \
           sda845-v2.dtb \
           sdm845-v2.1.dtb \
           sdm845-v2-mtp.dtb \
           sdm845-mtp.dtb \
           sdm845.dtb \
           sda845.dtb

ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
	dtbo-$(CONFIG_ARCH_SDM845) += \
		sdm845-mtp-overlay.dtbo \
		sdm845-v2-mtp-overlay.dtbo \
		sdm845-v2.1-mtp-overlay.dtbo \
		sda845-mtp-overlay.dtbo \
		sda845-v2-mtp-overlay.dtbo \
		sda845-v2.1-mtp-overlay.dtbo

sdm845-mtp-overlay.dtbo-base := sdm845.dtb
sdm845-v2-mtp-overlay.dtbo-base := sdm845-v2.dtb
sdm845-v2.1-mtp-overlay.dtbo-base := sdm845-v2.1.dtb
sda845-mtp-overlay.dtbo-base := sda845.dtb
sda845-v2-mtp-overlay.dtbo-base := sda845-v2.dtb
sda845-v2.1-mtp-overlay.dtbo-base := sda845-v2.1.dtb
endif
else
always		:= $(dtb-y)
endif
subdir-y	:= $(dts-dirs)
clean-files	:= *.dtb
