BOOTLOADER_SRC_STM32F1XX_PATH = $(BOOTLOADER_MODULE_PATH)/src/stm32f1xx

CSRC += $(call target_files,$(BOOTLOADER_SRC_STM32F1XX_PATH)/,*.c)

LDFLAGS += -T$(BOOTLOADER_SRC_STM32F1XX_PATH)/linker.ld
LINKER_DEPS += $(BOOTLOADER_SRC_STM32F1XX_PATH)/linker.ld

include $(BOOTLOADER_MODULE_PATH)/src/stm32/sources.mk
