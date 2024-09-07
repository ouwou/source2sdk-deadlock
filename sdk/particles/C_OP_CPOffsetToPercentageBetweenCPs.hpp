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
	// Size: 0x1f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_CPOffsetToPercentageBetweenCPs : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "percentage minimum"
		float m_flInputMin; // 0x1c0		
		// MPropertyFriendlyName "percentage maximum"
		float m_flInputMax; // 0x1c4		
		// MPropertyFriendlyName "percentage bias"
		float m_flInputBias; // 0x1c8		
		// MPropertyFriendlyName "starting control point"
		int32_t m_nStartCP; // 0x1cc		
		// MPropertyFriendlyName "ending control point"
		int32_t m_nEndCP; // 0x1d0		
		// MPropertyFriendlyName "offset control point"
		int32_t m_nOffsetCP; // 0x1d4		
		// MPropertyFriendlyName "output control point"
		int32_t m_nOuputCP; // 0x1d8		
		// MPropertyFriendlyName "input control point"
		int32_t m_nInputCP; // 0x1dc		
		// MPropertyFriendlyName "treat distance between points as radius"
		bool m_bRadialCheck; // 0x1e0		
		// MPropertyFriendlyName "treat offset as scale of total distance"
		bool m_bScaleOffset; // 0x1e1		
	private:
		[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
	public:
		// MPropertyFriendlyName "offset amount"
		// MVectorIsCoordinate
		Vector m_vecOffset; // 0x1e4		
	};
};
