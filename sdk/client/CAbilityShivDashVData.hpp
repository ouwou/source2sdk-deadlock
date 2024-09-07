#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x17e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityShivDashVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DashModifier; // 0x14f0		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashImpactEffect; // 0x1500		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashSwingEffect; // 0x15e0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashLineEffect; // 0x16c0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDashStartWithTargets; // 0x17a0		
		CSoundEventName m_strDashStartEcho; // 0x17b0		
		CSoundEventName m_strDashStartMiss; // 0x17c0		
		CSoundEventName m_strDashHitEnemy; // 0x17d0		
		// MPropertyStartGroup "+Dash Properties"
		float m_flEchoDelay; // 0x17e0		
	};
};