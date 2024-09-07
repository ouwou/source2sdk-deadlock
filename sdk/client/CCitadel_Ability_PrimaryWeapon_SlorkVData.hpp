#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1830
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_PrimaryWeapon_SlorkVData : public client::CCitadel_Ability_PrimaryWeaponVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle; // 0x1538		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponShapeParticle; // 0x1618		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponRangeAssistParticle; // 0x16f8		
		int32_t m_nNumConePoints; // 0x17d8		
		float m_flRoundPerSecond; // 0x17dc		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x17e0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_PoisonSprayerHitSound; // 0x17f0		
		CSoundEventName m_WeaponLoopStartSound; // 0x1800		
		CSoundEventName m_WeaponLoopSound; // 0x1810		
		CSoundEventName m_WeaponLoopEndSound; // 0x1820		
	};
};
