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
    // Size: 0xf10
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
    class CCitadel_Ability_FlyingStrike : public client::CCitadelBaseYamatoAbility
    {
    public:
        client::SatVolumeIndex_t m_desatVolIdx; // 0xca0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bShadowFormCast; // 0xca4        
        [[maybe_unused]] std::uint8_t pad_0xca5[0x3]; // 0xca5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkEncoder "coord"
        Vector m_vYamatoCastPos; // 0xca8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkEncoder "coord"
        Vector m_vTargetCastPos; // 0xcb4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flFlyingToTargetStartTime; // 0xcc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flEndAttackTime; // 0xcc4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleStartTime; // 0xcc8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleArriveTime; // 0xccc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAttackLatchTime; // 0xcd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vAttackLatchPos; // 0xcd4        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xce0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flGrappleShotAttackTime; // 0xce4        
        [[maybe_unused]] std::uint8_t pad_0xce8[0x4]; // 0xce8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnPathChanged"
        Vector m_rgPath[20]; // 0xcec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nPathIdx; // 0xddc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        int32_t m_nPathSize; // 0xde0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flPathLength; // 0xde4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vFlyingInitialOffsetToPath; // 0xde8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float flDistFlown; // 0xdf4        
        Vector m_vLastSafePos; // 0xdf8        
        [[maybe_unused]] std::uint8_t pad_0xe04[0xac]; // 0xe04
        client::ParticleIndex_t m_nGrappleTravelEffect; // 0xeb0        
        [[maybe_unused]] std::uint8_t pad_0xeb4[0x54]; // 0xeb4
        bool m_bPathDirty; // 0xf08        
        [[maybe_unused]] std::uint8_t pad_0xf09[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_FlyingStrike because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_FlyingStrike) == 0xf10);
};
