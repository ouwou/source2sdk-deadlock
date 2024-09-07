#pragma once
#include "client/CCitadelModifierVData.hpp"
#include "client/CCitadel_Modifier_Base_Buildup.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x6f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Cadence_GrandFinale_BuffVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadel_Modifier_Base_Buildup> m_BuildUpModifier; // 0x5f8		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x608		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplodeSound; // 0x6e8		
	};
};
