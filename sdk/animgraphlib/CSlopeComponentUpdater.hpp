#pragma once
#include "animgraphlib/CAnimComponentUpdater.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSlopeComponentUpdater : public animgraphlib::CAnimComponentUpdater
	{
	private:
		[[maybe_unused]] uint8_t __pad0030[0x4]; // 0x30
	public:
		float m_flTraceDistance; // 0x34		
		animgraphlib::CAnimParamHandle m_hSlopeAngle; // 0x38		
		animgraphlib::CAnimParamHandle m_hSlopeAngleFront; // 0x3a		
		animgraphlib::CAnimParamHandle m_hSlopeAngleSide; // 0x3c		
		animgraphlib::CAnimParamHandle m_hSlopeHeading; // 0x3e		
		animgraphlib::CAnimParamHandle m_hSlopeNormal; // 0x40		
		animgraphlib::CAnimParamHandle m_hSlopeNormal_WorldSpace; // 0x42		
	};
};
