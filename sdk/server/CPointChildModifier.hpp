#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4e0
	// Has VTable
	class CPointChildModifier : public server::CPointEntity
	{
	public:
		bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // 0x4d8		
	};
};
