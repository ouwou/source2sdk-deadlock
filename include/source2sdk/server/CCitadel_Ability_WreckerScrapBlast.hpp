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
    // Size: 0xb88
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_WreckerScrapBlast : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_BlastParticle; // 0xad8        
        [[maybe_unused]] std::uint8_t pad_0xadc[0xac];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_WreckerScrapBlast because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_WreckerScrapBlast) == 0xb88);
};