#pragma once
#include "animationsystem/AnimParamType_t.hpp"
#include "animgraphlib/CAnimActionUpdater.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "modellib/AnimScriptHandle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CExpressionActionUpdater : public animgraphlib::CAnimActionUpdater
	{
	public:
		animgraphlib::CAnimParamHandle m_hParam; // 0x18		
		animationsystem::AnimParamType_t m_eParamType; // 0x1a		
	private:
		[[maybe_unused]] uint8_t __pad001b[0x1]; // 0x1b
	public:
		modellib::AnimScriptHandle m_hScript; // 0x1c		
	};
};
