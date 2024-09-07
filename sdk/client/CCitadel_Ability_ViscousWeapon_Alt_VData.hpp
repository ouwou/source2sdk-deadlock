#pragma once
#include "client/CitadelAbilityVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x17c0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ViscousWeapon_Alt_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strChargingParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x15d0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FiringParticle; // 0x16b0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplosionSound; // 0x1790		
		CSoundEventName m_ChargeSound; // 0x17a0		
		CSoundEventName m_ShootSound; // 0x17b0		
	};
};
