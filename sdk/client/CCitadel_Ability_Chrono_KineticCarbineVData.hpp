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
	// Size: 0x1598
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Chrono_KineticCarbineVData : public client::CitadelAbilityVData
	{
	public:
		float m_flShotTimeScaleLingerDuration; // 0x14f0		
	private:
		[[maybe_unused]] uint8_t __pad14f4[0x4]; // 0x14f4
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ChargingModifier; // 0x14f8		
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1508		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraKineticCarbineShotFired; // 0x1518		
	};
};
