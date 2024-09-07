#pragma once
#include "client/CAI_Component.hpp"
#include "server/AI_FreePassParams_t.hpp"
#include "server/CAI_MoveMonitor.hpp"
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
	// Size: 0x88
	// Has VTable
	class CAI_FreePass : public client::CAI_Component
	{
	public:
		CHandle<server::CBaseEntity> m_hTarget; // 0x40		
		float m_FreePassTimeRemaining; // 0x44		
		server::CAI_MoveMonitor m_FreePassMoveMonitor; // 0x48		
		server::AI_FreePassParams_t m_Params; // 0x58		
	};
};
