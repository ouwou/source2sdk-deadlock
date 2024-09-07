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
	// Size: 0x9b8
	// Has VTable
	class CBaseProp : public server::CBaseAnimGraph
	{
	public:
		bool m_bModelOverrodeBlockLOS; // 0x978		
	private:
		[[maybe_unused]] uint8_t __pad0979[0x3]; // 0x979
	public:
		int32_t m_iShapeType; // 0x97c		
		bool m_bConformToCollisionBounds; // 0x980		
	private:
		[[maybe_unused]] uint8_t __pad0981[0x3]; // 0x981
	public:
		matrix3x4_t m_mPreferredCatchTransform; // 0x984		
		
		// Datamap fields:
		// void health; // 0x7fffffff
		// CUtlSymbolLarge propdata_override; // 0x7fffffff
	};
};
