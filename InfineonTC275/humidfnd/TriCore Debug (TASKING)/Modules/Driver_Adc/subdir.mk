################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../Modules/Driver_Adc/Driver_Adc.c" 

COMPILED_SRCS += \
"Modules/Driver_Adc/Driver_Adc.src" 

C_DEPS += \
"./Modules/Driver_Adc/Driver_Adc.d" 

OBJS += \
"Modules/Driver_Adc/Driver_Adc.o" 


# Each subdirectory must supply rules for building sources it contributes
"Modules/Driver_Adc/Driver_Adc.src":"../Modules/Driver_Adc/Driver_Adc.c" "Modules/Driver_Adc/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/Documents/BasicArduino/InfineonTC275/humidfnd/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"Modules/Driver_Adc/Driver_Adc.o":"Modules/Driver_Adc/Driver_Adc.src" "Modules/Driver_Adc/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-Modules-2f-Driver_Adc

clean-Modules-2f-Driver_Adc:
	-$(RM) ./Modules/Driver_Adc/Driver_Adc.d ./Modules/Driver_Adc/Driver_Adc.o ./Modules/Driver_Adc/Driver_Adc.src

.PHONY: clean-Modules-2f-Driver_Adc

