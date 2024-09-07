#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x17f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityExplosiveBarrelVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrelExplodeParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MirvExplodeParticle; // 0x15d0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrelBurnParticle; // 0x16b0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x1790		
		CSoundEventName m_strMirvExplodeSound; // 0x17a0		
		CSoundEventName m_strRiccochetSound; // 0x17b0		
		CSoundEventName m_strBarrelSoundLp; // 0x17c0		
		CSoundEventName m_strBarrelLaunchSound; // 0x17d0		
		CSoundEventName m_strBarrelMeleedSound; // 0x17e0		
	};
};
