#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelAudioLoopSounds : std::uint32_t
    {
        // MPropertyFriendlyName "Start Sound"
        CITADEL_AUDIO_LOOP_START_SOUND = 0x0,
        // MPropertyFriendlyName "Loop Sound"
        CITADEL_AUDIO_LOOP_LOOP_SOUND = 0x1,
        // MPropertyFriendlyName "Stop Sound"
        CITADEL_AUDIO_LOOP_STOP_SOUND = 0x2,
    };
};
