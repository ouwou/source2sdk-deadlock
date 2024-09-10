#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 9
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelDisconnectReason : std::uint32_t
    {
        k_ECitadelDisconnectReason_UserLeaveMatch = 0x3e9,
        k_ECitadelDisconnectReason_UserQuitApp = 0x3ea,
        k_ECitadelDisconnectReason_UserCancel = 0x3eb,
        k_ECitadelDisconnectReason_Goodbye = 0x3ec,
        k_ECitadelDisconnectReason_BadMessage = 0x7d1,
        k_ECitadelDisconnectReason_GameDestroyedUnexpectedly = 0x7d2,
        k_ECitadelDisconnectReason_ChangingServer = 0x7d3,
        k_ECitadelDisconnectReason_OldConnection = 0x7d4,
        k_ECitadelDisconnectReason_GoodbyeUnrecognizedGame = 0x7d5,
    };
};
