#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1938
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Bull_LeapVData : public server::CitadelAbilityVData
	{
	public:
		CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x14f0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BoostModifier; // 0x1530		
		CEmbeddedSubclass<server::CCitadelModifier> m_CrashModifier; // 0x1540		
		CEmbeddedSubclass<server::CCitadelModifier> m_ImmunityModifier; // 0x1550		
		CEmbeddedSubclass<server::CCitadelModifier> m_LandingBonusesModifier; // 0x1560		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TakeOffParticle; // 0x1570		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1650		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle; // 0x1730		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_nHoverParticle; // 0x1810		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strCrashingSound; // 0x18f0		
		CSoundEventName m_strImpactSound; // 0x1900		
		// MPropertyStartGroup "GamePlay"
		float m_flStartupTime; // 0x1910		
		float m_flForwardBoostSpeed; // 0x1914		
		float m_flUpBoostSpeed; // 0x1918		
		float m_flBoostTurnRate; // 0x191c		
		float m_flHoverTime; // 0x1920		
		float m_flMinAimAngle; // 0x1924		
		float m_flBoostGain; // 0x1928		
		float m_flBoostTime; // 0x192c		
		float m_flLandingTime; // 0x1930		
		float m_flCrashSpeed; // 0x1934		
	};
};
