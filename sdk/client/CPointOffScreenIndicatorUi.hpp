#pragma once
#include "client/C_PointClientUIWorldPanel.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_PointClientUIWorldPanel;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 16
	// Size: 0xaa0
	// Has VTable
	class CPointOffScreenIndicatorUi : public client::C_PointClientUIWorldPanel
	{
	public:
		bool m_bBeenEnabled; // 0xa90		
		bool m_bHide; // 0xa91		
	private:
		[[maybe_unused]] uint8_t __pad0a92[0x2]; // 0xa92
	public:
		float m_flSeenTargetTime; // 0xa94		
		client::C_PointClientUIWorldPanel* m_pTargetPanel; // 0xa98		
	};
};
