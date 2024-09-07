#pragma once
#include "client/CBaseModifier.hpp"
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
	// Size: 0x15c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityBullChargeVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x14f0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_ModifierTossAirControlLockout; // 0x1570		
		CEmbeddedSubclass<client::CBaseModifier> m_ModifierWeaponPowerIncrease; // 0x1580		
		CEmbeddedSubclass<client::CBaseModifier> m_ModifierChargeDragEnemy; // 0x1590		
		CEmbeddedSubclass<client::CBaseModifier> m_ModifierBullCharging; // 0x15a0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strWallSlamSound; // 0x15b0		
		// MPropertyStartGroup "GamePlay"
		float m_flWallStunLookAheadDist; // 0x15c0		
	};
};
