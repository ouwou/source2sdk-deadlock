#pragma once
#include "animationsystem/CAnimKeyData.hpp"
#include "resourcesystem/InfoForResourceTypeCAnimData.hpp"
#include "resourcesystem/InfoForResourceTypeCAnimationGroup.hpp"
#include "resourcesystem/InfoForResourceTypeCSequenceGroupData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x130
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimationGroup
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		uint32_t m_nFlags; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
	public:
		CBufferString m_name; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad0028[0x38]; // 0x28
	public:
		// MKV3TransferName "m_localHAnimArray"
		CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCAnimData>> m_localHAnimArray_Handle; // 0x60		
		// MKV3TransferName "m_includedGroupArray"
		CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCAnimationGroup>> m_includedGroupArray_Handle; // 0x78		
		// MKV3TransferName "m_directHSeqGroup"
		CStrongHandle<resourcesystem::InfoForResourceTypeCSequenceGroupData> m_directHSeqGroup_Handle; // 0x90		
		animationsystem::CAnimKeyData m_decodeKey; // 0x98		
		CUtlVector<CBufferString> m_szScripts; // 0x110		
	};
};
