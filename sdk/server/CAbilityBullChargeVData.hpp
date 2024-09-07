#pragma once
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x15c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityBullChargeVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x14f0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_ModifierTossAirControlLockout; // 0x1570		
		CEmbeddedSubclass<server::CBaseModifier> m_ModifierWeaponPowerIncrease; // 0x1580		
		CEmbeddedSubclass<server::CBaseModifier> m_ModifierChargeDragEnemy; // 0x1590		
		CEmbeddedSubclass<server::CBaseModifier> m_ModifierBullCharging; // 0x15a0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strWallSlamSound; // 0x15b0		
		// MPropertyStartGroup "GamePlay"
		float m_flWallStunLookAheadDist; // 0x15c0		
	};
};
