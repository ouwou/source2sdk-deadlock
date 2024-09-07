#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
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
	// Size: 0x16d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ProximityRitual_VData : public server::CitadelAbilityVData
	{
	public:
		float m_flThinkInterval; // 0x14f0		
	private:
		[[maybe_unused]] uint8_t __pad14f4[0x4]; // 0x14f4
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_UnitTargetParticle; // 0x14f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_PredatoryStatueModel; // 0x15d8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_PredatoryStatueModifier; // 0x16b8		
		// MPropertyStartGroup "Gameplay"
		float m_flHeavyMeleeDmg; // 0x16c8		
		float m_flLightMeleeDmg; // 0x16cc		
		float m_flAbilityDamageScale; // 0x16d0		
		float m_flNPCDamageMax; // 0x16d4		
	};
};
