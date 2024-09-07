#pragma once
#include "animationsystem/CAnimActivity.hpp"
#include "animationsystem/CSeqAutoLayer.hpp"
#include "animationsystem/CSeqIKLock.hpp"
#include "animationsystem/CSeqMultiFetch.hpp"
#include "animationsystem/CSeqSeqDescFlag.hpp"
#include "animationsystem/CSeqTransition.hpp"
#include "modellib/CFootMotion.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x120
	// 
	// MGetKV3ClassDefaults
	class CSeqS1SeqDesc
	{
	public:
		CBufferString m_sName; // 0x0		
		animationsystem::CSeqSeqDescFlag m_flags; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad001b[0x5]; // 0x1b
	public:
		animationsystem::CSeqMultiFetch m_fetch; // 0x20		
		int32_t m_nLocalWeightlist; // 0x90		
	private:
		[[maybe_unused]] uint8_t __pad0094[0x4]; // 0x94
	public:
		CUtlVector<animationsystem::CSeqAutoLayer> m_autoLayerArray; // 0x98		
		CUtlVector<animationsystem::CSeqIKLock> m_IKLockArray; // 0xb0		
		animationsystem::CSeqTransition m_transition; // 0xc8		
		KeyValues3 m_SequenceKeys; // 0xd0		
		// MKV3TransferName "m_keyValueText"
		CBufferString m_LegacyKeyValueText; // 0xe0		
		CUtlVector<animationsystem::CAnimActivity> m_activityArray; // 0xf0		
		CUtlVector<modellib::CFootMotion> m_footMotion; // 0x108		
	};
};
