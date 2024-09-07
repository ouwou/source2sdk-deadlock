#pragma once
#include "animgraphlib/CConcreteAnimParameter.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x90
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Float Parameter"
	class CFloatAnimParameter : public animgraphlib::CConcreteAnimParameter
	{
	public:
		// MPropertyFriendlyName "Default Value"
		float m_fDefaultValue; // 0x80		
		// MPropertyFriendlyName "Min Value"
		float m_fMinValue; // 0x84		
		// MPropertyFriendlyName "Max Value"
		float m_fMaxValue; // 0x88		
		// MPropertyFriendlyName "Interpolate"
		bool m_bInterpolate; // 0x8c		
	};
};
