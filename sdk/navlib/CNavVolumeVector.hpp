#pragma once
#include "navlib/CNavVolume.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::navlib
{
	// Alignment: 8
	// Size: 0x98
	// Has VTable
	class CNavVolumeVector : public navlib::CNavVolume
	{
	private:
		[[maybe_unused]] uint8_t __pad0070[0x8]; // 0x70
	public:
		bool m_bHasBeenPreFiltered; // 0x78		
	};
};
