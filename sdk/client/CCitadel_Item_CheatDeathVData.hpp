#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelItemVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1728
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Item_CheatDeathVData : public client::CitadelItemVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamagePulseParticle; // 0x1538		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamageTargetParticle; // 0x1618		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sHealPulseSound; // 0x16f8		
		CSoundEventName m_sHealAndDamagePulseSound; // 0x1708		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DeathImmuneModifier; // 0x1718		
	};
};
