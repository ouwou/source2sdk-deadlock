#pragma once
#include "client/C_PointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x560
	// Has VTable
	class CPointChildModifier : public client::C_PointEntity
	{
	public:
		bool m_bOrphanInsteadOfDeletingChildrenOnRemove; // 0x558		
	};
};
