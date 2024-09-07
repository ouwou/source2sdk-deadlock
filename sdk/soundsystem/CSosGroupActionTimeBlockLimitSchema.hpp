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
	// Size: 0x20
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSosGroupActionTimeBlockLimitSchema : public soundsystem::CSosGroupActionSchema
	{
	public:
		// MPropertyFriendlyName "Max Count"
		int32_t m_nMaxCount; // 0x18		
		// MPropertyFriendlyName "Max Time"
		float m_flMaxDuration; // 0x1c		
	};
};
