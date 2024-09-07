#pragma once
#include "server/CPhysConstraint.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x580
	// Has VTable
	class CPhysPulley : public server::CPhysConstraint
	{
	public:
		Vector m_position2; // 0x550		
		Vector m_offset[2]; // 0x55c		
		float m_addLength; // 0x574		
		float m_gearRatio; // 0x578		
	};
};
