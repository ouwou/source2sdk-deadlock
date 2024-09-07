#pragma once
#include "modellib/CFlexOp.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	class CFlexRule
	{
	public:
		int32_t m_nFlex; // 0x0		
		CUtlVector<modellib::CFlexOp> m_FlexOps; // 0x8		
	};
};
