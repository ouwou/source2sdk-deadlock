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
    // Size: 0x18a0
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
        char m_DashParticle[0xe0]; // 0x1528        
        // m_DownDashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DownDashParticle;
        char m_DownDashParticle[0xe0]; // 0x1608        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strArriveSound; // 0x16e8        
        CSoundEventName m_strStaminaDrainedSound; // 0x16f8        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x1708        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x1788        
        // metadata: MPropertyStartGroup "Ground Dash Stuff"
        float m_flMaxAngDiff; // 0x1808        
        float m_flDurationScaleForSpeed; // 0x180c        
        float m_flSlideEarlyOutWindow; // 0x1810        
        float m_flSlideLockoutTime; // 0x1814        
        float m_flGroundDashAirbornDrag; // 0x1818        
        float m_flGroundDashAirbornSpeedClamp; // 0x181c        
        CSoundEventName m_strGroundDashActivate; // 0x1820        
        CPiecewiseCurve m_curvePosition; // 0x1830        
        float m_flGroundDashDuration; // 0x1870        
        float m_flGroundDashDistanceInMeters; // 0x1874        
        // metadata: MPropertyStartGroup "Air Dash Stuff"
        float m_flAirDashEndVelocityScale; // 0x1878        
        float m_flAirDashAccPct; // 0x187c        
        float m_flDuringDrag; // 0x1880        
        float m_flPostDrag; // 0x1884        
        float m_flPostDragDuration; // 0x1888        
        float m_flDownwardAirDashSpeed; // 0x188c        
        CSoundEventName m_strDashActivate; // 0x1890        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityDashVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityDashVData) == 0x18a0);
};
