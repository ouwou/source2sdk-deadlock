#pragma once
#include "entity2/GameTime_t.hpp"
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
	class CEnvTilt : public server::CPointEntity
	{
	public:
		float m_Duration; // 0x4d8		
		float m_Radius; // 0x4dc		
		float m_TiltTime; // 0x4e0		
		entity2::GameTime_t m_stopTime; // 0x4e4		
		
		// Datamap fields:
		// void InputStartTilt; // 0x0
		// void InputStopTilt; // 0x0
	};
};
