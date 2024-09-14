#pragma once
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x600
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Objective_BulletReistVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Objective Bullet Resist"
        // metadata: MPropertyDescription "Bullet Resist with no Enemy Heroes around"
        float m_BulletResist; // 0x5f8        
        // metadata: MPropertyDescription "Bullet Resist Reduced Per Enemy Hero (Max 0%)"
        float m_BulletResistReductionPerHero; // 0x5fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Objective_BulletReistVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Objective_BulletReistVData) == 0x600);
};
