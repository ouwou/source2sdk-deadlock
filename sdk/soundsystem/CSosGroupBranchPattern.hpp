#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0x10
	// Has VTable
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CSosGroupBranchPattern
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MPropertyFriendlyName "Event Name"
		bool m_bMatchEventName; // 0x8		
		// MPropertyFriendlyName "Sub-String"
		bool m_bMatchEventSubString; // 0x9		
		// MPropertyFriendlyName "Source Entity Index"
		bool m_bMatchEntIndex; // 0xa		
		// MPropertyFriendlyName "Opvar Float"
		bool m_bMatchOpvar; // 0xb		
		// MPropertyFriendlyName "Opvar String"
		bool m_bMatchString; // 0xc		
	};
};
