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
    // Size: 0xdb8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Lash_Flog : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x118]; // 0xc98
        client::ParticleIndex_t m_SandEffect; // 0xdb0        
        [[maybe_unused]] std::uint8_t pad_0xdb4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Lash_Flog because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Lash_Flog) == 0xdb8);
};
