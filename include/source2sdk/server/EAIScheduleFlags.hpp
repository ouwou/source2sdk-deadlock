#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class EAIScheduleFlags : std::uint32_t
    {
        SCHEDULE_FLAGS_NONE = 0x0,
        SCHEDULE_FLAGS_ABILITY = 0x1,
        SCHEDULE_FLAGS_INTERRUPT_ACTIVE_HANDSHAKES = 0x2,
        SCHEDULE_FLAGS_CANNOT_BE_INTERRUPTED_BY_SYNCHRONIZED_ABILITY = 0x4,
        SCHEDULE_FLAGS_CANNOT_BE_INTERRUPTED_BY_INCAPACITATION = 0x8,
    };
};
