#pragma once
#include "animationsystem/CAnimBone.hpp"
#include "animationsystem/CAnimDataChannelDesc.hpp"
#include "animationsystem/CAnimUser.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x78
	// 
	// MGetKV3ClassDefaults
	class CAnimKeyData
	{
	public:
		CBufferString m_name; // 0x0		
		CUtlVector<animationsystem::CAnimBone> m_boneArray; // 0x10		
		CUtlVector<animationsystem::CAnimUser> m_userArray; // 0x28		
		CUtlVector<CBufferString> m_morphArray; // 0x40		
		int32_t m_nChannelElements; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
	public:
		CUtlVector<animationsystem::CAnimDataChannelDesc> m_dataChannelArray; // 0x60		
	};
};
