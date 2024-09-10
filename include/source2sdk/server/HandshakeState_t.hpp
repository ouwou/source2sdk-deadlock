#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 7
    // Alignment: 4
    // Size: 0x4
    enum class HandshakeState_t : std::uint32_t
    {
        eInactive = 0x0,
        eWaitingToBecomeInactive = 0x1,
        eWaitingToBecomeActive = 0x2,
        eWaitingToFinish = 0x3,
        eWaitingForScriptedSequence = 0x4,
        eRestartingFromScriptedSequence = 0x5,
        eFinished = 0x6,
    };
};
