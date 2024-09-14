#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
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
    // Size: 0x590
    // Has VTable
    #pragma pack(push, 1)
    class CInfoTrooperBossSpawn : public server::CServerOnlyPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4d8[0x10]; // 0x4d8
        CUtlSymbolLarge m_strBossEntityName; // 0x4e8        
        int32_t m_iLane; // 0x4f0        
        int32_t m_iCoverGroupID; // 0x4f4        
        [[maybe_unused]] std::uint8_t pad_0x4f8[0x8]; // 0x4f8
        bool m_bReinforcementsOnly; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x501[0x17]; // 0x501
        entity2::CEntityIOOutput m_eventOnTrooperKilled; // 0x518        
        [[maybe_unused]] std::uint8_t pad_0x540[0x50];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoTrooperBossSpawn because it is not a standard-layout class
    static_assert(sizeof(CInfoTrooperBossSpawn) == 0x590);
};
