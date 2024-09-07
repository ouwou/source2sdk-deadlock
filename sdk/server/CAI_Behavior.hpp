#pragma once
#include "client/CAI_Component.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	class CAI_Behavior : public client::CAI_Component
	{
	public:
		bool m_bActive; // 0x40		
		bool m_bOverrode; // 0x41		
	};
};
