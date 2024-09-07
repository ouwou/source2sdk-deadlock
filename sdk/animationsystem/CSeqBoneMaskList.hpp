#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x60
	// 
	// MGetKV3ClassDefaults
	class CSeqBoneMaskList
	{
	public:
		CBufferString m_sName; // 0x0		
		CUtlVector<int16_t> m_nLocalBoneArray; // 0x10		
		CUtlVector<float> m_flBoneWeightArray; // 0x28		
		float m_flDefaultMorphCtrlWeight; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0044[0x4]; // 0x44
	public:
		CUtlVector<CUtlPair<CBufferString,float>> m_morphCtrlWeightArray; // 0x48		
	};
};
