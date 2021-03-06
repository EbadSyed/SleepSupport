// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AF_ENDPOINT_CONFIG__
#define __AF_ENDPOINT_CONFIG__


// Fixed number of defined endpoints
#define FIXED_ENDPOINT_COUNT (1)


// Generated defaults
#if BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
11,'S','i','l','i','c','o','n','L','a','b','s',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 /* 0,Default value: Basic,manufacturer name */, \
16,'Z','3','C','o','l','o','r','T','e','m','p','L','i','g','h','t',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 /* 33,Default value: Basic,model identifier */, \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF /* 66,Default value: Over the Air Bootloading,OTA Upgrade Server ID */, \
0xFF, 0xFF, 0xFF, 0xFF /* 74,Default value: Over the Air Bootloading,Offset (address) into the file */, \
0x00, 0x00, 0x00, 0x30 /* 78,Default value: Over the Air Bootloading,OTA Current File Version */, \
0x00, 0x00, 0x00, 0x01 /* 82,Default value: Over the Air Bootloading,OTA Downloaded File Version */, \
  }
#else // ! BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
11,'S','i','l','i','c','o','n','L','a','b','s',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 /* 0,Default value: Basic,manufacturer name */, \
16,'Z','3','C','o','l','o','r','T','e','m','p','L','i','g','h','t',0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 /* 33,Default value: Basic,model identifier */, \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF /* 66,Default value: Over the Air Bootloading,OTA Upgrade Server ID */, \
0xFF, 0xFF, 0xFF, 0xFF /* 74,Default value: Over the Air Bootloading,Offset (address) into the file */, \
0x30, 0x00, 0x00, 0x00 /* 78,Default value: Over the Air Bootloading,OTA Current File Version */, \
0x01, 0x00, 0x00, 0x00 /* 82,Default value: Over the Air Bootloading,OTA Downloaded File Version */, \
  }
#endif // BIGENDIAN_CPU




