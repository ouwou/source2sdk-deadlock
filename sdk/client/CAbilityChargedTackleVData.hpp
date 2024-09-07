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
	// Size: 0x1620
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityChargedTackleVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargePreviewParticle; // 0x14f0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ChargePrepareModifier; // 0x15d0		
		CEmbeddedSubclass<client::CCitadelModifier> m_ChargeActiveModifier; // 0x15e0		
		CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier; // 0x15f0		
		CEmbeddedSubclass<client::CCitadelModifier> m_DragModifier; // 0x1600		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strHitSound; // 0x1610		
	};
};
