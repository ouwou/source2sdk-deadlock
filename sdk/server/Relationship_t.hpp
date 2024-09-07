#pragma once
#include "client/Disposition_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8
	// Has Trivial Destructor
	struct Relationship_t
	{
	public:
		client::Disposition_t disposition; // 0x0		
		int32_t priority; // 0x4		
	};
};
