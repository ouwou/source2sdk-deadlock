#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x610
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_BreakablePropSpeedPickupVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Powerup Values"
        float m_flSpeedBoost; // 0x608        
        float m_flSprintBoost; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BreakablePropSpeedPickupVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BreakablePropSpeedPickupVData) == 0x610);
};
