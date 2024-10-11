#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xce0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flLandedTime"
    // static metadata: MNetworkVarNames "bool m_bLanded"
    // static metadata: MNetworkVarNames "bool m_bFalling"
    // static metadata: MNetworkVarNames "bool m_bInStoneForm"
    // static metadata: MNetworkVarNames "float m_flStartHeight"
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_StoneForm : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf0[0x1c0]; // 0xaf0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flStartTime; // 0xcb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flLandedTime; // 0xcb4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bLanded; // 0xcb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bFalling; // 0xcb9        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInStoneForm; // 0xcba        
        [[maybe_unused]] std::uint8_t pad_0xcbb[0x1]; // 0xcbb
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flStartHeight; // 0xcbc        
        client::ParticleIndex_t m_nStoneFormEffect; // 0xcc0        
        [[maybe_unused]] std::uint8_t pad_0xcc4[0x4]; // 0xcc4
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0xcc8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_StoneForm because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tengu_StoneForm) == 0xce0);
};
