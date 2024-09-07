#pragma once
#include "client/CAI_Component.hpp"
#include "client/CSimTimer.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CAI_WaypointList.hpp"
#include "server/CNavSmartGoalHelper.hpp"
#include "server/Navigation_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CAI_Path;
};
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
	// Size: 0x170
	// Has VTable
	class CAI_Navigator : public client::CAI_Component
	{
	private:
		[[maybe_unused]] uint8_t __pad0040[0x8]; // 0x40
	public:
		float m_flGoalStoppingDistance; // 0x48		
		server::Navigation_t m_navType; // 0x4c		
		bool m_bNavComplete; // 0x50		
	private:
		[[maybe_unused]] uint8_t __pad0051[0x1f]; // 0x51
	public:
		server::CAI_Path* m_pPath; // 0x70		
		CHandle<server::CBaseEntity> m_hLosTarget; // 0x78		
	private:
		[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
	public:
		server::CAI_WaypointList m_interruptPathWaypoints; // 0x80		
		entity2::GameTime_t m_flLastSuccessfulSimplifyTime; // 0x88		
		entity2::GameTime_t m_flTimeLastAvoidanceTriangulate; // 0x8c		
		entity2::GameTime_t m_flLastMoveTime; // 0x90		
		entity2::GameTime_t m_flStartWaitingForFacingTime; // 0x94		
		bool m_bPeerMoveWait; // 0x98		
	private:
		[[maybe_unused]] uint8_t __pad0099[0x3]; // 0x99
	public:
		CHandle<server::CBaseEntity> m_hPeerWaitingOn; // 0x9c		
		client::CSimTimer m_PeerWaitMoveTimer; // 0xa0		
		client::CSimTimer m_PeerWaitClearTimer; // 0xac		
		client::CSimTimer m_NextSidestepTimer; // 0xb8		
		CHandle<server::CBaseEntity> m_hBigStepGroundEnt; // 0xc4		
		CHandle<server::CBaseEntity> m_hLastBlockingEnt; // 0xc8		
		Vector m_vPosBeginFailedSteer; // 0xcc		
		entity2::GameTime_t m_timeBeginFailedSteer; // 0xd8		
		int32_t m_nNavFailCounter; // 0xdc		
		entity2::GameTime_t m_flLastNavFailTime; // 0xe0		
		bool m_bShouldBruteForceFailedNav; // 0xe4		
		bool m_bNavChangedAlongPath; // 0xe5		
	private:
		[[maybe_unused]] uint8_t __pad00e6[0x2]; // 0xe6
	public:
		int32_t m_nPreviousCollisionGroup; // 0xe8		
		entity2::GameTime_t m_flLastNpcOverlapTime; // 0xec		
		float m_flGoalTolerance; // 0xf0		
		float m_flWaypointTolerance; // 0xf4		
		Vector m_vGoalDirection; // 0xf8		
		CHandle<server::CBaseEntity> m_hGoalDirectionTarget; // 0x104		
		float m_flGoalDirectionToleranceDot; // 0x108		
		float m_flPathEndGoalRange; // 0x10c		
		float m_flPathEndGoalRange_Repathing; // 0x110		
		bool m_bGoalRequiresCrouch; // 0x114		
	private:
		[[maybe_unused]] uint8_t __pad0115[0x3]; // 0x115
	public:
		float m_flGoalMaxPathLength; // 0x118		
		float m_flGoalMaxTravelDist; // 0x11c		
		CUtlString m_pathRestrictionTag; // 0x120		
	private:
		[[maybe_unused]] uint8_t __pad0128[0x18]; // 0x128
	public:
		server::CNavSmartGoalHelper m_smartGoalHelper; // 0x140		
	};
};
