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
    // Size: 0x610
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Objective_RegenVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Objective Health Regen"
        // metadata: MPropertyDescription "How health per second when out of combat?"
        float m_flOutOfCombatHealthRegen; // 0x608        
        // metadata: MPropertyDescription "How longer after taking no damage will out out of combat regen kick in?"
        float m_flOutOfCombatRegenDelay; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Objective_RegenVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Objective_RegenVData) == 0x610);
};
