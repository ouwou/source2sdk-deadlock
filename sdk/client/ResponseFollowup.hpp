#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x31
	// Has Trivial Destructor
	class ResponseFollowup
	{
	public:
		char* followup_concept; // 0x0		
		char* followup_contexts; // 0x8		
		float followup_delay; // 0x10		
		char* followup_target; // 0x14		
		char* followup_entityiotarget; // 0x1c		
		char* followup_entityioinput; // 0x24		
		float followup_entityiodelay; // 0x2c		
		bool bFired; // 0x30		
	};
};
