#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x7f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_IceDomeVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_BlockerModel; // 0x5f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DomeParticle; // 0x6d8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_FriendlyAuraModifier; // 0x7b8		
		CEmbeddedSubclass<client::CCitadelModifier> m_EnemyAuraModifier; // 0x7c8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDomeEndSound; // 0x7d8		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strTargetLoopingSound; // 0x7e8		
	};
};
