#pragma once
#include "client/AttackData_t.hpp"
#include "client/CRemapFloat.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "client/EMeleeHold_AttackType.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CAbilityMeleeVData.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1920
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityHoldMelee_VData : public server::CAbilityMeleeVData
	{
	public:
		CUtlOrderedMap<client::EMeleeHold_AttackType,client::AttackData_t> m_mapAttacks; // 0x1508		
		float m_flNextAttackOnParry; // 0x1530		
		float m_flParryWindow; // 0x1534		
		float m_flParryStunTime; // 0x1538		
		float m_flParryCooldown; // 0x153c		
		client::CRemapFloat m_AirMeleeUpScale; // 0x1540		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBeginEffect; // 0x1550		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SuccessfulParryParticle; // 0x1630		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ParryActivateParticle; // 0x1710		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceHoldStart; // 0x17f0		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceHitImpact; // 0x1870		
		// MPropertyStartGroup "Sounds"
		// MPropertyDescription "Sound to play when starting the hold"
		CSoundEventName m_strHoldBegin; // 0x18f0		
		CSoundEventName m_strSuccessfulParrySound; // 0x1900		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ParryVictimModifier; // 0x1910		
	};
};
