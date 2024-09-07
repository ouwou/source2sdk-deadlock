#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x90
	// 
	// MGetKV3ClassDefaults
	class CAnimDataChannelDesc
	{
	public:
		CBufferString m_szChannelClass; // 0x0		
		CBufferString m_szVariableName; // 0x10		
		int32_t m_nFlags; // 0x20		
		int32_t m_nType; // 0x24		
		CBufferString m_szGrouping; // 0x28		
		CBufferString m_szDescription; // 0x38		
		CUtlVector<CBufferString> m_szElementNameArray; // 0x48		
		CUtlVector<int32_t> m_nElementIndexArray; // 0x60		
		CUtlVector<uint32_t> m_nElementMaskArray; // 0x78		
	};
};
