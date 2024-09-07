#pragma once
#include "client/CAI_CitadelNPCVData.hpp"
#include "client/CCitadelModifier.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1128
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_MidBossVData : public client::CAI_CitadelNPCVData
	{
	public:
		int32_t m_iStartingHealth; // 0xf30		
		int32_t m_iHealthGainPerMinute; // 0xf34		
		float m_flAggroTime; // 0xf38		
	private:
		[[maybe_unused]] uint8_t __pad0f3c[0x4]; // 0xf3c
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DyingSmallExplosion; // 0xf40		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DyingFinalExplosion; // 0x1020		
		float m_flDyingDuration; // 0x1100		
	private:
		[[maybe_unused]] uint8_t __pad1104[0x4]; // 0x1104
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_KnockbackAura; // 0x1108		
		CEmbeddedSubclass<client::CCitadelModifier> m_AggroEnemy; // 0x1118		
	};
};
