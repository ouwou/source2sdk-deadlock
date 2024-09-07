#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	// 
	// MNetworkVarNames "CUtlStringToken m_ID"
	// MNetworkVarNames "Vector4D m_Values"
	struct EntityRenderAttribute_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
	public:
		// MNetworkEnable
		CUtlStringToken m_ID; // 0x30		
		// MNetworkEnable
		Vector4D m_Values; // 0x34		
	};
};
