#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x6e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ImmobilizeTrapDOT_ThinkerVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticle; // 0x5f8		
		// MPropertyStartGroup "Gameplay"
		float m_flTickRate; // 0x6d8		
		float m_flHeight; // 0x6dc		
	};
};
