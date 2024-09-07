#pragma once
#include "server/CFuncPlat.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x830
	// Has VTable
	class CFuncPlatRot : public server::CFuncPlat
	{
	public:
		QAngle m_end; // 0x818		
		QAngle m_start; // 0x824		
	};
};
