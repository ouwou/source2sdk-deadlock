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
	// Size: 0xa98
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
		CUtlSymbolLarge m_iszPreCommands; // 0x9a0		
		CUtlSymbolLarge m_iszPostCommands; // 0x9a8		
		// MNetworkEnable
		CUtlSymbolLarge m_iszCommentaryFile; // 0x9b0		
		CUtlSymbolLarge m_iszViewTarget; // 0x9b8		
		CHandle<server::CBaseEntity> m_hViewTarget; // 0x9c0		
		CHandle<server::CBaseEntity> m_hViewTargetAngles; // 0x9c4		
		CUtlSymbolLarge m_iszViewPosition; // 0x9c8		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hViewPosition; // 0x9d0		
		CHandle<server::CBaseEntity> m_hViewPositionMover; // 0x9d4		
		bool m_bPreventMovement; // 0x9d8		
		bool m_bUnderCrosshair; // 0x9d9		
		bool m_bUnstoppable; // 0x9da		
	private:
		[[maybe_unused]] uint8_t __pad09db[0x1]; // 0x9db
	public:
		entity2::GameTime_t m_flFinishedTime; // 0x9dc		
		Vector m_vecFinishOrigin; // 0x9e0		
		QAngle m_vecOriginalAngles; // 0x9ec		
		QAngle m_vecFinishAngles; // 0x9f8		
		bool m_bPreventChangesWhileMoving; // 0xa04		
		bool m_bDisabled; // 0xa05		
	private:
		[[maybe_unused]] uint8_t __pad0a06[0x2]; // 0xa06
	public:
		Vector m_vecTeleportOrigin; // 0xa08		
		entity2::GameTime_t m_flAbortedPlaybackAt; // 0xa14		
		entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0xa18		
		entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0xa40		
		// MNetworkEnable
		bool m_bActive; // 0xa68		
	private:
		[[maybe_unused]] uint8_t __pad0a69[0x3]; // 0xa69
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flStartTime; // 0xa6c		
		// MNetworkEnable
		float m_flStartTimeInCommentary; // 0xa70		
	private:
		[[maybe_unused]] uint8_t __pad0a74[0x4]; // 0xa74
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszTitle; // 0xa78		
		// MNetworkEnable
		CUtlSymbolLarge m_iszSpeakers; // 0xa80		
		// MNetworkEnable
		int32_t m_iNodeNumber; // 0xa88		
		// MNetworkEnable
		int32_t m_iNodeNumberMax; // 0xa8c		
		// MNetworkEnable
		bool m_bListenedTo; // 0xa90		
		
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
