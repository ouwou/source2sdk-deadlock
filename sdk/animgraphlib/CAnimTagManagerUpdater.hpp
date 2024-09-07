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
	// Size: 0x78
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimTagManagerUpdater
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x38]; // 0x0
	public:
		CUtlVector<CSmartPtr<animgraphlib::CAnimTagBase>> m_tags; // 0x38		
	};
};
