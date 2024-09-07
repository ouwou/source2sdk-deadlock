#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseAnimGraph.hpp"
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
	// Size: 0xa70
	// Has VTable
	// 
	// MNetworkVarNames "string_t m_iszCommentaryFile"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hViewPosition"
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	// MNetworkVarNames "float32 m_flStartTimeInCommentary"
	// MNetworkVarNames "string_t m_iszTitle"
	// MNetworkVarNames "string_t m_iszSpeakers"
	// MNetworkVarNames "int m_iNodeNumber"
	// MNetworkVarNames "int m_iNodeNumberMax"
	// MNetworkVarNames "bool m_bListenedTo"
	class CPointCommentaryNode : public server::CBaseAnimGraph
	{
	public:
		CUtlSymbolLarge m_iszPreCommands; // 0x978		
		CUtlSymbolLarge m_iszPostCommands; // 0x980		
		// MNetworkEnable
		CUtlSymbolLarge m_iszCommentaryFile; // 0x988		
		CUtlSymbolLarge m_iszViewTarget; // 0x990		
		CHandle<server::CBaseEntity> m_hViewTarget; // 0x998		
		CHandle<server::CBaseEntity> m_hViewTargetAngles; // 0x99c		
		CUtlSymbolLarge m_iszViewPosition; // 0x9a0		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hViewPosition; // 0x9a8		
		CHandle<server::CBaseEntity> m_hViewPositionMover; // 0x9ac		
		bool m_bPreventMovement; // 0x9b0		
		bool m_bUnderCrosshair; // 0x9b1		
		bool m_bUnstoppable; // 0x9b2		
	private:
		[[maybe_unused]] uint8_t __pad09b3[0x1]; // 0x9b3
	public:
		entity2::GameTime_t m_flFinishedTime; // 0x9b4		
		Vector m_vecFinishOrigin; // 0x9b8		
		QAngle m_vecOriginalAngles; // 0x9c4		
		QAngle m_vecFinishAngles; // 0x9d0		
		bool m_bPreventChangesWhileMoving; // 0x9dc		
		bool m_bDisabled; // 0x9dd		
	private:
		[[maybe_unused]] uint8_t __pad09de[0x2]; // 0x9de
	public:
		Vector m_vecTeleportOrigin; // 0x9e0		
		entity2::GameTime_t m_flAbortedPlaybackAt; // 0x9ec		
		entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0x9f0		
		entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0xa18		
		// MNetworkEnable
		bool m_bActive; // 0xa40		
	private:
		[[maybe_unused]] uint8_t __pad0a41[0x3]; // 0xa41
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flStartTime; // 0xa44		
		// MNetworkEnable
		float m_flStartTimeInCommentary; // 0xa48		
	private:
		[[maybe_unused]] uint8_t __pad0a4c[0x4]; // 0xa4c
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszTitle; // 0xa50		
		// MNetworkEnable
		CUtlSymbolLarge m_iszSpeakers; // 0xa58		
		// MNetworkEnable
		int32_t m_iNodeNumber; // 0xa60		
		// MNetworkEnable
		int32_t m_iNodeNumberMax; // 0xa64		
		// MNetworkEnable
		bool m_bListenedTo; // 0xa68		
		
		// Datamap fields:
		// void InputStartCommentary; // 0x0
		// void InputStartUnstoppableCommentary; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void CPointCommentaryNodeSpinThink; // 0x0
		// void CPointCommentaryNodeUpdateViewThink; // 0x0
		// void CPointCommentaryNodeUpdateViewPostThink; // 0x0
		// void CPointCommentaryNodeAcculumatePlayTimeThink; // 0x0
	};
};
