#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CTier3BossAbility.hpp"
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
    // Size: 0xb00
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Tier3Boss_LaserBeam : public server::CTier3BossAbility
    {
    public:
        // m_pBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_pBeamModifier[1];
        char m_pBeamModifier[0x18]; // 0xae8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tier3Boss_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tier3Boss_LaserBeam) == 0xb00);
};
