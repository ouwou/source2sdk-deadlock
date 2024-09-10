#pragma once
#include "client/MoveType_t.hpp"
#include "server/CItem.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa80
	// Has VTable
	class CScriptItem : public server::CItem
	{
	public:
		client::MoveType_t m_MoveTypeOverride; // 0xa78		
	};
};
