#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1838
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_PrimaryWeapon_SlorkVData : public server::CCitadel_Ability_PrimaryWeaponVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle; // 0x1540		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponShapeParticle; // 0x1620		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponRangeAssistParticle; // 0x1700		
		int32_t m_nNumConePoints; // 0x17e0		
		float m_flRoundPerSecond; // 0x17e4		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x17e8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_PoisonSprayerHitSound; // 0x17f8		
		CSoundEventName m_WeaponLoopStartSound; // 0x1808		
		CSoundEventName m_WeaponLoopSound; // 0x1818		
		CSoundEventName m_WeaponLoopEndSound; // 0x1828		
	};
};
