#pragma once
#include "client/C_BaseEntity.hpp"
#include "client/fogparams_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5c8
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "fogparams_t m_fog"
	class C_FogController : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		client::fogparams_t m_fog; // 0x558		
		bool m_bUseAngles; // 0x5c0		
	private:
		[[maybe_unused]] uint8_t __pad05c1[0x3]; // 0x5c1
	public:
		int32_t m_iChangedVariables; // 0x5c4		
		
		// Datamap fields:
		// float InputSetStartDist; // 0x0
		// float InputSetEndDist; // 0x0
		// float InputSetMaxDensity; // 0x0
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// Color InputSetColor; // 0x0
		// Color InputSetColorSecondary; // 0x0
		// int32_t InputSetFarZ; // 0x0
		// CUtlSymbolLarge InputSetAngles; // 0x0
		// float InputSet2DSkyboxFogFactor; // 0x0
		// Color InputSetColorLerpTo; // 0x0
		// Color InputSetColorSecondaryLerpTo; // 0x0
		// float InputSetStartDistLerpTo; // 0x0
		// float InputSetEndDistLerpTo; // 0x0
		// float InputSetMaxDensityLerpTo; // 0x0
		// float InputSet2DSkyboxFogFactorLerpTo; // 0x0
		// void InputStartFogTransition; // 0x0
		// void C_FogControllerSetLerpValues; // 0x0
	};
};