// Generated attributes
#define GENERATED_ATTRIBUTES { \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x02 } }, /* 0 / Basic / ZCL version*/\
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 1 / Basic / application version*/\
    { 0x0002, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 2 / Basic / stack version*/\
    { 0x0003, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 3 / Basic / hardware version*/\
    { 0x0004, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(generatedDefaults[0]) } }, /* 4 / Basic / manufacturer name*/\
    { 0x0005, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(generatedDefaults[33]) } }, /* 5 / Basic / model identifier*/\
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 6 / Basic / power source*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 7 / Basic / cluster revision*/\
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000 } }, /* 8 / Identify / identify time*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 9 / Identify / cluster revision*/\
    { 0x0000, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 10 / Groups / name support*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 11 / Groups / cluster revision*/\
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 12 / Scenes / scene count*/\
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 13 / Scenes / current scene*/\
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 14 / Scenes / current group*/\
    { 0x0003, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 15 / Scenes / scene valid*/\
    { 0x0004, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 16 / Scenes / name support*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 17 / Scenes / cluster revision*/\
    { 0x0000, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0x01 } }, /* 18 / On/off / on/off*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 19 / On/off / cluster revision*/\
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0xfe } }, /* 20 / Level Control / current level*/\
    { 0x000F, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x00 } }, /* 21 / Level Control / options*/\
    { 0x0011, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE|ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0xFF } }, /* 22 / Level Control / on level*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 23 / Level Control / cluster revision*/\
    { 0x0000, ZCL_IEEE_ADDRESS_ATTRIBUTE_TYPE, 8, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[66]) } }, /* 24 / Over the Air Bootloading / OTA Upgrade Server ID*/\
    { 0x0001, ZCL_INT32U_ATTRIBUTE_TYPE, 4, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[74]) } }, /* 25 / Over the Air Bootloading / Offset (address) into the file*/\
    { 0x0002, ZCL_INT32U_ATTRIBUTE_TYPE, 4, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[78]) } }, /* 26 / Over the Air Bootloading / OTA Current File Version*/\
    { 0x0004, ZCL_INT32U_ATTRIBUTE_TYPE, 4, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[82]) } }, /* 27 / Over the Air Bootloading / OTA Downloaded File Version*/\
    { 0x0006, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x00 } }, /* 28 / Over the Air Bootloading / OTA Upgrade Status*/\
    { 0x0007, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x1002 } }, /* 29 / Over the Air Bootloading / Manufacturer ID*/\
    { 0x0008, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0xa003 } }, /* 30 / Over the Air Bootloading / Image Type ID*/\
    { 0x0009, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0000UL } }, /* 31 / Over the Air Bootloading / Minimum Block Request Period*/\
    { 0x000A, ZCL_INT32U_ATTRIBUTE_TYPE, 4, (ATTRIBUTE_MASK_CLIENT), { NULL } }, /* 32 / Over the Air Bootloading / Image Stamp*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 33 / Over the Air Bootloading / cluster revision*/\
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 34 / Color Control / remaining time*/\
    { 0x0003, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x616B } }, /* 35 / Color Control / current x*/\
    { 0x0004, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x607D } }, /* 36 / Color Control / current y*/\
    { 0x0007, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)278 } }, /* 37 / Color Control / color temperature*/\
    { 0x0008, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x02 } }, /* 38 / Color Control / color mode*/\
    { 0x000F, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x00 } }, /* 39 / Color Control / color control options*/\
    { 0x0010, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0 } }, /* 40 / Color Control / number of primaries*/\
    { 0x4001, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)2 } }, /* 41 / Color Control / enhanced color mode*/\
    { 0x400A, ZCL_BITMAP16_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0010 } }, /* 42 / Color Control / color capabilities*/\
    { 0x400B, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)200 } }, /* 43 / Color Control / color temp physical min*/\
    { 0x400C, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)454 } }, /* 44 / Color Control / color temp physical max*/\
    { 0x400D, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 45 / Color Control / couple color temp to level min-mireds*/\
    { 0x400E, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 46 / Color Control / start up color temperature mireds*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 47 / Color Control / cluster revision*/\
    { 0x0000, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 48 / Temperature Measurement / measured value*/\
    { 0x0001, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000L } }, /* 49 / Temperature Measurement / min measured value*/\
    { 0x0002, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000L } }, /* 50 / Temperature Measurement / max measured value*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 51 / Temperature Measurement / cluster revision*/\
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 52 / Relative Humidity Measurement / measured value*/\
    { 0x0001, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 53 / Relative Humidity Measurement / min measured value*/\
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 54 / Relative Humidity Measurement / max measured value*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 55 / Relative Humidity Measurement / cluster revision*/\
    { 0x011B, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 56 / Diagnostics / average mac retry per aps message sent*/\
    { 0x011C, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x0000 } }, /* 57 / Diagnostics / last message lqi*/\
    { 0x011D, ZCL_INT8S_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x0000 } }, /* 58 / Diagnostics / last message rssi*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 59 / Diagnostics / cluster revision*/\
    { 0x0000, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 60 / Configuration Cluster / Prevents OTA writing of tokens.*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 61 / Configuration Cluster / cluster revision*/\
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x00 } }, /* 62 / MFGLIB Cluster / Number of packets received while in MFGLIB mode.*/\
    { 0x0001, ZCL_INT8S_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 63 / MFGLIB Cluster / RSSI of the first received packet.*/\
    { 0x0002, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 64 / MFGLIB Cluster / LQI of the first received packet.*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 65 / MFGLIB Cluster / cluster revision*/\
  }


// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS \
PGM EmberAfGenericClusterFunction emberAfFuncArrayIdentifyClusterServer[] = { (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerInitCallback,(EmberAfGenericClusterFunction)emberAfIdentifyClusterServerAttributeChangedCallback}; \
PGM EmberAfGenericClusterFunction emberAfFuncArrayGroupsClusterServer[] = { (EmberAfGenericClusterFunction)emberAfGroupsClusterServerInitCallback}; \
PGM EmberAfGenericClusterFunction emberAfFuncArrayScenesClusterServer[] = { (EmberAfGenericClusterFunction)emberAfScenesClusterServerInitCallback}; \
PGM EmberAfGenericClusterFunction emberAfFuncArrayOnOffClusterServer[] = { (EmberAfGenericClusterFunction)emberAfOnOffClusterServerAttributeChangedCallback}; \
PGM EmberAfGenericClusterFunction emberAfFuncArrayLevelControlClusterServer[] = { (EmberAfGenericClusterFunction)emberAfLevelControlClusterServerAttributeChangedCallback}; \
PGM EmberAfGenericClusterFunction emberAfFuncArrayOtaBootloadClusterClient[] = { (EmberAfGenericClusterFunction)emberAfOtaBootloadClusterClientInitCallback,(EmberAfGenericClusterFunction)emberAfOtaBootloadClusterClientDefaultResponseCallback}; \
PGM EmberAfGenericClusterFunction emberAfFuncArrayColorControlClusterServer[] = { (EmberAfGenericClusterFunction)emberAfColorControlClusterServerAttributeChangedCallback}; \
PGM EmberAfGenericClusterFunction emberAfFuncArrayOtaConfigurationClusterServer[] = { (EmberAfGenericClusterFunction)emberAfOtaConfigurationClusterServerInitCallback}; \


// Clusters defitions
#define GENERATED_CLUSTERS { \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 8, 0, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[8]), 2, 4, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIdentifyClusterServer, },    \
    { 0x0004, (EmberAfAttributeMetadata*)&(generatedAttributes[10]), 2, 3, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayGroupsClusterServer, },    \
    { 0x0005, (EmberAfAttributeMetadata*)&(generatedAttributes[12]), 6, 8, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayScenesClusterServer, },    \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[18]), 2, 3, (CLUSTER_MASK_SERVER| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayOnOffClusterServer, },    \
    { 0x0008, (EmberAfAttributeMetadata*)&(generatedAttributes[20]), 4, 5, (CLUSTER_MASK_SERVER| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayLevelControlClusterServer, },    \
    { 0x0019, (EmberAfAttributeMetadata*)&(generatedAttributes[24]), 10, 33, (CLUSTER_MASK_CLIENT| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION), emberAfFuncArrayOtaBootloadClusterClient, },    \
    { 0x0300, (EmberAfAttributeMetadata*)&(generatedAttributes[34]), 14, 24, (CLUSTER_MASK_SERVER| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayColorControlClusterServer, },    \
    { 0x0402, (EmberAfAttributeMetadata*)&(generatedAttributes[48]), 4, 8, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0405, (EmberAfAttributeMetadata*)&(generatedAttributes[52]), 4, 8, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0B05, (EmberAfAttributeMetadata*)&(generatedAttributes[56]), 4, 6, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0xFC01, (EmberAfAttributeMetadata*)&(generatedAttributes[60]), 2, 3, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayOtaConfigurationClusterServer, },    \
    { 0xFC02, (EmberAfAttributeMetadata*)&(generatedAttributes[62]), 4, 6, (CLUSTER_MASK_SERVER), NULL,  },    \
  }


// Endpoint types
#define GENERATED_ENDPOINT_TYPES {        \
    { (EmberAfCluster*)&(generatedClusters[0]), 13, 111 }, \
  }


// Networks
#define EM_AF_GENERATED_NETWORK_TYPES { \
  EM_AF_NETWORK_TYPE_ZIGBEE_PRO, /* Primary */ \
}
#define EM_AF_GENERATED_ZIGBEE_PRO_NETWORKS { \
  { \
    /* Primary */ \
    ZA_SLEEPY_END_DEVICE, \
    EMBER_AF_SECURITY_PROFILE_Z3, \
  }, \
}
#define EM_AF_GENERATED_NETWORK_STRINGS  \
  "Primary (pro)", \


