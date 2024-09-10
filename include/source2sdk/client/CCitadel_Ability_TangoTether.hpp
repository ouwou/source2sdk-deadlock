#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xe00
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
    class CCitadel_Ability_TangoTether : public client::C_CitadelBaseAbility
    {
    public:
        client::SatVolumeIndex_t m_desatVolIdx; // 0xc60        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vecCastStartPos; // 0xc64        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vecDashStartPos; // 0xc70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vecDashEndPos; // 0xc7c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        QAngle m_angDashStartAng; // 0xc88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDashStartTime; // 0xc94        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleStartTime; // 0xc98        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGrappleArriveTime; // 0xc9c        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xca0        
        float m_flVelSpring; // 0xca4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flGrappleShotAttackTime; // 0xca8        
        int32_t m_nTicksNotMoving; // 0xcac        
        Vector m_vecPrevPos; // 0xcb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // metadata: MNetworkEncoder "coord"
        Vector m_rgTargetPos[20]; // 0xcbc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_rgTargetPosTime[20]; // 0xdac        
        client::ParticleIndex_t m_nGrappleTravelEffect; // 0xdfc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TangoTether because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_TangoTether) == 0xe00);
};
