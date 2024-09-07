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
	// Size: 0x8b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_InvisVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisLoopParticle; // 0x5f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisDetectRadiusParticle; // 0x6d8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisRevealedParticle; // 0x7b8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strInvisRevealedSound; // 0x898		
		// MPropertyStartGroup "Behavior"
		bool m_bFadeInsteadOfRemoveOnBulletFire; // 0x8a8		
		bool m_bFadeInsteadOfRemoveOnAbilityUse; // 0x8a9		
		// MPropertyDescription "Fade from hidden to fully visible as invis is about to expire. Does not work with Aura applied invis, since that has no duration."
		bool m_bFadeToVisibleAtEndOfDuration; // 0x8aa		
	};
};
