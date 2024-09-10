#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x258
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Warden_RiotProtocol : public server::CCitadelModifier
    {
    public:
        // m_mapEntToTimeHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CHandle<server::CBaseEntity>,entity2::GameTime_t> m_mapEntToTimeHit;
        char m_mapEntToTimeHit[0x28]; // 0xc8        
        int32_t m_nNumPlayersAffected; // 0xf0        
        int32_t m_nNumPlayersKilled; // 0xf4        
        QAngle m_playerAngles; // 0xf8        
        client::ParticleIndex_t m_ConeParticle; // 0x104        
        [[maybe_unused]] std::uint8_t pad_0x108[0x150];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Warden_RiotProtocol because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Warden_RiotProtocol) == 0x258);
};
