#pragma once
#include "client/C_BaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5b8
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "CUtlString m_pathString"
	class CPathSimple : public client::C_BaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0558[0x58]; // 0x558
	public:
		// MNetworkEnable
		CUtlString m_pathString; // 0x5b0		
	};
};
