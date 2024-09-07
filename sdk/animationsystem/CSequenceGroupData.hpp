#pragma once
#include "animationsystem/CSeqBoneMaskList.hpp"
#include "animationsystem/CSeqCmdSeqDesc.hpp"
#include "animationsystem/CSeqIKLock.hpp"
#include "animationsystem/CSeqPoseParamDesc.hpp"
#include "animationsystem/CSeqS1SeqDesc.hpp"
#include "animationsystem/CSeqScaleSet.hpp"
#include "animationsystem/CSeqSynthAnimDesc.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x138
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSequenceGroupData
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		CBufferString m_sName; // 0x10		
		uint32_t m_nFlags; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
	public:
		CUtlVector<CBufferString> m_localSequenceNameArray; // 0x28		
		CUtlVector<animationsystem::CSeqS1SeqDesc> m_localS1SeqDescArray; // 0x40		
		CUtlVector<animationsystem::CSeqS1SeqDesc> m_localMultiSeqDescArray; // 0x58		
		CUtlVector<animationsystem::CSeqSynthAnimDesc> m_localSynthAnimDescArray; // 0x70		
		CUtlVector<animationsystem::CSeqCmdSeqDesc> m_localCmdSeqDescArray; // 0x88		
		CUtlVector<animationsystem::CSeqBoneMaskList> m_localBoneMaskArray; // 0xa0		
		CUtlVector<animationsystem::CSeqScaleSet> m_localScaleSetArray; // 0xb8		
		CUtlVector<CBufferString> m_localBoneNameArray; // 0xd0		
		CBufferString m_localNodeName; // 0xe8		
		CUtlVector<animationsystem::CSeqPoseParamDesc> m_localPoseParamArray; // 0xf8		
		KeyValues3 m_keyValues; // 0x110		
		CUtlVector<animationsystem::CSeqIKLock> m_localIKAutoplayLockArray; // 0x120		
	};
};
