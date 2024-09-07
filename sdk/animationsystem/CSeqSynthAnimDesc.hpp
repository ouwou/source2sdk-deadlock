#pragma once
#include "animationsystem/CAnimActivity.hpp"
#include "animationsystem/CSeqSeqDescFlag.hpp"
#include "animationsystem/CSeqTransition.hpp"
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
	class CSeqSynthAnimDesc
	{
	public:
		CBufferString m_sName; // 0x0		
		animationsystem::CSeqSeqDescFlag m_flags; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad001b[0x1]; // 0x1b
	public:
		animationsystem::CSeqTransition m_transition; // 0x1c		
		int16_t m_nLocalBaseReference; // 0x24		
		int16_t m_nLocalBoneMask; // 0x26		
		CUtlVector<animationsystem::CAnimActivity> m_activityArray; // 0x28		
	};
};
