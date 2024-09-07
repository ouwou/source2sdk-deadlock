#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x50
	// 
	// MGetKV3ClassDefaults
	class CSeqScaleSet
	{
	public:
		CBufferString m_sName; // 0x0		
		bool m_bRootOffset; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
	public:
		Vector m_vRootOffset; // 0x14		
		CUtlVector<int16_t> m_nLocalBoneArray; // 0x20		
		CUtlVector<float> m_flBoneScaleArray; // 0x38		
	};
};
