#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CCitadelYamatoBaseVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1a18
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityPowerSlashVData : public client::CCitadelYamatoBaseVData
	{
	public:
		float m_flAirDrag; // 0x14f8		
		float m_flMaxPowerPadding; // 0x14fc		
		float m_flEffectGroundTrace; // 0x1500		
		float m_flWhizbyMaxRange; // 0x1504		
		float m_flStartPosTestCapsuleLength; // 0x1508		
		// MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
		Vector m_vecLongEffectOffset; // 0x150c		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashParticle; // 0x1518		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashFullParticle; // 0x15f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x16d8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x17b8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerUpParticle; // 0x1898		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strStartSound; // 0x1978		
		CSoundEventName m_strDamageImpactSound; // 0x1988		
		CSoundEventName m_strDamageImpactVictimSound; // 0x1998		
		CSoundEventName m_strPowerUp1Sounds; // 0x19a8		
		CSoundEventName m_strPowerUp2Sounds; // 0x19b8		
		CSoundEventName m_strPowerUp3Sounds; // 0x19c8		
		CSoundEventName m_strWhizbySound; // 0x19d8		
		CSoundEventName m_strSlashSound; // 0x19e8		
		CSoundEventName m_strSlashFullSound; // 0x19f8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_SlowModifier; // 0x1a08		
	};
};
