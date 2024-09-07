#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4e8
	// Has VTable
	class CEnvViewPunch : public server::CPointEntity
	{
	public:
		float m_flRadius; // 0x4d8		
		QAngle m_angViewPunch; // 0x4dc		
		
		// Datamap fields:
		// void InputViewPunch; // 0x0
	};
};
