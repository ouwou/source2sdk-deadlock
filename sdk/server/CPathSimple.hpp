#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x538
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "CUtlString m_pathString"
	class CPathSimple : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x58]; // 0x4d8
	public:
		// MNetworkEnable
		CUtlString m_pathString; // 0x530		
	};
};
