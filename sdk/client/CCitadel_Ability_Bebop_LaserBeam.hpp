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
	// Size: 0xde0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bAirCast"
	// MNetworkVarNames "Vector m_vBeamAimPos"
	class CCitadel_Ability_Bebop_LaserBeam : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x150]; // 0xc60
	public:
		bool m_bZoomed; // 0xdb0		
		// MNetworkEnable
		bool m_bAirCast; // 0xdb1		
	private:
		[[maybe_unused]] uint8_t __pad0db2[0x2]; // 0xdb2
	public:
		// MNetworkEnable
		Vector m_vBeamAimPos; // 0xdb4		
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkChangeCallback "OnBebopBeamAnglesChanged"
		QAngle m_angBeamAngles; // 0xdc0		
	private:
		[[maybe_unused]] uint8_t __pad0dcc[0xc]; // 0xdcc
	public:
		bool m_bNeedsBeamReset; // 0xdd8		
	};
};
