#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x40
	// 
	// MGetKV3ClassDefaults
	class CAnimEventDefinition
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		int32_t m_nFrame; // 0x8		
		int32_t m_nEndFrame; // 0xc		
		float m_flCycle; // 0x10		
		float m_flDuration; // 0x14		
		KeyValues3 m_EventData; // 0x18		
		// MKV3TransferName "m_sOptions"
		CBufferString m_sLegacyOptions; // 0x28		
		CGlobalSymbol m_sEventName; // 0x38		
	};
};
