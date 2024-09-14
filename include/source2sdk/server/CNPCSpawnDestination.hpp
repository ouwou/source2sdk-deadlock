#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x518
    // Has VTable
    #pragma pack(push, 1)
    class CNPCSpawnDestination : public server::CPointEntity
    {
    public:
        float m_ReuseDelay; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4dc[0x4]; // 0x4dc
        CUtlSymbolLarge m_RenameNPC; // 0x4e0        
        entity2::GameTime_t m_TimeNextAvailable; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4]; // 0x4ec
        entity2::CEntityIOOutput m_OnSpawnNPC; // 0x4f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPCSpawnDestination because it is not a standard-layout class
    static_assert(sizeof(CNPCSpawnDestination) == 0x518);
};
