#pragma once
#include "server/CAI_CitadelNPCVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xfa0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelPlayerBotNPCBrainVData : public server::CAI_CitadelNPCVData
	{
	public:
		// MPropertyStartGroup "Movement"
		float m_flJumpMaxRise; // 0xf30		
		float m_flAirJumpMin; // 0xf34		
		float m_flJumpMaxDrop; // 0xf38		
		float m_flJumpMaxDist; // 0xf3c		
		float m_flJumpMinDist; // 0xf40		
		float m_flClimbUpCostBase; // 0xf44		
		float m_flClimbUpCostScalar; // 0xf48		
		float m_flFaceTargetDistance; // 0xf4c		
		float m_flNavGoalTolerance; // 0xf50		
		float m_flVerticalAttachOffset; // 0xf54		
		float m_flStuckTime; // 0xf58		
		float m_flStuckTimeAir; // 0xf5c		
		float m_flMajorStuckTime; // 0xf60		
		float m_flStuckDistance; // 0xf64		
		float m_flMaxPathDistance; // 0xf68		
		float m_flMinLanePathDistance; // 0xf6c		
		float m_flEnemyDistanceForReload; // 0xf70		
		float m_flReloadEnemyFarPct; // 0xf74		
		float m_flReloadEnemyLoSPct; // 0xf78		
		float m_flReloadEnemyLosTime; // 0xf7c		
		float m_flMinShootTimeToReload; // 0xf80		
		float m_flDashDamageThreshold; // 0xf84		
		float m_flDashDamageTickDown; // 0xf88		
		float m_flMinDesiredDashDist; // 0xf8c		
		float m_flMinAbilityAimTime; // 0xf90		
		float m_flDisengageFromEnemyToLaneDist; // 0xf94		
		float m_flDefendBaseSearchRadius; // 0xf98		
	};
};
