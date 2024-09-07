#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x64
	// Has Trivial Constructor
	// Has Trivial Destructor
	struct dynpitchvol_base_t
	{
	public:
		int32_t preset; // 0x0		
		int32_t pitchrun; // 0x4		
		int32_t pitchstart; // 0x8		
		int32_t spinup; // 0xc		
		int32_t spindown; // 0x10		
		int32_t volrun; // 0x14		
		int32_t volstart; // 0x18		
		int32_t fadein; // 0x1c		
		int32_t fadeout; // 0x20		
		int32_t lfotype; // 0x24		
		int32_t lforate; // 0x28		
		int32_t lfomodpitch; // 0x2c		
		int32_t lfomodvol; // 0x30		
		int32_t cspinup; // 0x34		
		int32_t cspincount; // 0x38		
		int32_t pitch; // 0x3c		
		int32_t spinupsav; // 0x40		
		int32_t spindownsav; // 0x44		
		int32_t pitchfrac; // 0x48		
		int32_t vol; // 0x4c		
		int32_t fadeinsav; // 0x50		
		int32_t fadeoutsav; // 0x54		
		int32_t volfrac; // 0x58		
		int32_t lfofrac; // 0x5c		
		int32_t lfomult; // 0x60		
	};
};