// Cluster manufacturer codes
#define GENERATED_CLUSTER_MANUFACTURER_CODES {      \
{0x000B, 0x1002}, \
{0x000C, 0x1002}, \
  }
#define GENERATED_CLUSTER_MANUFACTURER_CODE_COUNT (2)

// Attribute manufacturer codes
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODE_COUNT (0)


// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST (33)
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (73)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 111

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 260 }

// Array of profile ids
#define FIXED_DEVICE_IDS { 258 }

// Array of profile ids
#define FIXED_DEVICE_VERSIONS { 0 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0 }


// Code used to configure the cluster event mechanism
#define EMBER_AF_GENERATED_EVENT_CODE \
  EmberEventControl emberAfIdentifyClusterServerTickCallbackControl1; \
  EmberEventControl emberAfLevelControlClusterServerTickCallbackControl1; \
  EmberEventControl emberAfOtaBootloadClusterClientTickCallbackControl1; \
  extern EmberEventControl emberAfPluginBulbPwmDriverBlinkEventControl; \
  extern EmberEventControl emberAfPluginBulbPwmDriverStatusEventControl; \
  extern EmberEventControl emberAfPluginBulbUiBulbUiRebootEventControl; \
  extern EmberEventControl emberAfPluginBulbUiRejoinEventControl; \
  extern EmberEventControl emberAfPluginColorControlServerHueSatTransitionEventControl; \
  extern EmberEventControl emberAfPluginColorControlServerTempTransitionEventControl; \
  extern EmberEventControl emberAfPluginColorControlServerXyTransitionEventControl; \
  extern EmberEventControl emberAfPluginHumiditySi7021InitEventControl; \
  extern EmberEventControl emberAfPluginHumiditySi7021ReadEventControl; \
  extern EmberEventControl emberAfPluginManufacturingLibraryOtaKickoffEventControl; \
  extern EmberEventControl emberAfPluginManufacturingLibraryOtaTimeoutEventControl; \
  extern EmberEventControl emberAfPluginNetworkSteeringFinishSteeringEventControl; \
  extern EmberEventControl emberAfPluginOtaStorageSimpleEepromPageEraseEventControl; \
  extern EmberEventControl emberAfPluginRelativeHumidityMeasurementServerReadEventControl; \
  extern EmberEventControl emberAfPluginReportingTickEventControl; \
  extern EmberEventControl emberAfPluginTemperatureMeasurementServerReadEventControl; \
  extern EmberEventControl emberAfPluginTemperatureSi7021InitEventControl; \
  extern EmberEventControl emberAfPluginTemperatureSi7021ReadEventControl; \
  extern void emberAfPluginBulbPwmDriverBlinkEventHandler(void); \
  extern void emberAfPluginBulbPwmDriverStatusEventHandler(void); \
  extern void emberAfPluginBulbUiBulbUiRebootEventHandler(void); \
  extern void emberAfPluginBulbUiRejoinEventHandler(void); \
  extern void emberAfPluginColorControlServerHueSatTransitionEventHandler(void); \
  extern void emberAfPluginColorControlServerTempTransitionEventHandler(void); \
  extern void emberAfPluginColorControlServerXyTransitionEventHandler(void); \
  extern void emberAfPluginHumiditySi7021InitEventHandler(void); \
  extern void emberAfPluginHumiditySi7021ReadEventHandler(void); \
  extern void emberAfPluginManufacturingLibraryOtaKickoffEventHandler(void); \
  extern void emberAfPluginManufacturingLibraryOtaTimeoutEventHandler(void); \
  extern void emberAfPluginNetworkSteeringFinishSteeringEventHandler(void); \
  extern void emberAfPluginOtaStorageSimpleEepromPageEraseEventHandler(void); \
  extern void emberAfPluginRelativeHumidityMeasurementServerReadEventHandler(void); \
  extern void emberAfPluginReportingTickEventHandler(void); \
  extern void emberAfPluginTemperatureMeasurementServerReadEventHandler(void); \
  extern void emberAfPluginTemperatureSi7021InitEventHandler(void); \
  extern void emberAfPluginTemperatureSi7021ReadEventHandler(void); \
  static void networkEventWrapper(EmberEventControl *control, EmberAfNetworkEventHandler handler, uint8_t networkIndex) \
  { \
    emberAfPushNetworkIndex(networkIndex); \
    emberEventControlSetInactive(*control); \
    (*handler)(); \
    emberAfPopNetworkIndex(); \
  } \
  EmberEventControl emberAfPluginEndDeviceSupportMoveNetworkEventControls[1]; \
  extern void emberAfPluginEndDeviceSupportMoveNetworkEventHandler(void); \
  void emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventHandler, 0); } \
  EmberEventControl emberAfPluginEndDeviceSupportPollingNetworkEventControls[1]; \
  extern void emberAfPluginEndDeviceSupportPollingNetworkEventHandler(void); \
  void emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventHandler, 0); } \
  static void clusterTickWrapper(EmberEventControl *control, EmberAfTickFunction callback, uint8_t endpoint) \
  { \
    emberAfPushEndpointNetworkIndex(endpoint); \
    emberEventControlSetInactive(*control); \
    (*callback)(endpoint); \
    emberAfPopNetworkIndex(); \
  } \
  void emberAfIdentifyClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallback, 1); } \
  void emberAfLevelControlClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfLevelControlClusterServerTickCallbackControl1, emberAfLevelControlClusterServerTickCallback, 1); } \
  void emberAfOtaBootloadClusterClientTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfOtaBootloadClusterClientTickCallbackControl1, emberAfOtaBootloadClusterClientTickCallback, 1); } \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS   \
  { &emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallbackWrapperFunction1 }, \
  { &emberAfLevelControlClusterServerTickCallbackControl1, emberAfLevelControlClusterServerTickCallbackWrapperFunction1 }, \
  { &emberAfOtaBootloadClusterClientTickCallbackControl1, emberAfOtaBootloadClusterClientTickCallbackWrapperFunction1 }, \
  { &emberAfPluginBulbPwmDriverBlinkEventControl, emberAfPluginBulbPwmDriverBlinkEventHandler }, \
  { &emberAfPluginBulbPwmDriverStatusEventControl, emberAfPluginBulbPwmDriverStatusEventHandler }, \
  { &emberAfPluginBulbUiBulbUiRebootEventControl, emberAfPluginBulbUiBulbUiRebootEventHandler }, \
  { &emberAfPluginBulbUiRejoinEventControl, emberAfPluginBulbUiRejoinEventHandler }, \
  { &emberAfPluginColorControlServerHueSatTransitionEventControl, emberAfPluginColorControlServerHueSatTransitionEventHandler }, \
  { &emberAfPluginColorControlServerTempTransitionEventControl, emberAfPluginColorControlServerTempTransitionEventHandler }, \
  { &emberAfPluginColorControlServerXyTransitionEventControl, emberAfPluginColorControlServerXyTransitionEventHandler }, \
  { &emberAfPluginHumiditySi7021InitEventControl, emberAfPluginHumiditySi7021InitEventHandler }, \
  { &emberAfPluginHumiditySi7021ReadEventControl, emberAfPluginHumiditySi7021ReadEventHandler }, \
  { &emberAfPluginManufacturingLibraryOtaKickoffEventControl, emberAfPluginManufacturingLibraryOtaKickoffEventHandler }, \
  { &emberAfPluginManufacturingLibraryOtaTimeoutEventControl, emberAfPluginManufacturingLibraryOtaTimeoutEventHandler }, \
  { &emberAfPluginNetworkSteeringFinishSteeringEventControl, emberAfPluginNetworkSteeringFinishSteeringEventHandler }, \
  { &emberAfPluginOtaStorageSimpleEepromPageEraseEventControl, emberAfPluginOtaStorageSimpleEepromPageEraseEventHandler }, \
  { &emberAfPluginRelativeHumidityMeasurementServerReadEventControl, emberAfPluginRelativeHumidityMeasurementServerReadEventHandler }, \
  { &emberAfPluginReportingTickEventControl, emberAfPluginReportingTickEventHandler }, \
  { &emberAfPluginTemperatureMeasurementServerReadEventControl, emberAfPluginTemperatureMeasurementServerReadEventHandler }, \
  { &emberAfPluginTemperatureSi7021InitEventControl, emberAfPluginTemperatureSi7021InitEventHandler }, \
  { &emberAfPluginTemperatureSi7021ReadEventControl, emberAfPluginTemperatureSi7021ReadEventHandler }, \
  { &emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0 }, \
  { &emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0 }, \


