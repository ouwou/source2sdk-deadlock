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
	// Size: 0x210
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetControlPointPositions : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "set positions in world space"
		bool m_bUseWorldLocation; // 0x1c8		
		// MPropertyFriendlyName "inherit CP orientation"
		bool m_bOrient; // 0x1c9		
		// MPropertyFriendlyName "only set position once"
		bool m_bSetOnce; // 0x1ca		
	private:
		[[maybe_unused]] uint8_t __pad01cb[0x1]; // 0x1cb
	public:
		// MPropertyFriendlyName "first control point number"
		int32_t m_nCP1; // 0x1cc		
		// MPropertyFriendlyName "second control point number"
		int32_t m_nCP2; // 0x1d0		
		// MPropertyFriendlyName "third control point number"
		int32_t m_nCP3; // 0x1d4		
		// MPropertyFriendlyName "fourth control point number"
		int32_t m_nCP4; // 0x1d8		
		// MPropertyFriendlyName "first control point location"
		// MVectorIsCoordinate
		Vector m_vecCP1Pos; // 0x1dc		
		// MPropertyFriendlyName "second control point location"
		// MVectorIsCoordinate
		Vector m_vecCP2Pos; // 0x1e8		
		// MPropertyFriendlyName "third control point location"
		// MVectorIsCoordinate
		Vector m_vecCP3Pos; // 0x1f4		
		// MPropertyFriendlyName "fourth control point location"
		// MVectorIsCoordinate
		Vector m_vecCP4Pos; // 0x200		
		// MPropertyFriendlyName "control point to offset positions from"
		int32_t m_nHeadLocation; // 0x20c		
	};
};
