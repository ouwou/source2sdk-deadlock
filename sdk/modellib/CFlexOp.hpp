#pragma once
#include "modellib/FlexOpCode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 4
	// Size: 0x8
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CFlexOp
	{
	public:
		modellib::FlexOpCode_t m_OpCode; // 0x0		
		int32_t m_Data; // 0x4		
	};
};
