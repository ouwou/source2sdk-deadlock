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
	// Size: 0x1d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_MovementMaintainOffset : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "desired offset"
		// MVectorIsCoordinate
		Vector m_vecOffset; // 0x1c0		
		// MPropertyFriendlyName "local space CP"
		int32_t m_nCP; // 0x1cc		
		// MPropertyFriendlyName "scale by radius"
		bool m_bRadiusScale; // 0x1d0		
	};
};
