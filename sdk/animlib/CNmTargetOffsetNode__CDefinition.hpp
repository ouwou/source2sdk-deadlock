#pragma once
#include "animlib/CNmTargetValueNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 16
	// Size: 0x40
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmTargetOffsetNode__CDefinition : public animlib::CNmTargetValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x10		
		bool m_bIsBoneSpaceOffset; // 0x12		
	private:
		[[maybe_unused]] uint8_t __pad0013[0xd]; // 0x13
	public:
		Quaternion m_rotationOffset; // 0x20		
		Vector m_translationOffset; // 0x30		
	};
};
