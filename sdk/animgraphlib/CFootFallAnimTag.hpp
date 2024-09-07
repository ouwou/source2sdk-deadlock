#pragma once
#include "animgraphlib/CAnimTagBase.hpp"
#include "animgraphlib/FootFallTagFoot_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x60
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "FootFall Tag"
	class CFootFallAnimTag : public animgraphlib::CAnimTagBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
	public:
		// MPropertyFriendlyName "Foot"
		animgraphlib::FootFallTagFoot_t m_foot; // 0x58		
	};
};
