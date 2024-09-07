#pragma once
#include "server/SimpleConstraintSoundProfile__SimpleConstraintsSoundProfileKeypoints_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	// Has Trivial Destructor
	class SimpleConstraintSoundProfile
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		server::SimpleConstraintSoundProfile__SimpleConstraintsSoundProfileKeypoints_t eKeypoints; // 0x8		
		float m_keyPoints[2]; // 0xc		
		float m_reversalSoundThresholds[3]; // 0x14		
		
		// Datamap fields:
		// float m_keyPoints[0]; // 0xc
		// float m_keyPoints[1]; // 0x10
		// float m_reversalSoundThresholds[0]; // 0x14
		// float m_reversalSoundThresholds[1]; // 0x18
		// float m_reversalSoundThresholds[2]; // 0x1c
	};
};
