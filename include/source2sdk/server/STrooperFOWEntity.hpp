#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CEntityIndex m_nEntIndex"
    // static metadata: MNetworkVarNames "int8 m_nTeam"
    // static metadata: MNetworkVarNames "uint16 m_nPositionXY"
    #pragma pack(push, 1)
    class STrooperFOWEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        CEntityIndex m_nEntIndex; // 0x30        
        // metadata: MNetworkEnable
        int8_t m_nTeam; // 0x34        
        [[maybe_unused]] std::uint8_t pad_0x35[0x1]; // 0x35
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "OnFieldXYChanged"
        uint16_t m_nPositionXY; // 0x36        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(STrooperFOWEntity, m_nEntIndex) == 0x30);
    static_assert(offsetof(STrooperFOWEntity, m_nTeam) == 0x34);
    static_assert(offsetof(STrooperFOWEntity, m_nPositionXY) == 0x36);
    
    static_assert(sizeof(STrooperFOWEntity) == 0x38);
};
