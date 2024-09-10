#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_ChainLightningVData.hpp"
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
    // Size: 0x818
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Galvanic_Storm_VData : public server::CCitadel_Modifier_ChainLightningVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_TechShieldModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_TechShieldModifier;
        char m_TechShieldModifier[0x10]; // 0x808        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Galvanic_Storm_VData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Galvanic_Storm_VData) == 0x818);
};