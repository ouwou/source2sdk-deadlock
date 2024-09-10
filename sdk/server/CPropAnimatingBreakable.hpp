#pragma once
#include "client/CBreakableStageHelper.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseAnimGraph.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa30
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkIncludeByName "m_iHealth"
	class CPropAnimatingBreakable : public server::CBaseAnimGraph
	{
	public:
		client::CBreakableStageHelper m_stages; // 0x9a0		
		entity2::CEntityIOOutput m_OnTakeDamage; // 0x9b8		
		entity2::CEntityIOOutput m_OnFinalBreak; // 0x9e0		
		entity2::CEntityIOOutput m_OnStageAdvanced; // 0xa08		
		
		// Datamap fields:
		// void InputNextBreakStage; // 0x0
	};
};
