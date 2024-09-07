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
	class CSosGroupActionTimeLimitSchema : public soundsystem::CSosGroupActionSchema
	{
	public:
		// MPropertyFriendlyName "Max Time"
		float m_flMaxDuration; // 0x18		
	};
};
