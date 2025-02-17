################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../SwitchERU/ERU_Switch.c" 

COMPILED_SRCS += \
"SwitchERU/ERU_Switch.src" 

C_DEPS += \
"./SwitchERU/ERU_Switch.d" 

OBJS += \
"SwitchERU/ERU_Switch.o" 


# Each subdirectory must supply rules for building sources it contributes
"SwitchERU/ERU_Switch.src":"../SwitchERU/ERU_Switch.c" "SwitchERU/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/USER/Documents/BasicArduino/InfineonTC275/fnd_spi/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"SwitchERU/ERU_Switch.o":"SwitchERU/ERU_Switch.src" "SwitchERU/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-SwitchERU

clean-SwitchERU:
	-$(RM) ./SwitchERU/ERU_Switch.d ./SwitchERU/ERU_Switch.o ./SwitchERU/ERU_Switch.src

.PHONY: clean-SwitchERU

