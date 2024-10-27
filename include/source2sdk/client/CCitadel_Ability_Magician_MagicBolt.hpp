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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe60
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_MagicBolt : public client::C_CitadelBaseAbility
    {
    public:
        int32_t m_iCurrentRedirects; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc9c[0x1c4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_MagicBolt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_MagicBolt) == 0xe60);
};
