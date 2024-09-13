#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x228
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Mirage_SandPhantom_Proc : public server::CCitadelModifier
    {
    public:
        client::ShotID_t m_nSuppressProcShotID; // 0xc8        
        client::ParticleIndex_t m_nProcReadyParticleIndex; // 0xcc        
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flLastProcTime; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd4[0x154];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Mirage_SandPhantom_Proc because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Mirage_SandPhantom_Proc) == 0x228);
};
