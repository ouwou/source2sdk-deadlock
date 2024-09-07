#pragma once
#include "client/EMantleType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct MantleType_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MPropertyDescription "The minimum height difference of the player origin from the ledge for this type to be selected"
		float m_flMinHeight; // 0x8		
		// MPropertyDescription "How much vertical distance the anim of this type will appear to travel"
		float m_flAnimHeight; // 0xc		
		// MPropertyDescription "The maximum height difference of the player origin from the ledge for this type to be selected"
		float m_flMaxHeight; // 0x10		
		// MPropertyDescription "How long to apply all of the vertical movement of this mantle"
		float m_flVerticalTime; // 0x14		
		// MPropertyDescription "How long to apply all of the horizontal movement of this mantle.  NOTE: Horizontal applies after the vertical"
		float m_flHorizontalTime; // 0x18		
		client::EMantleType m_eMantleType; // 0x1c		
	};
};
