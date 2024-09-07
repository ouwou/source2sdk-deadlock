#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CCitadelYamatoBaseVData.hpp"
#include "client/CRemapFloat.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x18b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelAbilityHealingSlashVData : public client::CCitadelYamatoBaseVData
	{
	public:
		float m_flEffectSize; // 0x14f8		
		float m_flMaxAttackAngle; // 0x14fc		
		client::CRemapFloat m_remapAngleToTime; // 0x1500		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_DebuffModifier; // 0x1510		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1520		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealingSlashParticle; // 0x1600		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealingSlashSwordGlow; // 0x16e0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle; // 0x17c0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDamageTarget; // 0x18a0		
	};
};
