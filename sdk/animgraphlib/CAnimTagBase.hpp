#pragma once
#include "modellib/AnimTagID.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x50
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimTagBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
	public:
		// MPropertyFriendlyName "Name"
		// MPropertySortPriority "100"
		CGlobalSymbol m_name; // 0x18		
		// MPropertyFriendlyName "Comment"
		// MPropertyAttributeEditor "TextBlock()"
		// MPropertySortPriority "-100"
		CUtlString m_sComment; // 0x20		
		// MPropertyHideField
		CGlobalSymbol m_group; // 0x28		
		// MPropertyHideField
		modellib::AnimTagID m_tagID; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0034[0x14]; // 0x34
	public:
		// MPropertyHideField
		bool m_bIsReferenced; // 0x48		
	};
};
