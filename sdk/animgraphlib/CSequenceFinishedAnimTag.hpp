#pragma once
#include "animgraphlib/CAnimTagBase.hpp"
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
	// MPropertyFriendlyName "Sequence Finished Tag"
	class CSequenceFinishedAnimTag : public animgraphlib::CAnimTagBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
	public:
		// MPropertyFriendlyName "Sequence"
		// MPropertyAttributeChoiceName "Sequence"
		CUtlString m_sequenceName; // 0x58		
	};
};
