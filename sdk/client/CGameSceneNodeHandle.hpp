#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x10
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "CEntityHandle m_hOwner"
	// MNetworkVarNames "CUtlStringToken m_name"
	class CGameSceneNodeHandle
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		CEntityHandle m_hOwner; // 0x8		
		// MNetworkEnable
		CUtlStringToken m_name; // 0xc		
	};
};
