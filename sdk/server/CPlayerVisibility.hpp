#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f0
	// Has VTable
	// 
	// MNetworkVarNames "float m_flVisibilityStrength"
	// MNetworkVarNames "float m_flFogDistanceMultiplier"
	// MNetworkVarNames "float m_flFogMaxDensityMultiplier"
	// MNetworkVarNames "float m_flFadeTime"
	// MNetworkVarNames "bool m_bStartDisabled"
	// MNetworkVarNames "bool m_bIsEnabled"
	class CPlayerVisibility : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "PlayerVisibilityStateChanged"
		float m_flVisibilityStrength; // 0x4d8		
		// MNetworkEnable
		// MNetworkChangeCallback "PlayerVisibilityStateChanged"
		float m_flFogDistanceMultiplier; // 0x4dc		
		// MNetworkEnable
		// MNetworkChangeCallback "PlayerVisibilityStateChanged"
		float m_flFogMaxDensityMultiplier; // 0x4e0		
		// MNetworkEnable
		// MNetworkChangeCallback "PlayerVisibilityStateChanged"
		float m_flFadeTime; // 0x4e4		
		// MNetworkEnable
		bool m_bStartDisabled; // 0x4e8		
		// MNetworkEnable
		bool m_bIsEnabled; // 0x4e9		
		
		// Datamap fields:
		// bool InputEnable; // 0x0
		// bool InputDisable; // 0x0
		// float InputSetPlayerVisibilityStrength; // 0x0
		// float InputSetPlayerFogDistanceMultiplier; // 0x0
		// float InputSetPlayerFogMaxDensityMultiplier; // 0x0
	};
};
