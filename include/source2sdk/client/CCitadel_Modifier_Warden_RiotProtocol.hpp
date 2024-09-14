#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x250
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Warden_RiotProtocol : public client::CCitadelModifier
    {
    public:
        // m_mapEntToTimeHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CHandle<client::C_BaseEntity>,entity2::GameTime_t> m_mapEntToTimeHit;
        char m_mapEntToTimeHit[0x28]; // 0xc0        
        int32_t m_nNumPlayersAffected; // 0xe8        
        int32_t m_nNumPlayersKilled; // 0xec        
        QAngle m_playerAngles; // 0xf0        
        client::ParticleIndex_t m_ConeParticle; // 0xfc        
        [[maybe_unused]] std::uint8_t pad_0x100[0x150];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Warden_RiotProtocol because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Warden_RiotProtocol) == 0x250);
};
