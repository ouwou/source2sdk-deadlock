#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x17b8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_MobileResupplyVData : public server::CitadelAbilityVData
	{
	public:
		float m_flResupplyForceScale; // 0x14f0		
		float m_flResupplyUp; // 0x14f4		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strKilledSound; // 0x14f8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_AuraModifier; // 0x1508		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_DispenserModel; // 0x1518		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SprayParticle; // 0x15f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyedParticle; // 0x16d8		
	};
};
