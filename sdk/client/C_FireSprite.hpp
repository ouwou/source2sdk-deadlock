#pragma once
#include "client/C_Sprite.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x950
	// Has VTable
	class C_FireSprite : public client::C_Sprite
	{
	public:
		Vector m_vecMoveDir; // 0x940		
		bool m_bFadeFromAbove; // 0x94c		
	};
};
