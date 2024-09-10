#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class ChatMsgPingMarkerInfo : std::uint32_t
    {
        k_EPingMarkerInfo_ShowMarkerAndSound = 0x0,
        k_EPingMarkerInfo_HideMarkerAndSound = 0x1,
        k_EPingMarkerInfo_ShowMarkerOnSender = 0x2,
        k_EPingMarkerInfo_OnlyShowMarker = 0x3,
        k_EPingMarkerInfo_OnlyPlaySound = 0x4,
    };
};
