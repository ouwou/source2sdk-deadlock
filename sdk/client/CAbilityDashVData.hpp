#pragma once
#include "client/CitadelAbilityVData.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1868
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityDashVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DownDashParticle; // 0x15d0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strArriveSound; // 0x16b0		
		CSoundEventName m_strStaminaDrainedSound; // 0x16c0		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x16d0		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x1750		
		// MPropertyStartGroup "Ground Dash Stuff"
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
		// MPropertyStartGroup "Air Dash Stuff"
		float m_flAirDashEndVelocityScale; // 0x1840		
		float m_flAirDashAccPct; // 0x1844		
		float m_flDuringDrag; // 0x1848		
		float m_flPostDrag; // 0x184c		
		float m_flPostDragDuration; // 0x1850		
		float m_flDownwardAirDashSpeed; // 0x1854		
		CSoundEventName m_strDashActivate; // 0x1858		
	};
};
