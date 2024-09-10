#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/LockonTarget_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdd8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
    // static metadata: MNetworkVarNames "GameTime_t m_LockOnStartTime"
    #pragma pack(push, 1)
    class CCitadelBaseLockonAbility : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc60[0x118]; // 0xc60
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_vecLockonTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::LockonTarget_t> m_vecLockonTargets;
        char m_vecLockonTargets[0x50]; // 0xd78        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_LockOnStartTime; // 0xdc8        
        [[maybe_unused]] std::uint8_t pad_0xdcc[0x4]; // 0xdcc
        client::ParticleIndex_t m_nTargetingLightEffect; // 0xdd0        
        [[maybe_unused]] std::uint8_t pad_0xdd4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBaseLockonAbility because it is not a standard-layout class
    
    static_assert(sizeof(CCitadelBaseLockonAbility) == 0xdd8);
};