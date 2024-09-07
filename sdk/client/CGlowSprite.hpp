#pragma once
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x20
	class CGlowSprite
	{
	public:
		Vector m_vColor; // 0x0		
		float m_flHorzSize; // 0xc		
		float m_flVertSize; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial; // 0x18		
	};
};
