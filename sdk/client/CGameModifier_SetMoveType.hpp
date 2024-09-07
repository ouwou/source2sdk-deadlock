#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/MoveType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc8
	// Has VTable
	class CGameModifier_SetMoveType : public client::CCitadelModifier
	{
	public:
		client::MoveType_t m_nMoveType; // 0xc0		
	};
};
