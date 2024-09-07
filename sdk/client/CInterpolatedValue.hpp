#pragma once
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
	class CInterpolatedValue
	{
	public:
		float m_flStartTime; // 0x0		
		float m_flEndTime; // 0x4		
		float m_flStartValue; // 0x8		
		float m_flEndValue; // 0xc		
		int32_t m_nInterpType; // 0x10		
	};
};
