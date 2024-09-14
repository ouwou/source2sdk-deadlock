#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x568
    // Has VTable
    #pragma pack(push, 1)
    class CLogicDistanceCheck : public server::CLogicalEntity
    {
    public:
        CUtlSymbolLarge m_iszEntityA; // 0x4d8        
        CUtlSymbolLarge m_iszEntityB; // 0x4e0        
        float m_flZone1Distance; // 0x4e8        
        float m_flZone2Distance; // 0x4ec        
        entity2::CEntityIOOutput m_InZone1; // 0x4f0        
        entity2::CEntityIOOutput m_InZone2; // 0x518        
        entity2::CEntityIOOutput m_InZone3; // 0x540        
        
        // Datamap fields:
        // void InputCheckDistance; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicDistanceCheck because it is not a standard-layout class
    static_assert(sizeof(CLogicDistanceCheck) == 0x568);
};
