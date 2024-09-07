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
	class CAimConstraint : public modellib::CBaseConstraint
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
	public:
		Quaternion m_qAimOffset; // 0x70		
		uint32_t m_nUpType; // 0x80		
	};
};
