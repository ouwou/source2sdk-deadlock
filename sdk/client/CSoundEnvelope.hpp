#pragma once
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
	class CSoundEnvelope
	{
	public:
		float m_current; // 0x0		
		float m_target; // 0x4		
		float m_rate; // 0x8		
		bool m_forceupdate; // 0xc		
	};
};
