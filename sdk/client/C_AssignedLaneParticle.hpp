#pragma once
#include "client/C_BaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x858
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iTeamNum"
	// MNetworkVarNames "int m_iLane"
	class C_AssignedLaneParticle : public client::C_BaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0830[0x20]; // 0x830
	public:
		// MNetworkEnable
		int32_t m_iLane; // 0x850		
	};
};
