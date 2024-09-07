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
	// Size: 0x18b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityHornetSnipeVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AssassinateShotParticleOwnerOnly; // 0x15d0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticle; // 0x16b0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticleOwnerOnly; // 0x1790		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SnipeModifier; // 0x1870		
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffOnKillModifier; // 0x1880		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strSnipeImpactSound; // 0x1890		
		// MPropertyStartGroup "+Snipe Properties"
		float m_flMinScopeTimeToShoot; // 0x18a0		
		float m_flScopeTimeToFullPower; // 0x18a4		
		float m_flScopeMinPowerFrac; // 0x18a8		
		float m_flFadeToBlackTime; // 0x18ac		
	};
};
