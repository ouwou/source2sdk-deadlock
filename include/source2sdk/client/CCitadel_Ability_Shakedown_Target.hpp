#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CCitadel_Ability_Yakuza_Shakedown;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd30
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Shakedown_Target : public client::C_CitadelBaseAbility
    {
    public:
        // m_hShadowdownAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CCitadel_Ability_Yakuza_Shakedown> m_hShadowdownAbility;
        char m_hShadowdownAbility[0x4]; // 0xc78        
        Vector m_AimPos; // 0xc7c        
        [[maybe_unused]] std::uint8_t pad_0xc88[0xa8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Shakedown_Target because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Shakedown_Target) == 0xd30);
};
