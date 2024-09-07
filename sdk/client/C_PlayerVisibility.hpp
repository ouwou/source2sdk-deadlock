#pragma once
#include "client/C_BaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x588
	// Has VTable
	// 
	// MNetworkVarNames "float m_flVisibilityStrength"
	// MNetworkVarNames "float m_flFogDistanceMultiplier"
	// MNetworkVarNames "float m_flFogMaxDensityMultiplier"
	// MNetworkVarNames "float m_flFadeTime"
	// MNetworkVarNames "bool m_bStartDisabled"
	// MNetworkVarNames "bool m_bIsEnabled"
	class C_PlayerVisibility : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "PlayerVisibilityStateChanged"
		float m_flVisibilityStrength; // 0x558		
		// MNetworkEnable
		// MNetworkChangeCallback "PlayerVisibilityStateChanged"
		float m_flFogDistanceMultiplier; // 0x55c		
		// MNetworkEnable
		// MNetworkChangeCallback "PlayerVisibilityStateChanged"
		float m_flFogMaxDensityMultiplier; // 0x560		
		// MNetworkEnable
		// MNetworkChangeCallback "PlayerVisibilityStateChanged"
		float m_flFadeTime; // 0x564		
		// MNetworkEnable
		bool m_bStartDisabled; // 0x568		
		// MNetworkEnable
		bool m_bIsEnabled; // 0x569		
		
		// Datamap fields:
		// bool InputEnable; // 0x0
		// bool InputDisable; // 0x0
		// float InputSetPlayerVisibilityStrength; // 0x0
		// float InputSetPlayerFogDistanceMultiplier; // 0x0
		// float InputSetPlayerFogMaxDensityMultiplier; // 0x0
	};
};
