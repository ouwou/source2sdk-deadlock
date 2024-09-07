#pragma once
#include "networksystem/ChangeAccessorFieldPathIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
	// Alignment: 8
	// Size: 0x28
	class CNetworkVarChainer
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x20]; // 0x0
	public:
		// MNetworkDisable
		// MNetworkChangeAccessorFieldPathIndex
		networksystem::ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x20		
	};
};
