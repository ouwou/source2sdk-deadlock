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
	// Size: 0x16c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityMedicHealVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealBeamParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealTargetParticle; // 0x15d0		
		CGlobalSymbol m_sHealAnimParam; // 0x16b0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strHealCastSound; // 0x16b8		
	};
};
