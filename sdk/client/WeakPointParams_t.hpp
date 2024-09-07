#pragma once
#include "client/EWeakPointBreakBehavior.hpp"
#include "client/HitGroup_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	struct WeakPointParams_t
	{
	public:
		CUtlString m_strName; // 0x0		
		client::HitGroup_t m_nHitGroup; // 0x8		
		int32_t m_nHealth; // 0xc		
		int32_t m_nMaxHealth; // 0x10		
		int32_t m_nOnBreakBonusDamage; // 0x14		
		client::EWeakPointBreakBehavior m_eBreakBehavior; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
	public:
		CGlobalSymbol m_strOnBreakAnimGraphParam; // 0x20		
	};
};
