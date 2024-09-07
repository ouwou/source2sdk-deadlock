#pragma once
#include "soundsystem_lowlevel/VMixFilterDesc_t.hpp"
#include "soundsystem_lowlevel/VMixLFOShape_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_lowlevel
{
	// Alignment: 4
	// Size: 0x2c
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VMixAutoFilterDesc_t
	{
	public:
		float m_flEnvelopeAmount; // 0x0		
		float m_flAttackTimeMS; // 0x4		
		float m_flReleaseTimeMS; // 0x8		
		soundsystem_lowlevel::VMixFilterDesc_t m_filter; // 0xc		
		float m_flLFOAmount; // 0x1c		
		float m_flLFORate; // 0x20		
		float m_flPhase; // 0x24		
		soundsystem_lowlevel::VMixLFOShape_t m_nLFOShape; // 0x28		
	};
};
