#pragma once
#include "client/CGlowOverlay.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xf8
	// Has VTable
	class C_LightGlowOverlay : public client::CGlowOverlay
	{
	public:
		Vector m_vecOrigin; // 0xd0		
		Vector m_vecDirection; // 0xdc		
		int32_t m_nMinDist; // 0xe8		
		int32_t m_nMaxDist; // 0xec		
		int32_t m_nOuterMaxDist; // 0xf0		
		bool m_bOneSided; // 0xf4		
		bool m_bModulateByDot; // 0xf5		
	};
};
