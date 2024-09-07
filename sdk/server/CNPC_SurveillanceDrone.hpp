#pragma once
#include "server/CNPC_FlyingDrone.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1660
	// Has VTable
	class CNPC_SurveillanceDrone : public server::CNPC_FlyingDrone
	{
	public:
		int32_t m_iMinionHealth; // 0x1600		
		float m_flLifetime; // 0x1604		
	private:
		[[maybe_unused]] uint8_t __pad1608[0xc]; // 0x1608
	public:
		Vector m_vecHome; // 0x1614		
	private:
		[[maybe_unused]] uint8_t __pad1620[0x10]; // 0x1620
	public:
		int32_t m_nAbilityLevel; // 0x1630		
	};
};
