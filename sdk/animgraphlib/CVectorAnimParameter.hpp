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
	// MPropertyFriendlyName "Vector Parameter"
	class CVectorAnimParameter : public animgraphlib::CConcreteAnimParameter
	{
	public:
		// MPropertyFriendlyName "Default Value"
		Vector m_defaultValue; // 0x80		
		// MPropertyFriendlyName "Interpolate"
		bool m_bInterpolate; // 0x8c		
	};
};
