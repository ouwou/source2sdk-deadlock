#pragma once
#include "animgraphlib/TraceSettings_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0x40
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class FootFixedSettings
	{
	public:
		animgraphlib::TraceSettings_t m_traceSettings; // 0x0		
		VectorAligned m_vFootBaseBindPosePositionMS; // 0x10		
		float m_flFootBaseLength; // 0x20		
		float m_flMaxRotationLeft; // 0x24		
		float m_flMaxRotationRight; // 0x28		
		int32_t m_footstepLandedTagIndex; // 0x2c		
		bool m_bEnableTracing; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
	public:
		float m_flTraceAngleBlend; // 0x34		
		int32_t m_nDisableTagIndex; // 0x38		
		int32_t m_nFootIndex; // 0x3c		
	};
};
