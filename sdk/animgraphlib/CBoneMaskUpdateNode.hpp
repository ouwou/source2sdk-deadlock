#pragma once
#include "animgraphlib/AnimValueSource.hpp"
#include "animgraphlib/BinaryNodeChildOption.hpp"
#include "animgraphlib/BoneMaskBlendSpace.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CBinaryUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xa8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CBoneMaskUpdateNode : public animgraphlib::CBinaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0088[0x4]; // 0x88
	public:
		int32_t m_nWeightListIndex; // 0x8c		
		float m_flRootMotionBlend; // 0x90		
		animgraphlib::BoneMaskBlendSpace m_blendSpace; // 0x94		
		animgraphlib::BinaryNodeChildOption m_footMotionTiming; // 0x98		
		bool m_bUseBlendScale; // 0x9c		
	private:
		[[maybe_unused]] uint8_t __pad009d[0x3]; // 0x9d
	public:
		animgraphlib::AnimValueSource m_blendValueSource; // 0xa0		
		animgraphlib::CAnimParamHandle m_hBlendParameter; // 0xa4		
	};
};
