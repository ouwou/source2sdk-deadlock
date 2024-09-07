#pragma once
#include "client/CSimpleSimTimer.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc
	// Has Trivial Destructor
	class CStopwatchBase : public client::CSimpleSimTimer
	{
	public:
		bool m_fIsRunning; // 0x8		
	};
};
