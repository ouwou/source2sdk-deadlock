#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xd68
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_SettingSun : public client::C_CitadelBaseAbility
    {
    public:
        // m_TargetPreviews has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::ParticleIndex_t> m_TargetPreviews;
        char m_TargetPreviews[0x18]; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xcb0[0xb0]; // 0xcb0
        bool m_bWasSelected; // 0xd60        
        [[maybe_unused]] std::uint8_t pad_0xd61[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_SettingSun because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_SettingSun) == 0xd68);
};
