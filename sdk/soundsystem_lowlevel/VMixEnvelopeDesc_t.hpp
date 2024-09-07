#pragma once
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
	struct VMixEnvelopeDesc_t
	{
	public:
		float m_flAttackTimeMS; // 0x0		
		float m_flHoldTimeMS; // 0x4		
		float m_flReleaseTimeMS; // 0x8		
	};
};
