#pragma once
#include "soundsystem_lowlevel/VMixFilterDesc_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0x28
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixDelayDesc_t
	{
	public:
		soundsystem_lowlevel::VMixFilterDesc_t m_feedbackFilter; // 0x0		
		bool m_bEnableFilter; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
	public:
		float m_flDelay; // 0x14		
		float m_flDirectGain; // 0x18		
		float m_flDelayGain; // 0x1c		
		float m_flFeedbackGain; // 0x20		
		float m_flWidth; // 0x24		
	};
};
