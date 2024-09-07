#pragma once
#include "animgraphlib/BinaryNodeChildOption.hpp"
#include "animgraphlib/CBinaryUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x98
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSubtractUpdateNode : public animgraphlib::CBinaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0088[0x4]; // 0x88
	public:
		animgraphlib::BinaryNodeChildOption m_footMotionTiming; // 0x8c		
		bool m_bApplyToFootMotion; // 0x90		
		bool m_bApplyChannelsSeparately; // 0x91		
		bool m_bUseModelSpace; // 0x92		
	};
};
