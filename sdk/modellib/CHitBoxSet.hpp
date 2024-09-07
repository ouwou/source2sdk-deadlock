#pragma once
#include "modellib/CHitBox.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	class CHitBoxSet
	{
	public:
		CUtlString m_name; // 0x0		
		uint32_t m_nNameHash; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		CUtlVector<modellib::CHitBox> m_HitBoxes; // 0x10		
		CUtlString m_SourceFilename; // 0x28		
	};
};
