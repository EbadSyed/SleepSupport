################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1/platform/base/hal/plugin/sim-eeprom2/sim-eeprom2.c 

OBJS += \
./sim-eeprom2/EFR32/sim-eeprom2.o 

C_DEPS += \
./sim-eeprom2/EFR32/sim-eeprom2.d 


# Each subdirectory must supply rules for building sources it contributes
sim-eeprom2/EFR32/sim-eeprom2.o: C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1/platform/base/hal/plugin/sim-eeprom2/sim-eeprom2.c
	@echo 'Building file: $<'
	@echo 'Invoking: IAR C/C++ Compiler for ARM'
	iccarm "$<" -o "$@" --no_path_in_file_macros --separate_cluster_for_initialized_variables --no_wrap_diagnostics -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//app/builder/Z3ColorTempLightSoc_6" -I"C:\SiliconLabs\SimplicityStudio\v4\developer\sdks\gecko_sdk_suite\v1.1\app\builder\Z3ColorTempLightSoc_6\external-generated-files" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/bootloader/api" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/app/framework" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/stack" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/app/util" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//protocol/zigbee_5.10/app/framework/include" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/Device/SiliconLabs/EFR32MG12P/Include" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//hardware/kit/EFR32MG12_BRD4162A/config" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//hardware/kit/common/bsp" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/bootloader" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/radio/rail_lib/protocol/ieee802154" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/radio/rail_lib/protocol/ble" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/radio/rail_lib/common" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/radio/rail_lib/chip/efr32" -I"C:\SiliconLabs\SimplicityStudio\v4\developer\sdks\gecko_sdk_suite\v1.1\app\builder\Z3ColorTempLightSoc_6\level-control_inc" -I"C:\SiliconLabs\SimplicityStudio\v4\developer\sdks\gecko_sdk_suite\v1.1\app\builder\Z3ColorTempLightSoc_6\led-temp-pwm_inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1/" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base/hal" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base/hal//plugin" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base/hal//micro/cortexm3/efm32" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base/hal//micro/cortexm3/efm32/config" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base/hal//micro/cortexm3/efm32/efr32" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../CMSIS/Include" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/common/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/config" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/dmadrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/emcode" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/gpiointerrupt/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/rtcdrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/rtcdrv/test" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/sleep/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/spidrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/tempdrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/uartdrv/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emdrv/ustimer/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../emlib/inc" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../middleware/glib" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../middleware/glib/glib" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../radio/rail_lib/chip/efr32/rf/common/cortex" -I"C:/SiliconLabs/SimplicityStudio/v4/developer/sdks/gecko_sdk_suite/v1.1//platform/base//../radio/rail_lib/chip/efr32/rf/rfprotocol/ieee802154/cortex" -e --use_c++_inline --cpu Cortex-M4F --fpu VFPv4_sp --debug --dlib_config "C:/Program Files (x86)/IAR Systems/Embedded Workbench 7.5/arm/inc/c/DLib_Config_Normal.h" --endian little --cpu_mode thumb -Ohz --no_cse --no_unroll --no_inline --no_code_motion --no_tbaa --no_clustering '-DAPP_GECKO_INFO_PAGE_BTL=1' '-DATTRIBUTE_STORAGE_CONFIGURATION="app/builder/Z3ColorTempLightSoc_6/Z3ColorTempLightSoc_6_endpoint_config.h"' '-DBOARD_HEADER="app/builder/Z3ColorTempLightSoc_6/Z3ColorTempLightSoc_6_board.h"' '-DCORTEXM3_EFR32MG12P332F1024GL125=1' '-DCORTEXM3_EFR32MG12P332F1024GL125_MICRO=1' '-DGENERATED_TOKEN_HEADER="app/builder/Z3ColorTempLightSoc_6/Z3ColorTempLightSoc_6_tokens.h"' '-DPLATFORM_HEADER="platform/base/hal/micro/cortexm3/compiler/iar.h"' '-DZA_GENERATED_HEADER="app/builder/Z3ColorTempLightSoc_6/Z3ColorTempLightSoc_6.h"' '-DEFR32MG12P=1' '-DEFR32MG12P332F1024GL125=1' '-DEFR32_SERIES1_CONFIG2_MICRO=1' '-DBOARD_BRD4162A=1' '-DRTCDRV_USE_LFRCO=1' '-DEMBER_AF_API_EMBER_TYPES="stack/include/ember-types.h"' '-DEMBER_AF_API_DEBUG_PRINT="app/framework/util/print.h"' '-DEMBER_AF_API_AF_HEADER="app/framework/include/af.h"' '-DEMBER_AF_API_AF_SECURITY_HEADER="app/framework/security/af-security.h"' '-DEMBER_STACK_ZIGBEE=1' '-DHAL_CONFIG="app/hal-config/zigbee-config.h"' '-DEMLIB_USER_CONFIG=1' '-DUSE_SIMEE2=1' '-DAPPLICATION_TOKEN_HEADER="app/builder/Z3ColorTempLightSoc_6/afv2-token.h"' '-DAPPLICATION_MFG_TOKEN_HEADER="app/builder/Z3ColorTempLightSoc_6/afv2-mfg-token.h"' '-DHAL_ANTDIV_ENABLE=0' '-DHAL_PTA_ENABLE=0' '-DHAL_RHO_ENABLE=0' '-DHAL_SERIAL_RXWAKE_ENABLE=0' '-DHAL_SERIAL_VCOM_ENABLE=1' '-DHAL_SERIAL_VUART_ENABLE=0' '-DHAL_WDOG_ENABLE=1' '-DHAL_SERIAL_LEUART0_ENABLE=0' '-DHAL_LEUART0_FLOW_CONTROL=HAL_USART_FLOW_CONTROL_NONE' '-DHAL_SERIAL_LEUART1_ENABLE=0' '-DHAL_LEUART1_FLOW_CONTROL=HAL_USART_FLOW_CONTROL_NONE' '-DHAL_SERIAL_USART0_ENABLE=1' '-DHAL_USART0_FLOW_CONTROL=HAL_USART_FLOW_CONTROL_NONE' '-DHAL_SERIAL_USART1_ENABLE=0' '-DHAL_USART1_FLOW_CONTROL=HAL_USART_FLOW_CONTROL_NONE' '-DHAL_SERIAL_USART2_ENABLE=0' '-DHAL_USART2_FLOW_CONTROL=HAL_USART_FLOW_CONTROL_NONE' '-DHAL_SERIAL_USART3_ENABLE=0' '-DHAL_USART3_FLOW_CONTROL=HAL_USART_FLOW_CONTROL_NONE' '-DBSP_UARTNCP_USART_PORT=HAL_SERIAL_PORT_USART3' '-DCONFIGURATION_HEADER="app/framework/util/config.h"' '-DCORTEXM3=1' '-DCORTEXM3_EFM32_MICRO=1' '-DCORTEXM3_EFR32=1' '-DCORTEXM3_EFR32_MICRO=1' '-DPHY_RAIL=1' --diag_suppress Pa050 --diag_suppress Pa050 --dependencies=m sim-eeprom2/EFR32/sim-eeprom2.d
	@echo 'Finished building: $<'
	@echo ' '


