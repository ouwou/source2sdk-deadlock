#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBasePlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f0
	// Has VTable
	class CInstructorEventEntity : public server::CPointEntity
	{
	public:
		CUtlSymbolLarge m_iszName; // 0x4d8		
		CUtlSymbolLarge m_iszHintTargetEntity; // 0x4e0		
		CHandle<server::CBasePlayerPawn> m_hTargetPlayer; // 0x4e8		
		
		// Datamap fields:
		// CUtlSymbolLarge InputShowHint; // 0x0
		// void InputEndHint; // 0x0
		// void InputSetTargetPlayerToActivator; // 0x0
	};
};
