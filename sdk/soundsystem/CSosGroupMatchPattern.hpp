#pragma once
#include "soundsystem/CSosGroupBranchPattern.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSosGroupMatchPattern : public soundsystem::CSosGroupBranchPattern
	{
	public:
		// MPropertyFriendlyName "Event Name"
		CUtlString m_matchSoundEventName; // 0x10		
		// MPropertyFriendlyName "Sub-String"
		CUtlString m_matchSoundEventSubString; // 0x18		
		// MPropertyFriendlyName "Source Entity Index"
		float m_flEntIndex; // 0x20		
		// MPropertyFriendlyName "Opvar Float"
		float m_flOpvar; // 0x24		
		// MPropertyFriendlyName "Opvar String"
		CUtlString m_opvarString; // 0x28		
	};
};
