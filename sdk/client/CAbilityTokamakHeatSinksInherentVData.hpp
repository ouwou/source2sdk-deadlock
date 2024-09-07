#pragma once
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
	// Size: 0x16e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityTokamakHeatSinksInherentVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HotTracerParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HotWeaponFxParticle; // 0x15d0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strHotWeaponShootSound; // 0x16b0		
		CSoundEventName m_strOverheatRed; // 0x16c0		
		CSoundEventName m_strOverheatFull; // 0x16d0		
	};
};
