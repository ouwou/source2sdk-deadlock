#pragma once
#include "animationsystem/HSequence.hpp"
#include "client/AnimLoopMode_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x18
	// Has Trivial Destructor
	struct SequenceHistory_t
	{
	public:
		animationsystem::HSequence m_hSequence; // 0x0		
		entity2::GameTime_t m_flSeqStartTime; // 0x4		
		float m_flSeqFixedCycle; // 0x8		
		client::AnimLoopMode_t m_nSeqLoopMode; // 0xc		
		float m_flPlaybackRate; // 0x10		
		float m_flCyclesPerSecond; // 0x14		
	};
};