#define EMBER_AF_GENERATED_EVENT_STRINGS   \
  "Identify Cluster Server EP 1",  \
  "Level Control Cluster Server EP 1",  \
  "Over the Air Bootloading Cluster Client EP 1",  \
  "Bulb PWM Driver Plugin Blink",  \
  "Bulb PWM Driver Plugin Status",  \
  "Bulb user interface Plugin BulbUiReboot",  \
  "Bulb user interface Plugin Rejoin",  \
  "Color Control Cluster Server Plugin HueSatTransition",  \
  "Color Control Cluster Server Plugin TempTransition",  \
  "Color Control Cluster Server Plugin XyTransition",  \
  "Manufacturing Library Ota Plugin Kickoff",  \
  "Manufacturing Library Ota Plugin Timeout",  \
  "Network Steering Plugin FinishSteering",  \
  "OTA Simple Storage EEPROM Driver Plugin PageErase",  \
  "Relative Humidity Measurement Server Cluster Plugin Read",  \
  "Relative Humidity Si7021 Plugin Init",  \
  "Relative Humidity Si7021 Plugin Read",  \
  "Reporting Plugin Tick",  \
  "Temperature Measurement Server Cluster Plugin Read",  \
  "Temperature Si7021 Plugin Init",  \
  "Temperature Si7021 Plugin Read",  \
  "End Device Support Plugin Move NWK 0", \
  "End Device Support Plugin Polling NWK 0", \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 3

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x3, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfIdentifyClusterServerTickCallbackControl1}, \
{ 0x1, 0x8, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfLevelControlClusterServerTickCallbackControl1}, \
{ 0x1, 0x19, true, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfOtaBootloadClusterClientTickCallbackControl1}


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginBulbPwmDriverInitCallback(void); \
  void emberAfPluginBulbUiInitCallback(void); \
  void emberAfPluginEepromInitCallback(void); \
  void emberAfPluginIdleSleepInitCallback(void); \
  void emberAfPluginLedTempPwmInitCallback(void); \
  void emberAfPluginReportingInitCallback(void); \
  void emberAfPluginTemperatureSi7021InitCallback(void); \
  void emberAfPluginHumiditySi7021InitCallback(void); \
  void emberAfPluginTemperatureMeasurementServerInitCallback(void); \
  void emberAfPluginRelativeHumidityMeasurementServerInitCallback(void); \
  void emberAfPluginI2cDriverInitCallback(void); \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginBulbPwmDriverInitCallback(); \
  emberAfPluginBulbUiInitCallback(); \
  emberAfPluginEepromInitCallback(); \
  emberAfPluginIdleSleepInitCallback(); \
  emberAfPluginLedTempPwmInitCallback(); \
  emberAfPluginReportingInitCallback(); \
  emberAfPluginTemperatureSi7021InitCallback(); \
  emberAfPluginHumiditySi7021InitCallback(); \
  emberAfPluginTemperatureMeasurementServerInitCallback(); \
  emberAfPluginRelativeHumidityMeasurementServerInitCallback(); \
  emberAfPluginI2cDriverInitCallback(); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginAddressTableNcpInitCallback(bool memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS \
  emberAfPluginAddressTableNcpInitCallback(memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS \
  void emberAfPluginBulbUiStackStatusCallback(EmberStatus status); \
  void emberAfPluginColorControlServerStackStatusCallback(EmberStatus status); \
  void emberAfPluginEndDeviceSupportStackStatusCallback(EmberStatus status); \
  void emberAfPluginLevelControlStackStatusCallback(EmberStatus status); \
  void emberAfPluginManufacturingLibraryOtaStackStatusCallback(EmberStatus status); \
  void emberAfPluginNetworkSteeringStackStatusCallback(EmberStatus status); \
  void emberAfPluginOnOffStackStatusCallback(EmberStatus status); \
  void emberAfPluginOtaClientStackStatusCallback(EmberStatus status); \
  void emberAfPluginTemperatureMeasurementServerStackStatusCallback(EmberStatus status); \
  void emberAfPluginRelativeHumidityMeasurementServerStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS \
  emberAfPluginBulbUiStackStatusCallback(status); \
  emberAfPluginColorControlServerStackStatusCallback(status); \
  emberAfPluginEndDeviceSupportStackStatusCallback(status); \
  emberAfPluginLevelControlStackStatusCallback(status); \
  emberAfPluginManufacturingLibraryOtaStackStatusCallback(status); \
  emberAfPluginNetworkSteeringStackStatusCallback(status); \
  emberAfPluginOnOffStackStatusCallback(status); \
  emberAfPluginOtaClientStackStatusCallback(status); \
  emberAfPluginTemperatureMeasurementServerStackStatusCallback(status); \
  emberAfPluginRelativeHumidityMeasurementServerStackStatusCallback(status); \


#define EMBER_AF_GENERATED_PLUGIN_ZDO_MESSAGE_RECEIVED_FUNCTION_DECLARATIONS \
  void emberAfPluginUpdateTcLinkKeyZdoMessageReceivedCallback(EmberNodeId sender, \
                           EmberApsFrame* apsFrame, \
                           uint8_t* message, \
                           uint16_t length); \


#define EMBER_AF_GENERATED_PLUGIN_ZDO_MESSAGE_RECEIVED_FUNCTION_CALLS \
 emberAfPluginUpdateTcLinkKeyZdoMessageReceivedCallback(sender, \
                           apsFrame, \
                           message, \
                           length); \

#endif // __AF_ENDPOINT_CONFIG__
