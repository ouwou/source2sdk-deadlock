#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	class CResponseCriteriaSet
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
	public:
		int32_t m_nNumPrefixedContexts; // 0x20		
		bool m_bOverrideOnAppend; // 0x24		
	};
};