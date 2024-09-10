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
	// Size: 0x1688
	// Has VTable
	class CNPC_SurveillanceDrone : public server::CNPC_FlyingDrone
	{
	public:
		int32_t m_iMinionHealth; // 0x1628		
		float m_flLifetime; // 0x162c		
	private:
		[[maybe_unused]] uint8_t __pad1630[0xc]; // 0x1630
	public:
		Vector m_vecHome; // 0x163c		
	private:
		[[maybe_unused]] uint8_t __pad1648[0x10]; // 0x1648
	public:
		int32_t m_nAbilityLevel; // 0x1658		
	};
};
