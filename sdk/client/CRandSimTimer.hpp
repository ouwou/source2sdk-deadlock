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
	// Size: 0x10
	// Has Trivial Destructor
	class CRandSimTimer : public client::CSimpleSimTimer
	{
	public:
		float m_minInterval; // 0x8		
		float m_maxInterval; // 0xc		
	};
};
