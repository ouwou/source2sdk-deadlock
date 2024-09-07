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
	// Size: 0x16e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityNanoWarpVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeSlowParticle; // 0x15d0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x16b0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier; // 0x16c0		
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x16d0		
		// MPropertyStartGroup "Gameplay"
		float m_flWarpDistanceFromTarget; // 0x16e0		
	};
};
