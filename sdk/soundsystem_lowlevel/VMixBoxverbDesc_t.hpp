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
	// Size: 0x50
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixBoxverbDesc_t
	{
	public:
		float m_flSizeMax; // 0x0		
		float m_flSizeMin; // 0x4		
		float m_flComplexity; // 0x8		
		float m_flDiffusion; // 0xc		
		float m_flModDepth; // 0x10		
		float m_flModRate; // 0x14		
		bool m_bParallel; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
	public:
		soundsystem_lowlevel::VMixFilterDesc_t m_filterType; // 0x1c		
		float m_flWidth; // 0x2c		
		float m_flHeight; // 0x30		
		float m_flDepth; // 0x34		
		float m_flFeedbackScale; // 0x38		
		float m_flFeedbackWidth; // 0x3c		
		float m_flFeedbackHeight; // 0x40		
		float m_flFeedbackDepth; // 0x44		
		float m_flOutputGain; // 0x48		
		float m_flTaps; // 0x4c		
	};
};
