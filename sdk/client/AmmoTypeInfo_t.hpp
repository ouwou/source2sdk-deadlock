#pragma once
#include "client/AmmoFlags_t.hpp"
#include "tier2/CRangeFloat.hpp"
#include "tier2/CRangeInt.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	struct AmmoTypeInfo_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		int32_t m_nMaxCarry; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0014[0x8]; // 0x14
	public:
		tier2::CRangeInt m_nSplashSize; // 0x1c		
		client::AmmoFlags_t m_nFlags; // 0x24		
		float m_flMass; // 0x28		
		tier2::CRangeFloat m_flSpeed; // 0x2c		
	};
};
