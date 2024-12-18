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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc68
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Wrecker_BoulderGrenade : public server::CCitadelBaseAbility
    {
    public:
        // m_hHitTroopers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitTroopers;
        char m_hHitTroopers[0x18]; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xb10[0x4]; // 0xb10
        client::ParticleIndex_t m_nBallParticle; // 0xb14        
        [[maybe_unused]] std::uint8_t pad_0xb18[0x150];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Wrecker_BoulderGrenade because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Wrecker_BoulderGrenade) == 0xc68);
};
