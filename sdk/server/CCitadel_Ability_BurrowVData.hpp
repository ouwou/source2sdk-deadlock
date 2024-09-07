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
	// Size: 0x18a8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_BurrowVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowStartParticle; // 0x15d0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowEndParticle; // 0x16b0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BurrowInGroundParticle; // 0x1790		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BurrowModifier; // 0x1870		
		CEmbeddedSubclass<server::CCitadelModifier> m_SpinModifier; // 0x1880		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strBurrowEndSound; // 0x1890		
		// MPropertyStartGroup "+Burrow Properties"
		float m_flChannelEndEnemyPopUpForce; // 0x18a0		
		float m_flChannelEndEnemyPopUpCylinderHeight; // 0x18a4		
	};
};
