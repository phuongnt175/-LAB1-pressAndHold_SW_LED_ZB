// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AF_GEN_EVENT__
#define __AF_GEN_EVENT__


// Code used to configure the cluster event mechanism
#define EMBER_AF_GENERATED_EVENT_CODE \
  EmberEventControl emberAfIdentifyClusterServerTickCallbackControl1; \
  extern EmberEventControl buttonPressAndHoldEventControl; \
  extern EmberEventControl buttonReleaseEventControl; \
  extern EmberEventControl commissioningLedEventControl; \
  extern EmberEventControl emberAfPluginInterpanFragmentReceiveEventControl; \
  extern EmberEventControl emberAfPluginInterpanFragmentTransmitEventControl; \
  extern EmberEventControl emberAfPluginNetworkSteeringFinishSteeringEventControl; \
  extern EmberEventControl emberAfPluginReportingTickEventControl; \
  extern EmberEventControl emberAfPluginScanDispatchScanEventControl; \
  extern EmberEventControl emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl; \
  extern EmberEventControl findingAndBindingEventControl; \
  extern EmberEventControl led1ToggleEventControl; \
  extern EmberEventControl led2ToggleEventControl; \
  extern void buttonPressAndHoldEventHandle(void); \
  extern void buttonReleaseEventHandle(void); \
  extern void commissioningLedEventHandler(void); \
  extern void emberAfPluginInterpanFragmentReceiveEventHandler(void); \
  extern void emberAfPluginInterpanFragmentTransmitEventHandler(void); \
  extern void emberAfPluginNetworkSteeringFinishSteeringEventHandler(void); \
  extern void emberAfPluginReportingTickEventHandler(void); \
  extern void emberAfPluginScanDispatchScanEventHandler(void); \
  extern void emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler(void); \
  extern void findingAndBindingEventHandler(void); \
  extern void led1ToggleEventHandle(void); \
  extern void led2ToggleEventHandle(void); \
  static void clusterTickWrapper(EmberEventControl *control, EmberAfTickFunction callback, uint8_t endpoint) \
  { \
    emberAfPushEndpointNetworkIndex(endpoint); \
    emberEventControlSetInactive(*control); \
    (*callback)(endpoint); \
    emberAfPopNetworkIndex(); \
  } \
  void emberAfIdentifyClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallback, 1); } \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS   \
  { &emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallbackWrapperFunction1 }, \
  { &buttonPressAndHoldEventControl, buttonPressAndHoldEventHandle }, \
  { &buttonReleaseEventControl, buttonReleaseEventHandle }, \
  { &commissioningLedEventControl, commissioningLedEventHandler }, \
  { &emberAfPluginInterpanFragmentReceiveEventControl, emberAfPluginInterpanFragmentReceiveEventHandler }, \
  { &emberAfPluginInterpanFragmentTransmitEventControl, emberAfPluginInterpanFragmentTransmitEventHandler }, \
  { &emberAfPluginNetworkSteeringFinishSteeringEventControl, emberAfPluginNetworkSteeringFinishSteeringEventHandler }, \
  { &emberAfPluginReportingTickEventControl, emberAfPluginReportingTickEventHandler }, \
  { &emberAfPluginScanDispatchScanEventControl, emberAfPluginScanDispatchScanEventHandler }, \
  { &emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl, emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler }, \
  { &findingAndBindingEventControl, findingAndBindingEventHandler }, \
  { &led1ToggleEventControl, led1ToggleEventHandle }, \
  { &led2ToggleEventControl, led2ToggleEventHandle }, \


#define EMBER_AF_GENERATED_EVENT_STRINGS   \
  "Identify Cluster Server EP 1",  \
  "Event data",  \
  "Event data",  \
  "Commissioning led event control",  \
  "Interpan Plugin FragmentReceive",  \
  "Interpan Plugin FragmentTransmit",  \
  "Network Steering Plugin FinishSteering",  \
  "Reporting Plugin Tick",  \
  "Scan Dispatch Plugin Scan",  \
  "Update TC Link Key Plugin BeginTcLinkKeyUpdate",  \
  "Finding and binding event control",  \
  "Event data",  \
  "Event data",  \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 1

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x3, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfIdentifyClusterServerTickCallbackControl1}


#endif // __AF_GEN_EVENT__
