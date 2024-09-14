#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/LockonTarget_t.hpp"
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
    // Size: 0xc58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
    // static metadata: MNetworkVarNames "GameTime_t m_LockOnStartTime"
    #pragma pack(push, 1)
    class CCitadelBaseLockonAbility : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x118]; // 0xae8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_vecLockonTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::LockonTarget_t> m_vecLockonTargets;
        char m_vecLockonTargets[0x50]; // 0xc00        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_LockOnStartTime; // 0xc50        
        [[maybe_unused]] std::uint8_t pad_0xc54[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBaseLockonAbility because it is not a standard-layout class
    static_assert(sizeof(CCitadelBaseLockonAbility) == 0xc58);
};
