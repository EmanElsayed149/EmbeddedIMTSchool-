################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DIO_pro.c \
../GIE_prg.c \
../LCD_prg.c \
../TIMER1_prg.c \
../TIMER_prg.c \
../main.c 

OBJS += \
./DIO_pro.o \
./GIE_prg.o \
./LCD_prg.o \
./TIMER1_prg.o \
./TIMER_prg.o \
./main.o 

C_DEPS += \
./DIO_pro.d \
./GIE_prg.d \
./LCD_prg.d \
./TIMER1_prg.d \
./TIMER_prg.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


