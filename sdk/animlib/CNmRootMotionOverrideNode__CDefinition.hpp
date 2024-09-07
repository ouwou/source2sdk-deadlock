#pragma once
#include "animlib/CNmBitFlags.hpp"
#include "animlib/CNmPassthroughNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmRootMotionOverrideNode__CDefinition : public animlib::CNmPassthroughNode__CDefinition
	{
	public:
		int16_t m_desiredMovingVelocityNodeIdx; // 0x18		
		int16_t m_desiredFacingDirectionNodeIdx; // 0x1a		
		int16_t m_linearVelocityLimitNodeIdx; // 0x1c		
		int16_t m_angularVelocityLimitNodeIdx; // 0x1e		
		float m_maxLinearVelocity; // 0x20		
		float m_maxAngularVelocityRadians; // 0x24		
		animlib::CNmBitFlags m_overrideFlags; // 0x28		
	};
};
