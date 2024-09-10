#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 4
    // Size: 0x4
    enum class EGCServerLobbyData : std::uint32_t
    {
        k_EServerLobbyData_PlayerMMR = 0x1,
        k_EServerLobbyData_PlayerInfo = 0x2,
        k_EServerLobbyData_PostMatchSurvey = 0x3,
        k_EServerLobbyData_AutoTest = 0x4,
    };
};
