#pragma once
#include "client/MoveType_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	class CGameModifier_SetMoveType : public server::CCitadelModifier
	{
	public:
		client::MoveType_t m_nMoveType; // 0xc8		
	};
};
