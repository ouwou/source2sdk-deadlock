#pragma once
#include "client/CBaseAnimGraph.hpp"
#include "client/CBreakableStageHelper.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb20
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkIncludeByName "m_iHealth"
	class CPropAnimatingBreakable : public client::CBaseAnimGraph
	{
	public:
		client::CBreakableStageHelper m_stages; // 0xa90		
		entity2::CEntityIOOutput m_OnTakeDamage; // 0xaa8		
		entity2::CEntityIOOutput m_OnFinalBreak; // 0xad0		
		entity2::CEntityIOOutput m_OnStageAdvanced; // 0xaf8		
		
		// Datamap fields:
		// void InputNextBreakStage; // 0x0
	};
};
