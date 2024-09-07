#pragma once
#include "soundsystem/CSosGroupActionSchema.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSosGroupActionSoundeventCountSchema : public soundsystem::CSosGroupActionSchema
	{
	public:
		// MPropertyFriendlyName "Exclude Stopped Sounds from Count"
		bool m_bExcludeStoppedSounds; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad0019[0x7]; // 0x19
	public:
		// MPropertyFriendlyName "Result Current Count"
		CUtlString m_strCountKeyName; // 0x20		
	};
};
