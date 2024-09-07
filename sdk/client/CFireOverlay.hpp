#pragma once
#include "client/CGlowOverlay.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_FireSmoke;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x110
	// Has VTable
	class CFireOverlay : public client::CGlowOverlay
	{
	public:
		client::C_FireSmoke* m_pOwner; // 0xd0		
		Vector m_vBaseColors[4]; // 0xd8		
		float m_flScale; // 0x108		
		int32_t m_nGUID; // 0x10c		
	};
};
