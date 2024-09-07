#pragma once
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include "animgraphlib/FollowTargetOpFixedSettings_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x88
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CFollowTargetUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	public:
		animgraphlib::FollowTargetOpFixedSettings_t m_opFixedData; // 0x68		
	private:
		[[maybe_unused]] uint8_t __pad0078[0x8]; // 0x78
	public:
		animgraphlib::CAnimParamHandle m_hParameterPosition; // 0x80		
		animgraphlib::CAnimParamHandle m_hParameterOrientation; // 0x82		
	};
};
