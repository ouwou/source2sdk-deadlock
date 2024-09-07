#pragma once
#include "animgraphlib/CCachedPose.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CStaticPoseCache
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		CUtlVector<animgraphlib::CCachedPose> m_poses; // 0x10		
		int32_t m_nBoneCount; // 0x28		
		int32_t m_nMorphCount; // 0x2c		
	};
};
