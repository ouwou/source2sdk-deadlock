#pragma once
#include "animationsystem/FootstepLandedFootSoundType_t.hpp"
#include "animgraphlib/CAnimTagBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x78
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "FootstepLanded Tag"
	class CFootstepLandedAnimTag : public animgraphlib::CAnimTagBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
	public:
		// MPropertyFriendlyName "Footstep Type"
		animationsystem::FootstepLandedFootSoundType_t m_FootstepType; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
	public:
		// MPropertyFriendlyName "Override Sound"
		// MPropertyAttributeChoiceName "Sound"
		CUtlString m_OverrideSoundName; // 0x60		
		// MPropertyFriendlyName "Debug Name"
		CUtlString m_DebugAnimSourceString; // 0x68		
		// MPropertyFriendlyName "Bone Name"
		// MPropertyAttributeChoiceName "Bone"
		CUtlString m_BoneName; // 0x70		
	};
};
