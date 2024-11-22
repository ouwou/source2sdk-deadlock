#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_BreakablePropModifierPickupVData.hpp"
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
    // Size: 0x350
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_PunchablePowerupVData : public server::CCitadel_BreakablePropModifierPickupVData
    {
    public:
        // m_AuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_AuraModifier;
        char m_AuraModifier[0x10]; // 0x340        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_PunchablePowerupVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_PunchablePowerupVData) == 0x350);
};
