#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseYamatoAbility.hpp"
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
    // Size: 0xd68
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bShadowFormCast"
    // static metadata: MNetworkVarNames "Vector m_vYamatoCastPos"
    // static metadata: MNetworkVarNames "Vector m_vTargetCastPos"
    // static metadata: MNetworkVarNames "GameTime_t m_flFlyingToTargetStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flEndAttackTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrappleStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flAttackLatchTime"
    // static metadata: MNetworkVarNames "Vector m_vAttackLatchPos"
    // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
    // static metadata: MNetworkVarNames "Vector m_rgPath"
    // static metadata: MNetworkVarNames "int m_nPathIdx"
    // static metadata: MNetworkVarNames "int m_nPathSize"
    // static metadata: MNetworkVarNames "float m_flPathLength"
    // static metadata: MNetworkVarNames "Vector m_vFlyingInitialOffsetToPath"
    // static metadata: MNetworkVarNames "float flDistFlown"
    #pragma pack(push, 1)
    class CCitadel_Ability_FlyingStrike : public server::CCitadelBaseYamatoAbility
    {
    public:
        int32_t m_iTargetPosIndex; // 0xaf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bShadowFormCast; // 0xafc        
        [[maybe_unused]] std::uint8_t pad_0xafd[0x3]; // 0xafd
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // metadata: MNetworkEncoder "coord"
        Vector m_vYamatoCastPos; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // metadata: MNetworkEncoder "coord"
        Vector m_vTargetCastPos; // 0xb0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flFlyingToTargetStartTime; // 0xb18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flEndAttackTime; // 0xb1c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleStartTime; // 0xb20        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleArriveTime; // 0xb24        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flAttackLatchTime; // 0xb28        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vAttackLatchPos; // 0xb2c        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xb38        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flGrappleShotAttackTime; // 0xb3c        
        // m_hAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAttackTarget;
        char m_hAttackTarget[0x4]; // 0xb40        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnPathChanged"
        Vector m_rgPath[20]; // 0xb44        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nPathIdx; // 0xc34        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nPathSize; // 0xc38        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flPathLength; // 0xc3c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vFlyingInitialOffsetToPath; // 0xc40        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float flDistFlown; // 0xc4c        
        Vector m_vLastSafePos; // 0xc50        
        [[maybe_unused]] std::uint8_t pad_0xc5c[0xac]; // 0xc5c
        client::ParticleIndex_t m_nGrappleTravelEffect; // 0xd08        
        [[maybe_unused]] std::uint8_t pad_0xd0c[0x54]; // 0xd0c
        bool m_bPathDirty; // 0xd60        
        [[maybe_unused]] std::uint8_t pad_0xd61[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_FlyingStrike because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_FlyingStrike) == 0xd68);
};
