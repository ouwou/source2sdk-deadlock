#pragma once
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x18d0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityJumpVData : public client::CitadelAbilityVData
    {
    public:
        float m_flShootingLockoutAfterJump; // 0x1568        
        [[maybe_unused]] std::uint8_t pad_0x156c[0x4]; // 0x156c
        // metadata: MPropertyStartGroup "Visuals"
        // m_DashJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashJumpParticle;
        char m_DashJumpParticle[0xe0]; // 0x1570        
        // m_AirJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AirJumpParticle;
        char m_AirJumpParticle[0xe0]; // 0x1650        
        // m_WallJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallJumpParticle;
        char m_WallJumpParticle[0xe0]; // 0x1730        
        // metadata: MPropertyStartGroup "Air Jump"
        CSoundEventName m_AirJumpExecutedSound; // 0x1810        
        float m_flMantleRefundWindow; // 0x1820        
        float m_flZiplineRefundWindow; // 0x1824        
        float m_flLateJumpGraceWindow; // 0x1828        
        // metadata: MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
        float m_flMaxSpeedDelta; // 0x182c        
        // metadata: MPropertyStartGroup "Roll Jump"
        CSoundEventName m_strDashJumpActivate; // 0x1830        
        float m_flDashJumpStartTime; // 0x1840        
        float m_flDashJumpEndTime; // 0x1844        
        // metadata: MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
        float m_flDashJumpDistanceInMeters; // 0x1848        
        [[maybe_unused]] std::uint8_t pad_0x184c[0x4]; // 0x184c
        float m_flDashJumpVerticalSpeed; // 0x1850        
        float m_flDashJumpMissMaxSpeed; // 0x1854        
        float m_flDashJumpMantleDisableTime; // 0x1858        
        [[maybe_unused]] std::uint8_t pad_0x185c[0x4]; // 0x185c
        // metadata: MPropertyStartGroup "Wall Jump"
        CSoundEventName m_WallJumpExecutedSound; // 0x1860        
        // metadata: MPropertyDescription "How far we'll trace to see if the wall we collided with is close enough to trigger a wall jump"
        float m_flCollidedWallMaxDist; // 0x1870        
        // metadata: MPropertyDescription "How far we'll trace using the player's velocity to find a wall to jump off of"
        client::CRemapFloat m_flRemapSpeedToWallJumpVelocityDist; // 0x1874        
        // metadata: MPropertyDescription "Speed to apply away from the wall"
        float m_flWallJumpNormalSpeed; // 0x1884        
        // metadata: MPropertyDescription "Air-Drag after using a wall jump"
        CPiecewiseCurve m_WallJumpAirDragCurve; // 0x1888        
        // metadata: MPropertyDescription "How much player input can steer the velocity relative to the wall normal"
        float m_flMaxWallYawOffset; // 0x18c8        
        [[maybe_unused]] std::uint8_t pad_0x18cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityJumpVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityJumpVData) == 0x18d0);
};
