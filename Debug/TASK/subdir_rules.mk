################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
TASK/Task.obj: ../TASK/Task.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="C:/ti/TivaWare_C_Series-2.1.2.111" -g --gcc --define="ccs" --define=PART_LM4F120B2QR --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="TASK/Task.pp" --obj_directory="TASK" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

TASK/Task1.obj: ../TASK/Task1.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="C:/ti/TivaWare_C_Series-2.1.2.111" -g --gcc --define="ccs" --define=PART_LM4F120B2QR --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="TASK/Task1.pp" --obj_directory="TASK" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

TASK/Task2.obj: ../TASK/Task2.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="C:/ti/TivaWare_C_Series-2.1.2.111" -g --gcc --define="ccs" --define=PART_LM4F120B2QR --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="TASK/Task2.pp" --obj_directory="TASK" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

TASK/Task3.obj: ../TASK/Task3.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 --abi=eabi -me --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.2/include" --include_path="C:/ti/TivaWare_C_Series-2.1.2.111" -g --gcc --define="ccs" --define=PART_LM4F120B2QR --display_error_number --diag_warning=225 --diag_wrap=off --preproc_with_compile --preproc_dependency="TASK/Task3.pp" --obj_directory="TASK" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


