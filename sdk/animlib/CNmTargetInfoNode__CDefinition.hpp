#pragma once
#include "animlib/CNmFloatValueNode__CDefinition.hpp"
#include "animlib/CNmTargetInfoNode__Info_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmTargetInfoNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
	public:
		animlib::CNmTargetInfoNode__Info_t m_infoType; // 0x14		
		bool m_bIsWorldSpaceTarget; // 0x18		
	};
};
