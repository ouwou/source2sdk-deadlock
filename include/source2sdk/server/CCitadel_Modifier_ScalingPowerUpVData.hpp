#pragma once
#include "source2sdk/client/ScalingPowerupDefinition_t.hpp"
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
    // Size: 0x628
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_ScalingPowerUpVData : public server::CCitadelModifierVData
    {
    public:
        // m_vecModifierValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ScalingPowerupDefinition_t> m_vecModifierValues;
        char m_vecModifierValues[0x18]; // 0x608        
        float m_flTimeMin; // 0x620        
        float m_flTimeMax; // 0x624        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ScalingPowerUpVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ScalingPowerUpVData) == 0x628);
};
