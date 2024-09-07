#pragma once
#include "modellib/CBaseConstraint.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 16
	// Size: 0x90
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CTwistConstraint : public modellib::CBaseConstraint
	{
	public:
		bool m_bInverse; // 0x68		
	private:
		[[maybe_unused]] uint8_t __pad0069[0x7]; // 0x69
	public:
		Quaternion m_qParentBindRotation; // 0x70		
		Quaternion m_qChildBindRotation; // 0x80		
	};
};
