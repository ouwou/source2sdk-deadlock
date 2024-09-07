#pragma once
#include "soundsystem_lowlevel/VMixSubgraphSwitchInterpolationType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0xc
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixSubgraphSwitchDesc_t
	{
	public:
		soundsystem_lowlevel::VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x0		
		bool m_bOnlyTailsOnFadeOut; // 0x4		
	private:
		[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
	public:
		float m_flInterpolationTime; // 0x8		
	};
};
