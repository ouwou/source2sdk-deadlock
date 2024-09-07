#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 16
	// Size: 0x60
	// 
	// MGetKV3ClassDefaults
	class CConstraintTarget
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
	public:
		Quaternion m_qOffset; // 0x20		
		Vector m_vOffset; // 0x30		
		uint32_t m_nBoneHash; // 0x3c		
		CUtlString m_sName; // 0x40		
		float m_flWeight; // 0x48		
	private:
		[[maybe_unused]] uint8_t __pad004c[0xd]; // 0x4c
	public:
		bool m_bIsAttachment; // 0x59		
	};
};
