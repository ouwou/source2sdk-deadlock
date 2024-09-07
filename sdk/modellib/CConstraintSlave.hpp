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
	class CConstraintSlave
	{
	public:
		Quaternion m_qBaseOrientation; // 0x0		
		Vector m_vBasePosition; // 0x10		
		uint32_t m_nBoneHash; // 0x1c		
		float m_flWeight; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
	public:
		CUtlString m_sName; // 0x28		
	};
};
