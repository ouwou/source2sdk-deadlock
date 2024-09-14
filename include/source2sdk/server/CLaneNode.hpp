#pragma once
#include "source2sdk/server/CCitadelModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8f0
    // Has VTable
    #pragma pack(push, 1)
    class CLaneNode : public server::CCitadelModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x8e8[0x8];
        // Datamap fields:
        // CHandle< CBaseEntity > m_hLastTrooperChecked; // 0x8e8
        // CHandle< CBaseEntity > m_hLastBossChecked; // 0x8ec
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CLaneNode) == 0x8f0);
};
