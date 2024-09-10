#pragma once
#include "client/CBaseAnimGraph.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb80
	// Has VTable
	class CBaseProp : public client::CBaseAnimGraph
	{
	public:
		bool m_bModelOverrodeBlockLOS; // 0xb40		
	private:
		[[maybe_unused]] uint8_t __pad0b41[0x3]; // 0xb41
	public:
		int32_t m_iShapeType; // 0xb44		
		bool m_bConformToCollisionBounds; // 0xb48		
	private:
		[[maybe_unused]] uint8_t __pad0b49[0x3]; // 0xb49
	public:
		matrix3x4_t m_mPreferredCatchTransform; // 0xb4c		
		
		// Datamap fields:
		// void health; // 0x7fffffff
		// CUtlSymbolLarge propdata_override; // 0x7fffffff
	};
};
