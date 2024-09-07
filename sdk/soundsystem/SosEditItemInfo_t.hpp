#pragma once
#include "soundsystem/SosEditItemType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	struct SosEditItemInfo_t
	{
	public:
		soundsystem::SosEditItemType_t itemType; // 0x0		
		CUtlString itemName; // 0x8		
		CUtlString itemTypeName; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0018[0x8]; // 0x18
	public:
		CUtlString itemKVString; // 0x20		
		Vector2D itemPos; // 0x28		
	};
};
