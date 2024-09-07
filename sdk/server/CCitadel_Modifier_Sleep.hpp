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
	// Size: 0xf0
	// Has VTable
	class CCitadel_Modifier_Sleep : public server::CCitadelModifier
	{
	public:
		CUtlVector<CModifierHandleTyped<server::CCitadelModifier>> m_vecSleepModifiers; // 0xc8		
		bool m_bIsWakingUp; // 0xe0		
	private:
		[[maybe_unused]] uint8_t __pad00e1[0x3]; // 0xe1
	public:
		float m_flMinSleepTime; // 0xe4		
		float m_flWakeUpDelay; // 0xe8		
	};
};
