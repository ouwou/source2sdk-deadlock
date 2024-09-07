#pragma once
#include "animationsystem/AnimParamType_t.hpp"
#include "animgraphlib/CAnimParameterBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x80
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CVirtualAnimParameter : public animgraphlib::CAnimParameterBase
	{
	public:
		CUtlString m_expressionString; // 0x70		
		animationsystem::AnimParamType_t m_eParamType; // 0x78		
	};
};
