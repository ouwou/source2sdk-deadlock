#pragma once
#include "animlib/CNmBoneMask__WeightInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	class CNmBoneMask
	{
	public:
		CGlobalSymbol m_ID; // 0x0		
		animlib::CNmBoneMask__WeightInfo_t m_weightInfo; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad0009[0xf]; // 0x9
	public:
		CUtlVector<float> m_weights; // 0x18		
	};
};
