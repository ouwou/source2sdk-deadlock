#pragma once
#include "modellib/CFootStride.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	class CFootMotion
	{
	public:
		CUtlVector<modellib::CFootStride> m_strides; // 0x0		
		CUtlString m_name; // 0x18		
		bool m_bAdditive; // 0x20		
	};
};
