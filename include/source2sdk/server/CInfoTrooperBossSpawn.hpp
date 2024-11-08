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
    // Size: 0x5a0
    // Has VTable
    #pragma pack(push, 1)
    class CInfoTrooperBossSpawn : public server::CServerOnlyPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e8[0x10]; // 0x4e8
        CUtlSymbolLarge m_strBossEntityName; // 0x4f8        
        int32_t m_iLane; // 0x500        
        int32_t m_iCoverGroupID; // 0x504        
        [[maybe_unused]] std::uint8_t pad_0x508[0x8]; // 0x508
        bool m_bReinforcementsOnly; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x511[0x17]; // 0x511
        entity2::CEntityIOOutput m_eventOnTrooperKilled; // 0x528        
        [[maybe_unused]] std::uint8_t pad_0x550[0x50];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoTrooperBossSpawn because it is not a standard-layout class
    static_assert(sizeof(CInfoTrooperBossSpawn) == 0x5a0);
};
