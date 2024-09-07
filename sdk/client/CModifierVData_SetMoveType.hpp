#pragma once
#include "client/CCitadelModifierVData.hpp"
#include "client/MoveType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModifierVData_SetMoveType : public client::CCitadelModifierVData
	{
	public:
		// MPropertyDescription "The move type to switch to.  Some move types will have weird behaviors when swapped to, ie: MOVETYPE_SYNC"
		client::MoveType_t m_nMoveType; // 0x5f8		
	};
};
