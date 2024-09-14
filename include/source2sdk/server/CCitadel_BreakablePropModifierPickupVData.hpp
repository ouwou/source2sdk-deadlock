#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_BreakablePropPickupVData.hpp"
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
    // Size: 0x328
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_BreakablePropModifierPickupVData : public server::CCitadel_BreakablePropPickupVData
    {
    public:
        // m_sModifer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_sModifer;
        char m_sModifer[0x10]; // 0x318        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_BreakablePropModifierPickupVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_BreakablePropModifierPickupVData) == 0x328);
};
