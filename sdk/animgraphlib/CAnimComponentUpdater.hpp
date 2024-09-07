#pragma once
#include "animgraphlib/AnimNodeNetworkMode.hpp"
#include "modellib/AnimComponentID.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CAnimComponentUpdater
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
	public:
		CUtlString m_name; // 0x18		
		modellib::AnimComponentID m_id; // 0x20		
		animgraphlib::AnimNodeNetworkMode m_networkMode; // 0x24		
		bool m_bStartEnabled; // 0x28		
	};
};
