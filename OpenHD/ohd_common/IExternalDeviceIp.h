//
// Created by consti10 on 07.08.22.
//

#ifndef OPENHD_OPENHD_OHD_COMMON_IEXTERNALDEVICEIP_H_
#define OPENHD_OPENHD_OHD_COMMON_IEXTERNALDEVICEIP_H_

#include <string>
// This is how we handle "external" devices in regards to forwarding.
// 1) What are external device(s): A smartphone, tablet or similar connected via (WIFI,USB Tethering) to
//    the ground unit
// 2) How are these device(s) handled: Once detected (e.g. when a USB tethering connection is detected), find their IP adress,
//    then call the different callbacks

class IExternalDeviceIp{
  // A new external device uniquely indexed by "IP address" has been detected - start forwarding of video and telemetry data
  void onConnected(std::string ip);
  // A connected device uniquely indexed by "IP address" disconnected - stop forwarding of video and telemetry data.
  void onDisconnected(std::string ip);
};

#endif //OPENHD_OPENHD_OHD_COMMON_IEXTERNALDEVICEIP_H_
