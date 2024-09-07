#pragma once
#include "modellib/CBaseConstraint.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 16
	// Size: 0xa0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CTiltTwistConstraint : public modellib::CBaseConstraint
	{
	public:
		int32_t m_nTargetAxis; // 0x68		
		int32_t m_nSlaveAxis; // 0x6c		
	};
};
