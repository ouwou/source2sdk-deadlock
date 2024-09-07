#pragma once
#include "animlib/CNmTargetValueNode__CDefinition.hpp"
#include "animlib/NmCachedValueMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x18
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmCachedTargetNode__CDefinition : public animlib::CNmTargetValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
	public:
		animlib::NmCachedValueMode_t m_mode; // 0x14		
	};
};
