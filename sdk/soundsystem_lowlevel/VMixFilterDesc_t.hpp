#pragma once
#include "soundsystem_lowlevel/VMixFilterSlope_t.hpp"
#include "soundsystem_lowlevel/VMixFilterType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0x10
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixFilterDesc_t
	{
	public:
		soundsystem_lowlevel::VMixFilterType_t m_nFilterType; // 0x0		
		soundsystem_lowlevel::VMixFilterSlope_t m_nFilterSlope; // 0x2		
		bool m_bEnabled; // 0x3		
		float m_fldbGain; // 0x4		
		float m_flCutoffFreq; // 0x8		
		float m_flQ; // 0xc		
	};
};
