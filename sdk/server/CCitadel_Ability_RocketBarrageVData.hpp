#pragma once
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1688
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_RocketBarrageVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BarrageModifier; // 0x14f0		
		CEmbeddedSubclass<server::CCitadelModifier> m_MoveSlowModifier; // 0x1500		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1510		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x15f0		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceSelected; // 0x1600		
		// MPropertyStartGroup "+Rocket Barrage Properties"
		float m_flMoveSpeedReductionPct; // 0x1680		
		float m_flHeightTestDistance; // 0x1684		
	};
};
