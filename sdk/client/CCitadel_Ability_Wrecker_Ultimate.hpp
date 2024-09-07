#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd80
	// Has VTable
	class CCitadel_Ability_Wrecker_Ultimate : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x20]; // 0xc60
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnGrabBeamAnglesChanged"
		QAngle m_angBeamAngles; // 0xc80		
	private:
		[[maybe_unused]] uint8_t __pad0c8c[0xc]; // 0xc8c
	public:
		bool m_bNeedsBeamReset; // 0xc98		
	};
};
