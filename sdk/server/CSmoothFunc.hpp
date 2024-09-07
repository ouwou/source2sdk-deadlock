#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	// Has Trivial Destructor
	class CSmoothFunc
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		float m_flSmoothAmplitude; // 0x8		
		float m_flSmoothBias; // 0xc		
		float m_flSmoothDuration; // 0x10		
		float m_flSmoothRemainingTime; // 0x14		
		int32_t m_nSmoothDir; // 0x18		
	};
};
