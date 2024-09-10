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
    enum class ELobbyServerState : std::uint32_t
    {
        k_eLobbyServerState_Assign = 0x0,
        k_eLobbyServerState_InGame = 0x1,
        k_eLobbyServerState_PostMatch = 0x2,
        k_eLobbyServerState_SignedOut = 0x3,
        k_eLobbyServerState_Abandoned = 0x4,
    };
};
