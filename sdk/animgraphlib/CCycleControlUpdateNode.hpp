#pragma once
#include "animgraphlib/AnimValueSource.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x70
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCycleControlUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	public:
		animgraphlib::AnimValueSource m_valueSource; // 0x68		
		animgraphlib::CAnimParamHandle m_paramIndex; // 0x6c		
	};
};
