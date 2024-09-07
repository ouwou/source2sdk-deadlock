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
	// Size: 0x100
	// Has VTable
	class CCitadel_Modifier_UppercutClipSize : public client::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x38]; // 0xc0
	public:
		int32_t m_nPreClipSize; // 0xf8		
	};
};