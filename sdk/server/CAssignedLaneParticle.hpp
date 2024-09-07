#pragma once
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x770
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iTeamNum"
	// MNetworkVarNames "int m_iLane"
	class CAssignedLaneParticle : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		int32_t m_iLane; // 0x768		
	};
};
