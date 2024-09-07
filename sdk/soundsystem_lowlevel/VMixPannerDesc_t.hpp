#pragma once
#include "soundsystem_lowlevel/VMixPannerType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0x8
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixPannerDesc_t
	{
	public:
		soundsystem_lowlevel::VMixPannerType_t m_type; // 0x0		
		float m_flStrength; // 0x4		
	};
};
