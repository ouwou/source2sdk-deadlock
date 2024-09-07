#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 4
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CSeqCmdLayer
	{
	public:
		int16_t m_cmd; // 0x0		
		int16_t m_nLocalReference; // 0x2		
		int16_t m_nLocalBonemask; // 0x4		
		int16_t m_nDstResult; // 0x6		
		int16_t m_nSrcResult; // 0x8		
		bool m_bSpline; // 0xa		
	private:
		[[maybe_unused]] uint8_t __pad000b[0x1]; // 0xb
	public:
		float m_flVar1; // 0xc		
		float m_flVar2; // 0x10		
		int16_t m_nLineNumber; // 0x14		
	};
};
