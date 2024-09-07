#pragma once
#include "client/CCitadelModifierVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xa98
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_PsychicDagger_MakeDaggers_VData : public client::CCitadelModifierVData
	{
	public:
		float m_flDesatAmount; // 0x5f8		
		Color m_DesatTint; // 0x5fc		
		Color m_SatTint; // 0x600		
		Color m_Outline; // 0x604		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerShot; // 0x608		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerSpawn; // 0x6e8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerAoE; // 0x7c8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerTargetPreview; // 0x8a8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerShotFail; // 0x988		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_DaggerFireSound; // 0xa68		
		CSoundEventName m_DaggerMissSound; // 0xa78		
		CSoundEventName m_LastDaggerMissSound; // 0xa88		
	};
};
