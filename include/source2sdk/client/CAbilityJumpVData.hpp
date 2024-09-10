#pragma once
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
    // Size: 0x1840
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityJumpVData : public client::CitadelAbilityVData
    {
    public:
        float m_flShootingLockoutAfterJump; // 0x14f0        
        [[maybe_unused]] std::uint8_t pad_0x14f4[0x4]; // 0x14f4
        // metadata: MPropertyStartGroup "Visuals"
        // m_DashJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashJumpParticle;
        char m_DashJumpParticle[0xe0]; // 0x14f8        
        // m_AirJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AirJumpParticle;
        char m_AirJumpParticle[0xe0]; // 0x15d8        
        // m_WallJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallJumpParticle;
        char m_WallJumpParticle[0xe0]; // 0x16b8        
        // metadata: MPropertyStartGroup "Air Jump"
        CSoundEventName m_AirJumpExecutedSound; // 0x1798        
        float m_flMantleRefundWindow; // 0x17a8        
        float m_flZiplineRefundWindow; // 0x17ac        
        float m_flLateJumpGraceWindow; // 0x17b0        
        // metadata: MPropertyDescription "The most we'll adjust your speed in the input direction when performing an air jump"
        float m_flMaxSpeedDelta; // 0x17b4        
        // metadata: MPropertyStartGroup "Roll Jump"
        CSoundEventName m_strDashJumpActivate; // 0x17b8        
        float m_flDashJumpStartTime; // 0x17c8        
        float m_flDashJumpEndTime; // 0x17cc        
        // metadata: MPropertyDescription "How far a dash jump will send you forward.  This is on top of the ~8m already traveled by the dash."
        float m_flDashJumpDistanceInMeters; // 0x17d0        
        [[maybe_unused]] std::uint8_t pad_0x17d4[0x4]; // 0x17d4
        float m_flDashJumpVerticalSpeed; // 0x17d8        
        float m_flDashJumpMissMaxSpeed; // 0x17dc        
        float m_flDashJumpMantleDisableTime; // 0x17e0        
        [[maybe_unused]] std::uint8_t pad_0x17e4[0x4]; // 0x17e4
        // metadata: MPropertyStartGroup "Wall Jump"
        CSoundEventName m_WallJumpExecutedSound; // 0x17e8        
        // metadata: MPropertyDescription "How far we'll trace to see if the wall we collided with is close enough to trigger a wall jump"
        float m_flCollidedWallMaxDist; // 0x17f8        
        // metadata: MPropertyStartGroup "Speed to apply away from the wall"
        float m_flWallJumpNormalSpeed; // 0x17fc        
        CPiecewiseCurve m_WallJumpAirDragCurve; // 0x1800        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityJumpVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityJumpVData) == 0x1840);
};
