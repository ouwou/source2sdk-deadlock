#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CLogicBranchList__LogicBranchListenerLastState_t.hpp"
#include "server/CLogicalEntity.hpp"
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
	// Size: 0x5f0
	// Has VTable
	class CLogicBranchList : public server::CLogicalEntity
	{
	public:
		CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4d8		
		CUtlVector<CHandle<server::CBaseEntity>> m_LogicBranchList; // 0x558		
		server::CLogicBranchList__LogicBranchListenerLastState_t m_eLastState; // 0x570		
	private:
		[[maybe_unused]] uint8_t __pad0574[0x4]; // 0x574
	public:
		entity2::CEntityIOOutput m_OnAllTrue; // 0x578		
		entity2::CEntityIOOutput m_OnAllFalse; // 0x5a0		
		entity2::CEntityIOOutput m_OnMixed; // 0x5c8		
		
		// Datamap fields:
		// void InputTest; // 0x0
		// void Input_OnLogicBranchChanged; // 0x0
		// void Input_OnLogicBranchRemoved; // 0x0
	};
};
