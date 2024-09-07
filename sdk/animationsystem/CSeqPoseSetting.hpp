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
	class CSeqPoseSetting
	{
	public:
		CBufferString m_sPoseParameter; // 0x0		
		CBufferString m_sAttachment; // 0x10		
		CBufferString m_sReferenceSequence; // 0x20		
		float m_flValue; // 0x30		
		bool m_bX; // 0x34		
		bool m_bY; // 0x35		
		bool m_bZ; // 0x36		
	private:
		[[maybe_unused]] uint8_t __pad0037[0x1]; // 0x37
	public:
		int32_t m_eType; // 0x38		
	};
};
