#pragma once
#include "animgraphlib/CAnimActionUpdater.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSetParameterActionUpdater : public animgraphlib::CAnimActionUpdater
	{
	public:
		animgraphlib::CAnimParamHandle m_hParam; // 0x18		
		CAnimVariant m_value; // 0x1a		
	};
};
