#pragma once
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
	// Size: 0x558
	// 
	// MGetKV3ClassDefaults
	struct IdolParams_t
	{
	public:
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_IdolModel; // 0x0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_ParachuteModel; // 0xe0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_CrateModel; // 0x1c0		
		CUtlString m_strLoopingSequenceName; // 0x2a0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdolReturnLocationParticle; // 0x2a8		
		float m_flIdolReturnLocationParticleScale; // 0x388		
	private:
		[[maybe_unused]] uint8_t __pad038c[0x4]; // 0x38c
	public:
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdolSpawnLocationParticle; // 0x390		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdolDroppingParticle; // 0x470		
		float m_flIdolDropHeight; // 0x550		
		float m_flIdolDropDuration; // 0x554		
	};
};
