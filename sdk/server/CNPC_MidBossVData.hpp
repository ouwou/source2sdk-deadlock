#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CAI_CitadelNPCVData.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1128
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_MidBossVData : public server::CAI_CitadelNPCVData
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
		CEmbeddedSubclass<server::CCitadelModifier> m_KnockbackAura; // 0x1108		
		CEmbeddedSubclass<server::CCitadelModifier> m_AggroEnemy; // 0x1118		
	};
};
