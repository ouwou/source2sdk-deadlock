#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 16
	// Size: 0x50
	// 
	// MGetKV3ClassDefaults
	class CNmRootMotionData
	{
	public:
		CUtlVector<CTransform> m_transforms; // 0x0		
		int32_t m_nNumFrames; // 0x18		
		float m_flAverageLinearVelocity; // 0x1c		
		float m_flAverageAngularVelocityRadians; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0024[0xc]; // 0x24
	public:
		CTransform m_totalDelta; // 0x30		
	};
};
