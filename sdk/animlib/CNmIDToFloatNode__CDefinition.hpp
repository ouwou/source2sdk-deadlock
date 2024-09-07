#pragma once
#include "animlib/CNmFloatValueNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x60
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmIDToFloatNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
	public:
		float m_defaultValue; // 0x14		
		CUtlLeanVectorFixedGrowable<CGlobalSymbol,5> m_IDs; // 0x18		
		CUtlLeanVectorFixedGrowable<float,5> m_values; // 0x48		
	};
};
