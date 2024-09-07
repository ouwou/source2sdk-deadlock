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
	// Size: 0x1f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_TeleportBeam : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "Position Control Point"
		int32_t m_nCPPosition; // 0x1c0		
		// MPropertyFriendlyName "Velocity Control Point"
		int32_t m_nCPVelocity; // 0x1c4		
		// MPropertyFriendlyName "Misc Control Point"
		int32_t m_nCPMisc; // 0x1c8		
		// MPropertyFriendlyName "Color Control Point"
		int32_t m_nCPColor; // 0x1cc		
		// MPropertyFriendlyName "Invalid Color Control Point"
		int32_t m_nCPInvalidColor; // 0x1d0		
		// MPropertyFriendlyName "Extra Arc Data Point"
		int32_t m_nCPExtraArcData; // 0x1d4		
		// MPropertyFriendlyName "Gravity"
		Vector m_vGravity; // 0x1d8		
		// MPropertyFriendlyName "Arc Duration Maximum"
		float m_flArcMaxDuration; // 0x1e4		
		// MPropertyFriendlyName "Segment Break"
		float m_flSegmentBreak; // 0x1e8		
		// MPropertyFriendlyName "Arc Speed"
		float m_flArcSpeed; // 0x1ec		
		// MPropertyFriendlyName "Alpha"
		float m_flAlpha; // 0x1f0		
	};
};
