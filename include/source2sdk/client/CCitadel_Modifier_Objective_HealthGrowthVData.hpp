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
    // Size: 0x640
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Objective_HealthGrowthVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Objective Health Growth"
        // metadata: MPropertyDescription "How much health per Minute"
        int32_t m_iGrowthPerMinute; // 0x630        
        // metadata: MPropertyDescription "How often do we update (seconds)"
        float m_flTickRate; // 0x634        
        int32_t m_iGrowthStartTimeInMinutes; // 0x638        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Objective_HealthGrowthVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Objective_HealthGrowthVData) == 0x640);
};
