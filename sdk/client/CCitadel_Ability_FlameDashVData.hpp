#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x15a0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_FlameDashVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_FlameDashModifier; // 0x14f0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_DashBurstSound; // 0x1500		
		CSoundEventName m_ChargeHitSound; // 0x1510		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSpeedBoost; // 0x1520		
	};
};
