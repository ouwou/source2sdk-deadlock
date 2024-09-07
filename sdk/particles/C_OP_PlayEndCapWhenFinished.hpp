#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_PlayEndCapWhenFinished : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "play when emission ends"
		bool m_bFireOnEmissionEnd; // 0x1c8		
		// MPropertyFriendlyName "wait for children to finish"
		bool m_bIncludeChildren; // 0x1c9		
	};
};
