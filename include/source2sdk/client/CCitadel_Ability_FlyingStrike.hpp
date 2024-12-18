#pragma once
#include "source2sdk/client/CCitadelBaseYamatoAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf58
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
    // static metadata: MNetworkVarNames "bool m_bIsTargetAlly"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
    // static metadata: MNetworkVarNames "Vector m_rgPath"
    // static metadata: MNetworkVarNames "int m_nPathIdx"
    // static metadata: MNetworkVarNames "int m_nPathSize"
    // static metadata: MNetworkVarNames "float m_flPathLength"
    // static metadata: MNetworkVarNames "Vector m_vFlyingInitialOffsetToPath"
    // static metadata: MNetworkVarNames "float flDistFlown"
    #pragma pack(push, 1)
    class CCitadel_Ability_FlyingStrike : public client::CCitadelBaseYamatoAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xca0[0x10]; // 0xca0
        client::SatVolumeIndex_t m_desatVolIdx; // 0xcb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bShadowFormCast; // 0xcb4        
        [[maybe_unused]] std::uint8_t pad_0xcb5[0x3]; // 0xcb5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkEncoder "coord"
        Vector m_vYamatoCastPos; // 0xcb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkEncoder "coord"
        Vector m_vTargetCastPos; // 0xcc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flFlyingToTargetStartTime; // 0xcd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flEndAttackTime; // 0xcd4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleStartTime; // 0xcd8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleArriveTime; // 0xcdc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAttackLatchTime; // 0xce0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vAttackLatchPos; // 0xce4        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xcf0        
        // metadata: MNetworkEnable
        bool m_bIsTargetAlly; // 0xcf4        
        [[maybe_unused]] std::uint8_t pad_0xcf5[0x3]; // 0xcf5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flGrappleShotAttackTime; // 0xcf8        
        [[maybe_unused]] std::uint8_t pad_0xcfc[0x4]; // 0xcfc
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnPathChanged"
        Vector m_rgPath[20]; // 0xd00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nPathIdx; // 0xdf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nPathSize; // 0xdf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flPathLength; // 0xdf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vFlyingInitialOffsetToPath; // 0xdfc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float flDistFlown; // 0xe08        
        Vector m_vLastSafePos; // 0xe0c        
        [[maybe_unused]] std::uint8_t pad_0xe18[0xe0]; // 0xe18
        client::ParticleIndex_t m_nGrappleTravelEffect; // 0xef8        
        [[maybe_unused]] std::uint8_t pad_0xefc[0x54]; // 0xefc
        bool m_bPathDirty; // 0xf50        
        [[maybe_unused]] std::uint8_t pad_0xf51[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_FlyingStrike because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_FlyingStrike) == 0xf58);
};
