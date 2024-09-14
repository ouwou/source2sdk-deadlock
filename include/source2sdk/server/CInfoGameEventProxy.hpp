#pragma once
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x4e8
    // Has VTable
    #pragma pack(push, 1)
    class CInfoGameEventProxy : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_iszEventName; // 0x4d8        
        float m_flRange; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4];
        
        // Datamap fields:
        // CUtlSymbolLarge InputGenerateGameEvent; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoGameEventProxy because it is not a standard-layout class
    static_assert(sizeof(CInfoGameEventProxy) == 0x4e8);
};
