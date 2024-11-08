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
    // Size: 0xc10
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bHoldingBall"
    #pragma pack(push, 1)
    class CCitadel_Ability_WreckingBall : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x8]; // 0xb00
        client::ParticleIndex_t m_nBallParticle; // 0xb08        
        client::ParticleIndex_t m_nCastCompleteParticle; // 0xb0c        
        // m_vecTargetsHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecTargetsHit;
        char m_vecTargetsHit[0x18]; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb28[0xe0]; // 0xb28
        // metadata: MNetworkEnable
        bool m_bHoldingBall; // 0xc08        
        [[maybe_unused]] std::uint8_t pad_0xc09[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_WreckingBall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_WreckingBall) == 0xc10);
};
