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
	// Size: 0x80
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixEQ8Desc_t
	{
	public:
		soundsystem_lowlevel::VMixFilterDesc_t m_stages[8]; // 0x0		
	};
};
