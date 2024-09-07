#pragma once
#include "client/CStopwatchBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x14
	// Has Trivial Destructor
	class CRandStopwatch : public client::CStopwatchBase
	{
	public:
		float m_minInterval; // 0xc		
		float m_maxInterval; // 0x10		
	};
};
