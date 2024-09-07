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
	class C_OP_PlaneCull : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point for point on plane"
		int32_t m_nPlaneControlPoint; // 0x1c0		
		// MPropertyFriendlyName "plane normal"
		// MVectorIsCoordinate
		Vector m_vecPlaneDirection; // 0x1c4		
		// MPropertyFriendlyName "use local space"
		bool m_bLocalSpace; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
	public:
		// MPropertyFriendlyName "cull plane offset"
		float m_flPlaneOffset; // 0x1d4		
	};
};
