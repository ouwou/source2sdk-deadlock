#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include "server/CCitadel_Modifier_Base_Buildup.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_TargetPracticeEnemyVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x5f8		
		CEmbeddedSubclass<server::CCitadelModifier> m_BuildupCompleteModifier; // 0x608		
		CEmbeddedSubclass<server::CCitadel_Modifier_Base_Buildup> m_BuildupModifier; // 0x618		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetParticle; // 0x628		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle; // 0x708		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HeadParticle; // 0x7e8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strTargetHitSound; // 0x8c8		
		CSoundEventName m_strTargetHeadShotHitSound; // 0x8d8		
		CSoundEventName m_strTargetCompleteSound; // 0x8e8		
	};
};
