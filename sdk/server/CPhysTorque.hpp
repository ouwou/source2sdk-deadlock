#pragma once
#include "server/CPhysForce.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x548
	// Has VTable
	class CPhysTorque : public server::CPhysForce
	{
	public:
		Vector m_axis; // 0x538		
	};
};
