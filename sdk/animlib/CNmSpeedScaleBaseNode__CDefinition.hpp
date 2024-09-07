#pragma once
#include "animlib/CNmPassthroughNode__CDefinition.hpp"
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
	class CNmSpeedScaleBaseNode__CDefinition : public animlib::CNmPassthroughNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad001a[0x2]; // 0x1a
	public:
		float m_flDefaultInputValue; // 0x1c		
	};
};
