#pragma once
#include "animgraphlib/CConcreteAnimParameter.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0xa0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Quaternion Parameter"
	class CQuaternionAnimParameter : public animgraphlib::CConcreteAnimParameter
	{
	public:
		// MPropertyFriendlyName "Default Value"
		Quaternion m_defaultValue; // 0x80		
		// MPropertyFriendlyName "Interpolate"
		bool m_bInterpolate; // 0x90		
	};
};
