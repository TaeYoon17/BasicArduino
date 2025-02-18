################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../Modules/Driver_DHT11/Driver_DHT11.c" 

COMPILED_SRCS += \
"Modules/Driver_DHT11/Driver_DHT11.src" 

C_DEPS += \
"./Modules/Driver_DHT11/Driver_DHT11.d" 

OBJS += \
"Modules/Driver_DHT11/Driver_DHT11.o" 


# Each subdirectory must supply rules for building sources it contributes
"Modules/Driver_DHT11/Driver_DHT11.src":"../Modules/Driver_DHT11/Driver_DHT11.c" "Modules/Driver_DHT11/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/Documents/BasicArduino/InfineonTC275/humidfnd/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"Modules/Driver_DHT11/Driver_DHT11.o":"Modules/Driver_DHT11/Driver_DHT11.src" "Modules/Driver_DHT11/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-Modules-2f-Driver_DHT11

clean-Modules-2f-Driver_DHT11:
	-$(RM) ./Modules/Driver_DHT11/Driver_DHT11.d ./Modules/Driver_DHT11/Driver_DHT11.o ./Modules/Driver_DHT11/Driver_DHT11.src

.PHONY: clean-Modules-2f-Driver_DHT11

