#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1c8
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CParticleFunctionPreEmission : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "Run Only Once"
		bool m_bRunOnce; // 0x1c0		
	};
};
