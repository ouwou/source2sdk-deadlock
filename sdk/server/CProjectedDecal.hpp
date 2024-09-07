#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4e0
	// Has VTable
	class CProjectedDecal : public server::CPointEntity
	{
	public:
		int32_t m_nTexture; // 0x4d8		
		float m_flDistance; // 0x4dc		
		
		// Datamap fields:
		// void CProjectedDecalTriggerDecal; // 0x0
		// void CProjectedDecalStaticDecal; // 0x0
		// void InputActivate; // 0x0
		// CUtlString texture; // 0x7fffffff
	};
};
