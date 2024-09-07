#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x14
	// Has Trivial Destructor
	struct hudtextparms_t
	{
	public:
		Color color1; // 0x0		
		Color color2; // 0x4		
		uint8_t effect; // 0x8		
		uint8_t channel; // 0x9		
	private:
		[[maybe_unused]] uint8_t __pad000a[0x2]; // 0xa
	public:
		float x; // 0xc		
		float y; // 0x10		
	};
};
