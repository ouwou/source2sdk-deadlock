#pragma once
#include "client/CInfoDynamicShadowHint.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x588
	// Has VTable
	class CInfoDynamicShadowHintBox : public client::CInfoDynamicShadowHint
	{
	public:
		Vector m_vBoxMins; // 0x570		
		Vector m_vBoxMaxs; // 0x57c		
	};
};
