#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 4
	// Size: 0x10
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FollowTargetOpFixedSettings_t
	{
	public:
		int32_t m_boneIndex; // 0x0		
		bool m_bBoneTarget; // 0x4		
	private:
		[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
	public:
		int32_t m_boneTargetIndex; // 0x8		
		bool m_bWorldCoodinateTarget; // 0xc		
		bool m_bMatchTargetOrientation; // 0xd		
	};
};
