#pragma once
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
    // Size: 0x18c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityDashVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_DashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashParticle;
        char m_DashParticle[0xe0]; // 0x1540        
        // m_DownDashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DownDashParticle;
        char m_DownDashParticle[0xe0]; // 0x1620        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strArriveSound; // 0x1700        
        CSoundEventName m_strStaminaDrainedSound; // 0x1710        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x1720        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x17a8        
        // metadata: MPropertyStartGroup "Ground Dash Stuff"
        float m_flMaxAngDiff; // 0x1830        
        float m_flDurationScaleForSpeed; // 0x1834        
        float m_flSlideEarlyOutWindow; // 0x1838        
        float m_flSlideLockoutTime; // 0x183c        
        float m_flGroundDashAirbornDrag; // 0x1840        
        float m_flGroundDashAirbornSpeedClamp; // 0x1844        
        CSoundEventName m_strGroundDashActivate; // 0x1848        
        CPiecewiseCurve m_curvePosition; // 0x1858        
        float m_flGroundDashDuration; // 0x1898        
        float m_flGroundDashDistanceInMeters; // 0x189c        
        // metadata: MPropertyStartGroup "Air Dash Stuff"
        float m_flAirDashEndVelocityScale; // 0x18a0        
        float m_flAirDashAccPct; // 0x18a4        
        float m_flDuringDrag; // 0x18a8        
        float m_flPostDrag; // 0x18ac        
        float m_flPostDragDuration; // 0x18b0        
        float m_flDownwardAirDashSpeed; // 0x18b4        
        CSoundEventName m_strDashActivate; // 0x18b8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityDashVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityDashVData) == 0x18c8);
};
