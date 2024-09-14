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
    class CPhysImpact : public server::CPointEntity
    {
    public:
        float m_damage; // 0x4d8        
        float m_distance; // 0x4dc        
        CUtlSymbolLarge m_directionEntityName; // 0x4e0        
        
        // Datamap fields:
        // void CPhysImpactPointAtEntity; // 0x0
        // void InputImpact; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysImpact because it is not a standard-layout class
    static_assert(sizeof(CPhysImpact) == 0x4e8);
};
