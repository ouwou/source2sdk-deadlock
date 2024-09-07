#pragma once
#include "animlib/CNmBitFlags.hpp"
#include "animlib/CNmIDValueNode__CDefinition.hpp"
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
	class CNmIDEventNode__CDefinition : public animlib::CNmIDValueNode__CDefinition
	{
	public:
		int16_t m_nSourceStateNodeIdx; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
	public:
		animlib::CNmBitFlags m_eventConditionRules; // 0x14		
		CGlobalSymbol m_defaultValue; // 0x18		
	};
};
