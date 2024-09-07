#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CModelConfigElement
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CUtlString m_ElementName; // 0x8		
		CUtlVector<modellib::CModelConfigElement*> m_NestedElements; // 0x10		
	};
};
