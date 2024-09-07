#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 4
	// Size: 0x1c
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct SkeletonAnimCapture_t__FrameStamp_t
	{
	public:
		float m_flTime; // 0x0		
		float m_flEntitySimTime; // 0x4		
		bool m_bTeleportTick; // 0x8		
		bool m_bPredicted; // 0x9		
	private:
		[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
	public:
		float m_flCurTime; // 0xc		
		float m_flRealTime; // 0x10		
		int32_t m_nFrameCount; // 0x14		
		int32_t m_nTickCount; // 0x18		
	};
};
