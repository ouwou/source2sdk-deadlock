#pragma once
#include "animlib/CNmBitFlags.hpp"
#include "animlib/CNmPoseNode__CDefinition.hpp"
#include "animlib/NmEasingOperation_t.hpp"
#include "animlib/NmPercent_t.hpp"
#include "animlib/NmRootMotionBlendMode_t.hpp"
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
	class CNmTransitionNode__CDefinition : public animlib::CNmPoseNode__CDefinition
	{
	public:
		int16_t m_nTargetStateNodeIdx; // 0x10		
		int16_t m_nDurationOverrideNodeIdx; // 0x12		
		int16_t m_syncEventOffsetOverrideNodeIdx; // 0x14		
		int16_t m_startBoneMaskNodeIdx; // 0x16		
		float m_flDuration; // 0x18		
		animlib::NmPercent_t m_boneMaskBlendInTimePercentage; // 0x1c		
		float m_syncEventOffset; // 0x20		
		animlib::CNmBitFlags m_transitionOptions; // 0x24		
		int16_t m_targetSyncIDNodeIdx; // 0x28		
		animlib::NmEasingOperation_t m_blendWeightEasing; // 0x2a		
		animlib::NmRootMotionBlendMode_t m_rootMotionBlend; // 0x2b		
	};
};
