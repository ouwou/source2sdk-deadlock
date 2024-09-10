#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Size: 0xd38
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_SettingSun : public server::CCitadelBaseAbility
    {
    public:
        bool m_bProjectileActive; // 0xad8        
        [[maybe_unused]] std::uint8_t pad_0xad9[0x18f]; // 0xad9
        // m_TargetPreviews has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_TargetPreviews;
        char m_TargetPreviews[0x18]; // 0xc68        
        [[maybe_unused]] std::uint8_t pad_0xc80[0xb0]; // 0xc80
        bool m_bWasSelected; // 0xd30        
        [[maybe_unused]] std::uint8_t pad_0xd31[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_SettingSun because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_SettingSun) == 0xd38);
};
