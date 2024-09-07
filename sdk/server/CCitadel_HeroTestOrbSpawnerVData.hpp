#pragma once
#include "client/CEntitySubclassVDataBase.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x2d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_HeroTestOrbSpawnerVData : public client::CEntitySubclassVDataBase
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_hModel; // 0x28		
		float m_flModelScale; // 0x108		
		float m_flSpawnOffset; // 0x10c		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmbientParticle; // 0x110		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpawnParticle; // 0x1f0		
	};
};
