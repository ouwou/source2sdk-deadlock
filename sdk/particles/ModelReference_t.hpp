#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x10
	// 
	// MGetKV3ClassDefaults
	struct ModelReference_t
	{
	public:
		// MPropertyFriendlyName "model"
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_model; // 0x0		
		// MPropertyFriendlyName "Relative probability"
		float m_flRelativeProbabilityOfSpawn; // 0x8		
	};
};
