#pragma once
#include "entity2/GameTime_t.hpp"
#include "navlib/NavGravity_t.hpp"
#include "server/AI_NavGoalFlags_t.hpp"
#include "server/CAI_WaypointList.hpp"
#include "server/GoalType_t.hpp"
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
	// Size: 0xc8
	// Has VTable
	class CAI_Path
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		server::CAI_WaypointList m_Waypoints; // 0x8		
		Vector m_vPrevWaypoint; // 0x10		
		Vector m_vPrevWaypointBase; // 0x1c		
		server::CAI_WaypointList m_WaypointsLocal; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad0030[0x8]; // 0x30
	public:
		uint32_t m_nLocalPathHash; // 0x38		
		CHandle<server::CBaseEntity> m_hTarget; // 0x3c		
		Vector m_vTargetOffset; // 0x40		
		bool m_bGoalPosSet; // 0x4c		
	private:
		[[maybe_unused]] uint8_t __pad004d[0x3]; // 0x4d
	public:
		Vector m_vGoalActualPos; // 0x50		
		Vector m_vGoalBasePos; // 0x5c		
		Vector m_vGoalActualPos_EntityInitial; // 0x68		
		Vector m_vGoalBasePos_EntityInitial; // 0x74		
		Vector m_vGoalPosBlocked; // 0x80		
		navlib::NavGravity_t m_GravityAtGoalPos; // 0x8c		
		bool m_bGoalTypeSet; // 0x9c		
	private:
		[[maybe_unused]] uint8_t __pad009d[0x3]; // 0x9d
	public:
		server::GoalType_t m_goalType; // 0xa0		
		server::AI_NavGoalFlags_t m_goalFlags; // 0xa4		
		entity2::GameTime_t m_flGoalChangeTime; // 0xa8		
		entity2::GameTime_t m_flPathChangeTime; // 0xac		
		float m_flDistAdvancedToCurWaypoint; // 0xb0		
	private:
		[[maybe_unused]] uint8_t __pad00b4[0xc]; // 0xb4
	public:
		uint32_t m_nConstrainedToMovableMeshId; // 0xc0		
	};
};
