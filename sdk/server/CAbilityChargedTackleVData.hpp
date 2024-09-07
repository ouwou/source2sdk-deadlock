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
	// Size: 0x1620
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityChargedTackleVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargePreviewParticle; // 0x14f0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ChargePrepareModifier; // 0x15d0		
		CEmbeddedSubclass<server::CCitadelModifier> m_ChargeActiveModifier; // 0x15e0		
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier; // 0x15f0		
		CEmbeddedSubclass<server::CCitadelModifier> m_DragModifier; // 0x1600		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strHitSound; // 0x1610		
	};
};
