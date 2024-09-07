#pragma once
#include "animgraphlib/CAnimTagBase.hpp"
#include "animgraphlib/CBodyGroupSetting.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x78
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Body Group Tag"
	class CBodyGroupAnimTag : public animgraphlib::CAnimTagBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
	public:
		// MPropertyFriendlyName "Priority"
		int32_t m_nPriority; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
	public:
		// MPropertyFriendlyName "Body Group Settings"
		CUtlVector<animgraphlib::CBodyGroupSetting> m_bodyGroupSettings; // 0x60		
	};
};
