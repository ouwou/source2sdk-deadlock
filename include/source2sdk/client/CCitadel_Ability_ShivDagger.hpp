#pragma once
#include "source2sdk/client/CCitadelBaseShivAbility.hpp"
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
    // Size: 0xd78
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_ShivDagger : public client::CCitadelBaseShivAbility
    {
    public:
        bool m_bIsInRicochet; // 0xc78        
        [[maybe_unused]] std::uint8_t pad_0xc79[0xff];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ShivDagger because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ShivDagger) == 0xd78);
};
