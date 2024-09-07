#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CServerOnlyEntity.hpp"
#include "server/HintNodeData.hpp"
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
	// Size: 0x5c0
	// Has VTable
	class CAI_Hint : public server::CServerOnlyEntity
	{
	public:
		server::HintNodeData m_NodeData; // 0x4d8		
		CHandle<server::CBaseEntity> m_hHintOwner; // 0x518		
		entity2::GameTime_t m_flNextUseTime; // 0x51c		
		CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnNPCStartedUsing; // 0x520		
		CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnNPCStoppedUsing; // 0x548		
		float m_nodeFOV; // 0x570		
		bool m_bNodeFOVCheckBehind; // 0x574		
	private:
		[[maybe_unused]] uint8_t __pad0575[0x3]; // 0x575
	public:
		Vector m_vecForward; // 0x578		
	private:
		[[maybe_unused]] uint8_t __pad0584[0x4]; // 0x584
	public:
		CUtlSymbolLarge m_iszAnimgraphEntryAction; // 0x588		
		CUtlSymbolLarge m_iszAnimgraphExitAction; // 0x590		
		CUtlSymbolLarge m_iszAnimgraphEntryCmd; // 0x598		
		CUtlSymbolLarge m_iszAnimgraphExitCmd; // 0x5a0		
		CUtlSymbolLarge m_iszNavlinkTargetName; // 0x5a8		
		bool m_bRemoveOnUnreserved; // 0x5b0		
	private:
		[[maybe_unused]] uint8_t __pad05b1[0x3]; // 0x5b1
	public:
		CHandle<server::CBaseEntity> m_hAssociatedEntity; // 0x5b4		
		float m_flInteractionDistance; // 0x5b8		
		float m_flCooldown; // 0x5bc		
		
		// Datamap fields:
		// void CAI_HintEnableThink; // 0x0
		// void InputEnableHint; // 0x0
		// void InputDisableHint; // 0x0
		// void InputToggleHint; // 0x0
	};
};
