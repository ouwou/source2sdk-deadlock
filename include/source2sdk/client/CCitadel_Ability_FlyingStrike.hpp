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
    // Size: 0xf08
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
        client::SatVolumeIndex_t m_desatVolIdx; // 0xc98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bShadowFormCast; // 0xc9c        
        [[maybe_unused]] std::uint8_t pad_0xc9d[0x3]; // 0xc9d
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // metadata: MNetworkEncoder "coord"
        Vector m_vYamatoCastPos; // 0xca0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // metadata: MNetworkEncoder "coord"
        Vector m_vTargetCastPos; // 0xcac        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flFlyingToTargetStartTime; // 0xcb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flEndAttackTime; // 0xcbc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleStartTime; // 0xcc0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleArriveTime; // 0xcc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flAttackLatchTime; // 0xcc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vAttackLatchPos; // 0xccc        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xcd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flGrappleShotAttackTime; // 0xcdc        
        [[maybe_unused]] std::uint8_t pad_0xce0[0x4]; // 0xce0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnPathChanged"
        Vector m_rgPath[20]; // 0xce4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nPathIdx; // 0xdd4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        int32_t m_nPathSize; // 0xdd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flPathLength; // 0xddc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vFlyingInitialOffsetToPath; // 0xde0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float flDistFlown; // 0xdec        
        Vector m_vLastSafePos; // 0xdf0        
        [[maybe_unused]] std::uint8_t pad_0xdfc[0xac]; // 0xdfc
        client::ParticleIndex_t m_nGrappleTravelEffect; // 0xea8        
        [[maybe_unused]] std::uint8_t pad_0xeac[0x54]; // 0xeac
        bool m_bPathDirty; // 0xf00        
        [[maybe_unused]] std::uint8_t pad_0xf01[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_FlyingStrike because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_FlyingStrike) == 0xf08);
};
