#pragma once
#include "client/BreakablePowerupDropDefinition_t.hpp"
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
	// Size: 0x2f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_PickupItemSpawnerVData : public client::CEntitySubclassVDataBase
	{
	public:
		// MPropertyGroupName "Visuals"
		// MPropertyDescription "Model"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_hModel; // 0x28		
		float m_flModelScale; // 0x108		
	private:
		[[maybe_unused]] uint8_t __pad010c[0x4]; // 0x10c
	public:
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InactiveParticle; // 0x110		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ActiveParticle; // 0x1f0		
		// MPropertyStartGroup "Pickup rewards"
		CUtlVector<client::BreakablePowerupDropDefinition_t> m_vecPrimaryPickups; // 0x2d0		
		// MPropertyStartGroup "Gameplay"
		float m_flInitialSpawnTime; // 0x2e8		
		float m_flRespawnTime; // 0x2ec		
		float m_flInitialSpawnTimeTest; // 0x2f0		
		float m_flRespawnTimeTest; // 0x2f4		
	};
};
