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
    // Size: 0xeb8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bShadowFormCast"
    // static metadata: MNetworkVarNames "Vector m_vecCastStartPos"
    // static metadata: MNetworkVarNames "Vector m_vecDashStartPos"
    // static metadata: MNetworkVarNames "QAngle m_angDashStartAng"
    // static metadata: MNetworkVarNames "GameTime_t m_flDashStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flEndAttackTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrappleStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
    // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
    // static metadata: MNetworkVarNames "Vector m_rgTargetPos"
    // static metadata: MNetworkVarNames "GameTime_t m_rgTargetPosTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_FlyingStrike : public client::CCitadelBaseYamatoAbility
    {
    public:
        client::SatVolumeIndex_t m_desatVolIdx; // 0xc68        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bShadowFormCast; // 0xc6c        
        [[maybe_unused]] std::uint8_t pad_0xc6d[0x3]; // 0xc6d
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vecCastStartPos; // 0xc70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vecDashStartPos; // 0xc7c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        QAngle m_angDashStartAng; // 0xc88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDashStartTime; // 0xc94        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flEndAttackTime; // 0xc98        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleStartTime; // 0xc9c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleArriveTime; // 0xca0        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xca4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flGrappleShotAttackTime; // 0xca8        
        float m_flVelSpring; // 0xcac        
        int32_t m_nTicksNotMoving; // 0xcb0        
        Vector m_vecPrevPos; // 0xcb4        
        [[maybe_unused]] std::uint8_t pad_0xcc0[0x4]; // 0xcc0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // metadata: MNetworkEncoder "coord"
        Vector m_rgTargetPos[20]; // 0xcc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_rgTargetPosTime[20]; // 0xdb4        
        [[maybe_unused]] std::uint8_t pad_0xe04[0xac]; // 0xe04
        client::ParticleIndex_t m_nGrappleTravelEffect; // 0xeb0        
        [[maybe_unused]] std::uint8_t pad_0xeb4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_FlyingStrike because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_FlyingStrike) == 0xeb8);
};
