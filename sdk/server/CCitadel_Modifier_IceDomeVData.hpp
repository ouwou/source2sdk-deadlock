#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_IceDomeVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_BlockerModel; // 0x5f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DomeParticle; // 0x6d8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_FriendlyAuraModifier; // 0x7b8		
		CEmbeddedSubclass<server::CCitadelModifier> m_EnemyAuraModifier; // 0x7c8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDomeEndSound; // 0x7d8		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strTargetLoopingSound; // 0x7e8		
	};
};
