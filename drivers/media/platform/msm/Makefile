#
# Makefile for the qti specific video device drivers
# based on V4L2.
#
obj-y += adsp_shmem/
obj-$(CONFIG_MSM_VIDC_V4L2) += vidc/
obj-$(CONFIG_MSM_VIDC_3X_V4L2) += vidc_3x/
obj-y += sde/
ifeq ($(CONFIG_SPECTRA2_CAMERA), y)
obj-$(CONFIG_SPECTRA_CAMERA) += camera_v3/
else
ifneq ($(CONFIG_MACH_NUBIA_SDM845),y)
    obj-$(CONFIG_SPECTRA_CAMERA) += camera/
else
    obj-$(CONFIG_SPECTRA_CAMERA) += camera_nubia/
endif
endif
obj-$(CONFIG_MSMB_CAMERA) += camera_v2/
obj-y += broadcast/
obj-$(CONFIG_DVB_MPQ) += dvb/
obj-$(CONFIG_QCA402X) += qca402/
