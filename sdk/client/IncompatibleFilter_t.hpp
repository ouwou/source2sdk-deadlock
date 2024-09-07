#pragma once
#include "client/EAbilityActivation_t.hpp"
#include "client/EAbilityBehavior_t.hpp"
#include "client/EAbilityType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x10
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct IncompatibleFilter_t
	{
	public:
		client::EAbilityBehavior_t m_nAbilityBehaviors; // 0x0		
		client::EAbilityActivation_t m_eAbilityActivation; // 0x8		
		client::EAbilityType_t m_eIncompatibleAbilityType; // 0xc		
	};
};
