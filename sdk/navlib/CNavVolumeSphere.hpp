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
	// Size: 0x80
	// Has VTable
	class CNavVolumeSphere : public navlib::CNavVolume
	{
	public:
		Vector m_vCenter; // 0x70		
		float m_flRadius; // 0x7c		
	};
};
