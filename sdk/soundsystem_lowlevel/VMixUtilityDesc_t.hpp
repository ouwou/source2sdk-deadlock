#pragma once
#include "soundsystem_lowlevel/VMixChannelOperation_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixUtilityDesc_t
	{
	public:
		// MPropertyFriendlyName "Channels"
		soundsystem_lowlevel::VMixChannelOperation_t m_nOp; // 0x0		
		// MPropertyFriendlyName "Input Pan"
		// MPropertyAttributeRange "-1 1"
		float m_flInputPan; // 0x4		
		// MPropertyFriendlyName "Output Balance"
		// MPropertyAttributeRange "-1 1"
		float m_flOutputBalance; // 0x8		
		// MPropertyFriendlyName "Output Gain (dB)"
		// MPropertyAttributeRange "-36 0"
		float m_fldbOutputGain; // 0xc		
		bool m_bBassMono; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
	public:
		float m_flBassFreq; // 0x14		
	};
};
