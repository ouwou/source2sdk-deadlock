#pragma once
#include "server/CLogicalEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x510
	// Has VTable
	class CMathColorBlend : public server::CLogicalEntity
	{
	public:
		float m_flInMin; // 0x4d8		
		float m_flInMax; // 0x4dc		
		Color m_OutColor1; // 0x4e0		
		Color m_OutColor2; // 0x4e4		
		CEntityOutputTemplate<Color> m_OutValue; // 0x4e8		
		
		// Datamap fields:
		// float InputValue; // 0x0
	};
};
