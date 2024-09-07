#pragma once
#include "client/CCitadel_Modifier_BaseBulletPreRollProcVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x808
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ExplosiveBulletsVData : public client::CCitadel_Modifier_BaseBulletPreRollProcVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x718		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplodeSound; // 0x7f8		
	};
};
