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
	// Size: 0x40
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSosGroupActionMemberCountEnvelopeSchema : public soundsystem::CSosGroupActionSchema
	{
	public:
		// MPropertyFriendlyName "Min Threshold Count"
		int32_t m_nBaseCount; // 0x18		
		// MPropertyFriendlyName "Max Target Count"
		int32_t m_nTargetCount; // 0x1c		
		// MPropertyFriendlyName "Threshold Value"
		float m_flBaseValue; // 0x20		
		// MPropertyFriendlyName "Target Value"
		float m_flTargetValue; // 0x24		
		// MPropertyFriendlyName "Attack"
		float m_flAttack; // 0x28		
		// MPropertyFriendlyName "Decay"
		float m_flDecay; // 0x2c		
		// MPropertyFriendlyName "Result Variable Name"
		CUtlString m_resultVarName; // 0x30		
		// MPropertyFriendlyName "Save Result to Group"
		bool m_bSaveToGroup; // 0x38		
	};
};
