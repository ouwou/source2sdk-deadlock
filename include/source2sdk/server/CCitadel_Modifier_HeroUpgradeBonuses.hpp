#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadelPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_HeroUpgradeBonuses : public server::CCitadelModifier
    {
    public:
        server::CCitadelPlayerPawn* m_pOwningPlayer; // 0xc0        
        float m_flWeaponPower; // 0xc8        
        float m_flArmorPower; // 0xcc        
        float m_flTechPower; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HeroUpgradeBonuses because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_HeroUpgradeBonuses) == 0xd8);
};
