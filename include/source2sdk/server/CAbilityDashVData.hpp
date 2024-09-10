#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1868
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityDashVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_DashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashParticle;
        char m_DashParticle[0xe0]; // 0x14f0        
        // m_DownDashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DownDashParticle;
        char m_DownDashParticle[0xe0]; // 0x15d0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strArriveSound; // 0x16b0        
        CSoundEventName m_strStaminaDrainedSound; // 0x16c0        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x16d0        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x1750        
        // metadata: MPropertyStartGroup "Ground Dash Stuff"
        float m_flMaxAngDiff; // 0x17d0        
        float m_flDurationScaleForSpeed; // 0x17d4        
        float m_flSlideEarlyOutWindow; // 0x17d8        
        float m_flSlideLockoutTime; // 0x17dc        
        float m_flGroundDashAirbornDrag; // 0x17e0        
        float m_flGroundDashAirbornSpeedClamp; // 0x17e4        
        CSoundEventName m_strGroundDashActivate; // 0x17e8        
        CPiecewiseCurve m_curvePosition; // 0x17f8        
        float m_flGroundDashDuration; // 0x1838        
        float m_flGroundDashDistanceInMeters; // 0x183c        
        // metadata: MPropertyStartGroup "Air Dash Stuff"
        float m_flAirDashEndVelocityScale; // 0x1840        
        float m_flAirDashAccPct; // 0x1844        
        float m_flDuringDrag; // 0x1848        
        float m_flPostDrag; // 0x184c        
        float m_flPostDragDuration; // 0x1850        
        float m_flDownwardAirDashSpeed; // 0x1854        
        CSoundEventName m_strDashActivate; // 0x1858        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityDashVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityDashVData) == 0x1868);
};
