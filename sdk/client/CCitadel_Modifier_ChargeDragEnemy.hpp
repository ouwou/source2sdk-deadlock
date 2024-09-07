#pragma once
#include "client/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x160
	// Has VTable
	class CCitadel_Modifier_ChargeDragEnemy : public client::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x70]; // 0xc0
	public:
		QAngle m_qRelativeOffset; // 0x130		
		float m_flRelativeDist; // 0x13c		
		float m_flMaxDist; // 0x140		
		Vector m_vecOffsetDir; // 0x144		
		Vector m_vecStartPosition; // 0x150		
	};
};
