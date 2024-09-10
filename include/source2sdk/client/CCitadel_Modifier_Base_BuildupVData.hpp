#pragma once
#include "source2sdk/client/BuildupMode_t.hpp"
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
    class CCitadel_Modifier_Base_BuildupVData : public client::CCitadelModifierVData
    {
    public:
        bool m_bUseBaseWeaponCycleTimeForDelay; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5f9[0x3]; // 0x5f9
        float m_flCycleTimeDelayAdd; // 0x5fc        
        float m_flBuildUpDecayDelay; // 0x600        
        client::BuildupMode_t m_eBuildupMode; // 0x604        
        // metadata: MPropertyDescription "When true, effectiveness (distance falloff) will be applied to the buildup."
        bool m_bBuildupAffectedByEffectiveness; // 0x608        
        // metadata: MPropertyDescription "When true, the averaged effectiveness of the build up modifier will be passed to the fill modifier"
        bool m_bPassBuildupEffectivenessToFillModifier; // 0x609        
        [[maybe_unused]] std::uint8_t pad_0x60a[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Base_BuildupVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Base_BuildupVData) == 0x610);
};
