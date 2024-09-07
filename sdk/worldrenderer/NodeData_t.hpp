#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x50
	// 
	// MGetKV3ClassDefaults
	struct NodeData_t
	{
	public:
		int32_t m_nParent; // 0x0		
		Vector m_vOrigin; // 0x4		
		Vector m_vMinBounds; // 0x10		
		Vector m_vMaxBounds; // 0x1c		
		float m_flMinimumDistance; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
	public:
		CUtlVector<int32_t> m_ChildNodeIndices; // 0x30		
		CUtlString m_worldNodePrefix; // 0x48		
	};
};
