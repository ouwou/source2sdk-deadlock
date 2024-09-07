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
	class C_OP_VelocityMatchingForce : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "direction matching strength"
		float m_flDirScale; // 0x1c0		
		// MPropertyFriendlyName "speed matching strength"
		float m_flSpdScale; // 0x1c4		
		// MPropertyFriendlyName "neighbor distance"
		float m_flNeighborDistance; // 0x1c8		
		// MPropertyFriendlyName "facing strength falloff"
		float m_flFacingStrength; // 0x1cc		
		// MPropertyFriendlyName "use AABB"
		// MPropertySuppressExpr "m_flNeighborDistance > 0"
		bool m_bUseAABB; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
	public:
		// MPropertyFriendlyName "control point to broadcast speed and direction to"
		int32_t m_nCPBroadcast; // 0x1d4		
	};
};
