################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Source_Jakub/main_app.c \
../Core/Source_Jakub/printMsg.c \
../Core/Source_Jakub/printMsgTask.c 

OBJS += \
./Core/Source_Jakub/main_app.o \
./Core/Source_Jakub/printMsg.o \
./Core/Source_Jakub/printMsgTask.o 

C_DEPS += \
./Core/Source_Jakub/main_app.d \
./Core/Source_Jakub/printMsg.d \
./Core/Source_Jakub/printMsgTask.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Source_Jakub/%.o Core/Source_Jakub/%.su Core/Source_Jakub/%.cyclo: ../Core/Source_Jakub/%.c Core/Source_Jakub/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32H723xx -c -I../Core/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc -I../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I"C:/Users/Jakub/Desktop/agd/kolo naukowe/stmkiii/embedded/Core/Include_Jakub" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Source_Jakub

clean-Core-2f-Source_Jakub:
	-$(RM) ./Core/Source_Jakub/main_app.cyclo ./Core/Source_Jakub/main_app.d ./Core/Source_Jakub/main_app.o ./Core/Source_Jakub/main_app.su ./Core/Source_Jakub/printMsg.cyclo ./Core/Source_Jakub/printMsg.d ./Core/Source_Jakub/printMsg.o ./Core/Source_Jakub/printMsg.su ./Core/Source_Jakub/printMsgTask.cyclo ./Core/Source_Jakub/printMsgTask.d ./Core/Source_Jakub/printMsgTask.o ./Core/Source_Jakub/printMsgTask.su

.PHONY: clean-Core-2f-Source_Jakub

