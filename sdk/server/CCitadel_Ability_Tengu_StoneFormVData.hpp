#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1898
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Tengu_StoneFormVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x15d0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StoneFormParticle; // 0x16b0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_CastTargetSound; // 0x1790		
		CSoundEventName m_strImpactSound; // 0x17a0		
		// MPropertyDescription "Model"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strTrueFormModel; // 0x17b0		
		// MPropertyStartGroup "+Stone Form Params"
		float m_flLandHoldTime; // 0x1890		
		float m_flRisingTime; // 0x1894		
	};
};
