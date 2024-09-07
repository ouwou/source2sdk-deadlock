#pragma once
#include "server/CInfoDynamicShadowHint.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x508
	// Has VTable
	class CInfoDynamicShadowHintBox : public server::CInfoDynamicShadowHint
	{
	public:
		Vector m_vBoxMins; // 0x4f0		
		Vector m_vBoxMaxs; // 0x4fc		
	};
};
