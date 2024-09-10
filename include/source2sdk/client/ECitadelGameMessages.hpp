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
    enum class ECitadelGameMessages : std::uint32_t
    {
        k_EMsgGameServerToClientConnectionStatus = 0xa,
        k_EMsgGameServerToClientInitialGameState = 0xc,
        k_EMsgGameServerToClientGameCompleted = 0xd,
        k_EMsgGameServerToClientGoodbye = 0xf,
    };
};
