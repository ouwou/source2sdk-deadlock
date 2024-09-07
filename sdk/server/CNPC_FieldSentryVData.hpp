#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CNPC_SimpleAnimatingAIVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x330
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_FieldSentryVData : public server::CNPC_SimpleAnimatingAIVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserSightParticle; // 0x108		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KillExplosionParticle; // 0x1e8		
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DeployProgressModifier; // 0x2c8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sSpawnSound; // 0x2d8		
		CSoundEventName m_sKillExplosionSound; // 0x2e8		
		CSoundEventName m_sTargetAcquiredLocalSound; // 0x2f8		
		CSoundEventName m_sTargetAcquiredSound; // 0x308		
		// MPropertyStartGroup "Stats"
		float m_flIdleTurnSpeed; // 0x318		
		float m_flIdleTurnAngles; // 0x31c		
		float m_flTrooperTakeDamageMult; // 0x320		
		float m_flNeutralTakeDamageMulti; // 0x324		
		float m_flNotifyEventTime; // 0x328		
	};
};