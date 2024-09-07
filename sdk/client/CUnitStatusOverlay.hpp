#pragma once
#include "client/C_PointClientUIWorldPanel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 16
	// Size: 0xaf0
	// Has VTable
	class CUnitStatusOverlay : public client::C_PointClientUIWorldPanel
	{
	private:
		[[maybe_unused]] uint8_t __pad0a90[0x40]; // 0xa90
	public:
		float m_flUIScale; // 0xad0		
	};
};
