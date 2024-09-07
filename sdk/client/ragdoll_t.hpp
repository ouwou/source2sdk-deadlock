#pragma once
#include "client/ragdollelement_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x38
	struct ragdoll_t
	{
	public:
		CUtlVector<client::ragdollelement_t> list; // 0x0		
		CUtlVector<int32_t> boneIndex; // 0x18		
		bool allowStretch; // 0x30		
		bool unused; // 0x31		
	};
};
