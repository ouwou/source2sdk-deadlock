#pragma once
#include "entity2/CVariantDefaultAllocator.hpp"
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f0
	// Has VTable
	class CTankTargetChange : public server::CPointEntity
	{
	public:
		CVariantBase<entity2::CVariantDefaultAllocator> m_newTarget; // 0x4d8		
		CUtlSymbolLarge m_newTargetName; // 0x4e8		
	};
};
