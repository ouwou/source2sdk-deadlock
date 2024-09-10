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
    // Size: 0xbf8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Lash_Flog : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xad8[0x118]; // 0xad8
        client::ParticleIndex_t m_SandEffect; // 0xbf0        
        [[maybe_unused]] std::uint8_t pad_0xbf4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Lash_Flog because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Lash_Flog) == 0xbf8);
};
