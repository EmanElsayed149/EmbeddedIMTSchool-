################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
traffic-light.lss \

FLASH_IMAGE += \
traffic-light.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: traffic-light.elf secondary-outputs

# Tool invocations
traffic-light.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,traffic-light.map -mmcu=atmega32 -o "traffic-light.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

traffic-light.lss: traffic-light.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S traffic-light.elf  >"traffic-light.lss"
	@echo 'Finished building: $@'
	@echo ' '

traffic-light.hex: traffic-light.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex traffic-light.elf  "traffic-light.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: traffic-light.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 traffic-light.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) traffic-light.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
