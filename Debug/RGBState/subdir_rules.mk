################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
RGBState/RGBState.obj: ../RGBState/RGBState.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="C:/ti/TivaWare_C_Series-2.1.2.111" -g --gcc --define="ccs" --define=PART_LM4F120B2QR --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="RGBState/RGBState.pp" --obj_directory="RGBState" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


