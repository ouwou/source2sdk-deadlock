#pragma once
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x778
	// Has VTable
	class CBubbling : public server::CBaseModelEntity
	{
	public:
		int32_t m_density; // 0x768		
		int32_t m_frequency; // 0x76c		
		int32_t m_state; // 0x770		
		
		// Datamap fields:
		// float m_flSpeed; // 0x344
		// void CBubblingFizzThink; // 0x0
		// void InputActivate; // 0x0
		// void InputDeactivate; // 0x0
		// void InputToggle; // 0x0
		// int32_t InputSetCurrent; // 0x0
		// int32_t InputSetDensity; // 0x0
		// int32_t InputSetFrequency; // 0x0
	};
};
