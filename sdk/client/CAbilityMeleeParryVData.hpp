#pragma once
#include "client/CCitadelModifier.hpp"
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
	// Size: 0x1660
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityMeleeParryVData : public client::CitadelAbilityVData
	{
	public:
		float m_flWhiffDuration; // 0x14f0		
		float m_flMovementRestrictionTime; // 0x14f4		
		float m_flActiveTime; // 0x14f8		
		float m_flParryEndVisualTime; // 0x14fc		
		float m_flSuccessActiveTime; // 0x1500		
		float m_flBossVictimNoMeleeTime; // 0x1504		
		float m_flBossVictimCalmTime; // 0x1508		
	private:
		[[maybe_unused]] uint8_t __pad150c[0x4]; // 0x150c
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulParryParticle; // 0x1510		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strSuccessfulParrySound; // 0x15f0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryActiveModifier; // 0x1600		
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryVictimModifier; // 0x1610		
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryCooldownModifier; // 0x1620		
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryEndVisualModifier; // 0x1630		
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryBossVictimNoMeleeModifier; // 0x1640		
		CEmbeddedSubclass<client::CCitadelModifier> m_ParryBossVictimCalmModifier; // 0x1650		
	};
};
