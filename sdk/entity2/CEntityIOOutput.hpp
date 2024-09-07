#pragma once
#include "entity2/CVariantDefaultAllocator.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	class CEntityIOOutput
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
	public:
		CVariantBase<entity2::CVariantDefaultAllocator> m_Value; // 0x18		
	};
};
