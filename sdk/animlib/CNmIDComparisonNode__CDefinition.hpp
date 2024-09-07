#pragma once
#include "animlib/CNmBoolValueNode__CDefinition.hpp"
#include "animlib/CNmIDComparisonNode__Comparison_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x40
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmIDComparisonNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x10		
		animlib::CNmIDComparisonNode__Comparison_t m_comparison; // 0x12		
	private:
		[[maybe_unused]] uint8_t __pad0013[0x5]; // 0x13
	public:
		CUtlLeanVectorFixedGrowable<CGlobalSymbol,4> m_comparisionIDs; // 0x18		
	};
};
