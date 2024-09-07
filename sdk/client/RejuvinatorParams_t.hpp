#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	struct RejuvinatorParams_t
	{
	public:
		float m_flRejuvinatorExpirationWarningTiming; // 0x0		
		float m_flRejuvinatorBuffDuration; // 0x4		
		float m_flRejuvinatorDropHeight; // 0x8		
		float m_flRejuvinatorDropDuration; // 0xc		
		CSoundEventName m_strRejuvPickupSound; // 0x10		
	};
};
