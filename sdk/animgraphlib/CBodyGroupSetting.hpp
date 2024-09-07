#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x10
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Body Group Setting"
	// MPropertyElementNameFn
	class CBodyGroupSetting
	{
	public:
		// MPropertyFriendlyName "BodyGroup"
		// MPropertyAttributeChoiceName "BodyGroup"
		// MPropertyAutoRebuildOnChange
		CUtlString m_BodyGroupName; // 0x0		
		// MPropertyFriendlyName "BodyGroup Option"
		// MPropertyAttributeChoiceName "BodyGroupOption"
		// MPropertyAttrExtraInfoFn
		int32_t m_nBodyGroupOption; // 0x8		
	};
};
