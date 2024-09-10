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
    // Size: 0xc80
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecCastStartPos"
    // static metadata: MNetworkVarNames "Vector m_vecDashStartPos"
    // static metadata: MNetworkVarNames "Vector m_vecDashEndPos"
    // static metadata: MNetworkVarNames "QAngle m_angDashStartAng"
    // static metadata: MNetworkVarNames "GameTime_t m_flDashStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrappleStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrappleArriveTime"
    // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
    // static metadata: MNetworkVarNames "GameTime_t m_flGrappleShotAttackTime"
    // static metadata: MNetworkVarNames "Vector m_rgTargetPos"
    // static metadata: MNetworkVarNames "GameTime_t m_rgTargetPosTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_TangoTether : public server::CCitadelBaseAbility
    {
    public:
        int32_t m_iTargetPosIndex; // 0xad8        
        // m_hLockOnTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLockOnTarget;
        char m_hLockOnTarget[0x4]; // 0xadc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vecCastStartPos; // 0xae0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vecDashStartPos; // 0xaec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vecDashEndPos; // 0xaf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        QAngle m_angDashStartAng; // 0xb04        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDashStartTime; // 0xb10        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleStartTime; // 0xb14        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleArriveTime; // 0xb18        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xb1c        
        float m_flVelSpring; // 0xb20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flGrappleShotAttackTime; // 0xb24        
        int32_t m_nTicksNotMoving; // 0xb28        
        Vector m_vecPrevPos; // 0xb2c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // metadata: MNetworkEncoder "coord"
        Vector m_rgTargetPos[20]; // 0xb38        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_rgTargetPosTime[20]; // 0xc28        
        client::ParticleIndex_t m_nGrappleTravelEffect; // 0xc78        
        [[maybe_unused]] std::uint8_t pad_0xc7c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TangoTether because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_TangoTether) == 0xc80);
};
