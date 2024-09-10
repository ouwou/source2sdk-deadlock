#pragma once
#include "server/CBaseAnimGraph.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9e0
	// Has VTable
	class CBaseProp : public server::CBaseAnimGraph
	{
	public:
		bool m_bModelOverrodeBlockLOS; // 0x9a0		
	private:
		[[maybe_unused]] uint8_t __pad09a1[0x3]; // 0x9a1
	public:
		int32_t m_iShapeType; // 0x9a4		
		bool m_bConformToCollisionBounds; // 0x9a8		
	private:
		[[maybe_unused]] uint8_t __pad09a9[0x3]; // 0x9a9
	public:
		matrix3x4_t m_mPreferredCatchTransform; // 0x9ac		
		
		// Datamap fields:
		// void health; // 0x7fffffff
		// CUtlSymbolLarge propdata_override; // 0x7fffffff
	};
};
