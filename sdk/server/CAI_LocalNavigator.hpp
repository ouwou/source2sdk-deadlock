#pragma once
#include "client/CSimpleSimTimer.hpp"
#include "server/CAI_LocalNavigatorBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x158
	// Has VTable
	class CAI_LocalNavigator : public server::CAI_LocalNavigatorBase
	{
	public:
		bool m_bLastWasClear; // 0x50		
	private:
		[[maybe_unused]] uint8_t __pad0051[0xef]; // 0x51
	public:
		client::CSimpleSimTimer m_FullDirectTimer; // 0x140		
	};
};
