//
// Created by consti10 on 10.12.22.
//

#ifndef OPENHD_OPENHD_OHD_INTERFACE_INC_WB_SETTINGS_HELPER_H_
#define OPENHD_OPENHD_OHD_INTERFACE_INC_WB_SETTINGS_HELPER_H_

// Helper to fix up / validate wifibroadcast settings given X cards

#include "wb_link_settings.hpp"
#include "openhd-spdlog.hpp"

namespace openhd::wb::settings{

void fixup_unsupported_settings(openhd::WBStreamsSettingsHolder& settings,
                                std::vector<std::shared_ptr<WifiCardHolder>> m_broadcast_cards,
                                std::shared_ptr<spdlog::logger> m_console);

// returns true if all cards support setting the MCS index
// false otherwise
bool cards_support_setting_mcs_index(const std::vector<std::shared_ptr<WifiCardHolder>>& m_broadcast_cards);

// returns true if all cards support setting the channel width (otherwise 20Mhz default is fixed (most likely))
// false otherwise
bool cards_support_setting_channel_width(const std::vector<std::shared_ptr<WifiCardHolder>>& m_broadcast_cards);

}

#endif  // OPENHD_OPENHD_OHD_INTERFACE_INC_WB_SETTINGS_HELPER_H_
