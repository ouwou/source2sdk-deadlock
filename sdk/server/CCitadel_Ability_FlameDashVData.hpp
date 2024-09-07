#pragma once
#include "client/CitadelCameraOperationsSequence_t.hpp"
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
	// Size: 0x15a0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_FlameDashVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_FlameDashModifier; // 0x14f0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_DashBurstSound; // 0x1500		
		CSoundEventName m_ChargeHitSound; // 0x1510		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSpeedBoost; // 0x1520		
	};
};
