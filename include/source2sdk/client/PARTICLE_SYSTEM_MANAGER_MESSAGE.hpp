#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 12
    // Alignment: 4
    // Size: 0x4
    enum class PARTICLE_SYSTEM_MANAGER_MESSAGE : std::uint32_t
    {
        PARTICLE_SYSTEM_MANAGER_EVENT_CREATE = 0x0,
        PARTICLE_SYSTEM_MANAGER_EVENT_DESTROY = 0x1,
        PARTICLE_SYSTEM_MANAGER_EVENT_DESTROY_INVOLVING = 0x2,
        PARTICLE_SYSTEM_MANAGER_EVENT_RELEASE = 0x3,
        PARTICLE_SYSTEM_MANAGER_EVENT_UPDATE = 0x4,
        PARTICLE_SYSTEM_MANAGER_EVENT_UPDATE_FORWARD = 0x5,
        PARTICLE_SYSTEM_MANAGER_EVENT_UPDATE_ORIENTATION = 0x6,
        PARTICLE_SYSTEM_MANAGER_EVENT_UPDATE_FALLBACK = 0x7,
        PARTICLE_SYSTEM_MANAGER_EVENT_UPDATE_ENT = 0x8,
        PARTICLE_SYSTEM_MANAGER_EVENT_UPDATE_OFFSET = 0x9,
        PARTICLE_SYSTEM_MANAGER_EVENT_UPDATE_FROZEN = 0xa,
        PARTICLE_SYSTEM_MANAGER_EVENT_UPDATE_SHOULD_DRAW = 0xb,
    };
};
