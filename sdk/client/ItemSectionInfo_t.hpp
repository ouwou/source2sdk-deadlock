#pragma once
#include "client/AbilitySectionType_t.hpp"
#include "client/SectionAttributes_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	// MPropertyArrayElementNameKey "m_eAbilitySectionType"
	struct ItemSectionInfo_t
	{
	public:
		client::AbilitySectionType_t m_eAbilitySectionType; // 0x0		
		// MPropertyAutoExpandSelf
		CUtlVector<client::SectionAttributes_t> m_vecSectionAttributes; // 0x8		
	};
};
