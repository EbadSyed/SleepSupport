################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include update-tc-link-key/subdir.mk
-include simple-main/subdir.mk
-include sim-eeprom2/EFR32/subdir.mk
-include scenes/subdir.mk
-include scan-dispatch/subdir.mk
-include reporting/subdir.mk
-include ota-storage-simple-eeprom/subdir.mk
-include ota-storage-simple/subdir.mk
-include ota-storage-common/subdir.mk
-include ota-common/subdir.mk
-include ota-client-policy/subdir.mk
-include ota-client/subdir.mk
-include ota-bootload/subdir.mk
-include on-off/subdir.mk
-include network-steering/subdir.mk
-include manufacturing-library-ota/subdir.mk
-include manufacturing-library-cli/subdir.mk
-include level-control/subdir.mk
-include led-temp-pwm/subdir.mk
-include idle-sleep/subdir.mk
-include identify/subdir.mk
-include hal-library/EFR32/subdir.mk
-include hal-config/EFR32/subdir.mk
-include groups-server/subdir.mk
-include find-and-bind-target/subdir.mk
-include external-generated-files/subdir.mk
-include end-device-support/subdir.mk
-include emlib/subdir.mk
-include emdrv/subdir.mk
-include ember-minimal-printf/subdir.mk
-include efr32/subdir.mk
-include eeprom/subdir.mk
-include debug-jtag/EFR32/subdir.mk
-include debug-basic-library/EFR32/subdir.mk
-include configuration-server/subdir.mk
-include color-control-server/subdir.mk
-include bulb-ui/subdir.mk
-include bulb-pwm-driver/EFR32/subdir.mk
-include bulb-pwm-cli/subdir.mk
-include basic/subdir.mk
-include antenna-stub/subdir.mk
-include address-table/subdir.mk
-include adc/EFR32/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(MSA_UPPER_DEPS)),)
-include $(MSA_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S79_DEPS)),)
-include $(S79_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(MSA_DEPS)),)
-include $(MSA_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(S79_UPPER_DEPS)),)
-include $(S79_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Z3ColorTempLightSoc_6.out

# Tool invocations
Z3ColorTempLightSoc_6.out: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: IAR Linker for ARM'
	ilinkarm $(OBJS) $(USER_OBJS) -o "Z3ColorTempLightSoc_6.out" --config "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base/hal/micro/cortexm3/efm32/iar-cfg.icf" --config_def APP_GECKO_INFO_PAGE_BTL=1 --config_def FLASH_SIZE=1048576 --config_def RAM_SIZE=262144 --no_wrap_diagnostics "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/cbke-library-dsa-sign-stub-cortexm3-iar-efr32mg12p-rail/cbke-library-dsa-sign-stub.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/hal-library-cortexm3-iar-efr32mg12p-rail/hal-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/sim-eeprom2-library-cortexm3-iar-efr32mg12p-rail/sim-eeprom2-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/sim-eeprom2-1to2-upgrade-library-cortexm3-iar-efr32mg12p-rail/sim-eeprom2-1to2-upgrade-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/cbke-283k1-stub-library-cortexm3-iar-efr32mg12p-rail/cbke-283k1-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/end-device-bind-stub-library-cortexm3-iar-efr32mg12p-rail/end-device-bind-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/debug-basic-library-cortexm3-iar-efr32mg12p-rail/debug-basic-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/cbke-library-dsa-verify-stub-cortexm3-iar-efr32mg12p-rail/cbke-library-dsa-verify-stub.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/security-library-link-keys-stub-cortexm3-iar-efr32mg12p-rail/security-library-link-keys-stub.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/binding-table-library-cortexm3-iar-efr32mg12p-rail/binding-table-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/gp-stub-library-cortexm3-iar-efr32mg12p-rail/gp-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/rf4ce-stack-stub-library-cortexm3-iar-efr32mg12p-rail/rf4ce-stack-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/zigbee-pro-leaf-stack-cortexm3-iar-efr32mg12p-rail/zigbee-pro-leaf-stack.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/install-code-library-cortexm3-iar-efr32mg12p-rail/install-code-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/packet-validate-library-cortexm3-iar-efr32mg12p-rail/packet-validate-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/radio/rail_lib/autogen/librail_release/librail_efr32xg12_iar_release.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/cbke-stub-library-cortexm3-iar-efr32mg12p-rail/cbke-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/zll-stub-library-cortexm3-iar-efr32mg12p-rail/zll-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/security-library-core-cortexm3-iar-efr32mg12p-rail/security-library-core.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/cbke-library-dsa-verify-283k1-stub-cortexm3-iar-efr32mg12p-rail/cbke-library-dsa-verify-283k1-stub.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/enhanced-beacon-request-stub-library-cortexm3-iar-efr32mg12p-rail/enhanced-beacon-request-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/debug-extended-stub-library-cortexm3-iar-efr32mg12p-rail/debug-extended-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/cbke-163k1-stub-library-cortexm3-iar-efr32mg12p-rail/cbke-163k1-stub-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/mfglib-library-cortexm3-iar-efr32mg12p-rail/mfglib-library.a" "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/build/multi-network-stub-library-cortexm3-iar-efr32mg12p-rail/multi-network-stub-library.a" --entry halEntryPoint --map "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1/app/builder/Z3ColorTempLightSoc_6/IAR ARM - Default/Z3ColorTempLightSoc_6.map" --log_file "C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1/app/builder/Z3ColorTempLightSoc_6/IAR ARM - Default/Z3ColorTempLightSoc_6.log" --log initialization,modules,sections,veneers --diag_suppress=Lp012 --diag_suppress=Lp012 --redirect _Printf=_PrintfSmall --redirect _Scanf=_ScanfFull  
	ielftool --srec --verbose "Z3ColorTempLightSoc_6.out" "Z3ColorTempLightSoc_6.s37"  
	ielftool --ihex --verbose "Z3ColorTempLightSoc_6.out" "Z3ColorTempLightSoc_6.hex"  
	ielftool --bin --verbose "Z3ColorTempLightSoc_6.out" "Z3ColorTempLightSoc_6.bin"
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(ASM_UPPER_DEPS)$(MSA_UPPER_DEPS)$(EXECUTABLES)$(OBJS)$(ASM_DEPS)$(S79_DEPS)$(S_DEPS)$(S_UPPER_DEPS)$(MSA_DEPS)$(C_DEPS)$(S79_UPPER_DEPS) Z3ColorTempLightSoc_6.out
	-@echo ' '

post-build:
	-cmd //c 'C:\SILICO~1\SIMPLI~1\v4\DEVELO~1\sdks\GECKO_~1\v1.1/app/builder/Z3ColorTempLightSoc_6/Z3ColorTempLightSoc_6-postbuild.bat' 'Z3ColorTempLightSoc_6' 'C:\SiliconLabs\SimplicityStudio\v4\developer\sdks\gecko_sdk_suite\v1.1\app\builder\Z3ColorTempLightSoc_6' 'C:/Program Files (x86)/IAR Systems/Embedded Workbench 7.5/arm'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY: post-build

-include ../makefile.targets
