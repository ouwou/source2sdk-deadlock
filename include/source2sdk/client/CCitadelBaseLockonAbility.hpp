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
    // Size: 0xe28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
    // static metadata: MNetworkVarNames "GameTime_t m_LockOnStartTime"
    #pragma pack(push, 1)
    class CCitadelBaseLockonAbility : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x118]; // 0xc98
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_vecLockonTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::LockonTarget_t> m_vecLockonTargets;
        char m_vecLockonTargets[0x68]; // 0xdb0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_LockOnStartTime; // 0xe18        
        [[maybe_unused]] std::uint8_t pad_0xe1c[0x4]; // 0xe1c
        client::ParticleIndex_t m_nTargetingLightEffect; // 0xe20        
        [[maybe_unused]] std::uint8_t pad_0xe24[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBaseLockonAbility because it is not a standard-layout class
    static_assert(sizeof(CCitadelBaseLockonAbility) == 0xe28);
};
