#pragma once
#include "client/CSimTimer.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1c
	// Has Trivial Destructor
	class CAI_ScriptConditionsElement
	{
	public:
		CHandle<server::CBaseEntity> m_hActor; // 0x0		
		client::CSimTimer m_Timer; // 0x4		
		client::CSimTimer m_Timeout; // 0x10		
	};
};
