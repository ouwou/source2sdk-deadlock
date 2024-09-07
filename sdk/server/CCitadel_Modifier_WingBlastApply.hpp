#pragma once
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x198
	// Has VTable
	class CCitadel_Modifier_WingBlastApply : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0xa8]; // 0xc8
	public:
		Vector m_vStart; // 0x170		
		Vector m_vEnd; // 0x17c		
		Vector m_vPush; // 0x188		
	};
};
