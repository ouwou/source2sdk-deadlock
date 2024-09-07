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
	// Size: 0x48
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSosGroupActionSoundeventMinMaxValuesSchema : public soundsystem::CSosGroupActionSchema
	{
	public:
		// MPropertyFriendlyName "Public field name to query."
		CUtlString m_strQueryPublicFieldName; // 0x18		
		// MPropertyFriendlyName "Public field 'delay' name."
		CUtlString m_strDelayPublicFieldName; // 0x20		
		// MPropertyFriendlyName "Exclude stopped sounds from evaluation"
		bool m_bExcludeStoppedSounds; // 0x28		
		// MPropertyFriendlyName "Exclude delayed sounds from evaluation"
		bool m_bExcludeDelayedSounds; // 0x29		
		// MPropertyFriendlyName "Exclude sounds from evaluation less than or equal to a min value threshold."
		bool m_bExcludeSoundsBelowThreshold; // 0x2a		
	private:
		[[maybe_unused]] uint8_t __pad002b[0x1]; // 0x2b
	public:
		// MPropertyFriendlyName "The minimum threshold value to exclude sounds."
		float m_flExcludeSoundsMinThresholdValue; // 0x2c		
		// MPropertyFriendlyName "Exclude sounds from evaluation greater than or equal to a max value threshold."
		bool m_bExcludSoundsAboveThreshold; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
	public:
		// MPropertyFriendlyName "The maximum threshold value to exclude sounds."
		float m_flExcludeSoundsMaxThresholdValue; // 0x34		
		// MPropertyFriendlyName "Min value property name"
		CUtlString m_strMinValueName; // 0x38		
		// MPropertyFriendlyName "Max value property name"
		CUtlString m_strMaxValueName; // 0x40		
	};
};
