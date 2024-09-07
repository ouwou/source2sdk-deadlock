#pragma once
#include "animationsystem/CAnimActivity.hpp"
#include "animationsystem/CAnimEventDefinition.hpp"
#include "animationsystem/CSeqCmdLayer.hpp"
#include "animationsystem/CSeqPoseSetting.hpp"
#include "animationsystem/CSeqSeqDescFlag.hpp"
#include "animationsystem/CSeqTransition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x90
	// 
	// MGetKV3ClassDefaults
	class CSeqCmdSeqDesc
	{
	public:
		CBufferString m_sName; // 0x0		
		animationsystem::CSeqSeqDescFlag m_flags; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad001b[0x1]; // 0x1b
	public:
		animationsystem::CSeqTransition m_transition; // 0x1c		
		int16_t m_nFrameRangeSequence; // 0x24		
		int16_t m_nFrameCount; // 0x26		
		float m_flFPS; // 0x28		
		int16_t m_nSubCycles; // 0x2c		
		int16_t m_numLocalResults; // 0x2e		
		CUtlVector<animationsystem::CSeqCmdLayer> m_cmdLayerArray; // 0x30		
		CUtlVector<animationsystem::CAnimEventDefinition> m_eventArray; // 0x48		
		CUtlVector<animationsystem::CAnimActivity> m_activityArray; // 0x60		
		CUtlVector<animationsystem::CSeqPoseSetting> m_poseSettingArray; // 0x78		
	};
};