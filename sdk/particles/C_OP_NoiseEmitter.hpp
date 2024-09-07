#pragma once
#include "particles/CParticleFunctionEmitter.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x208
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_NoiseEmitter : public particles::CParticleFunctionEmitter
	{
	public:
		// MPropertyFriendlyName "emission duration"
		float m_flEmissionDuration; // 0x1c8		
		// MPropertyFriendlyName "emission start time"
		float m_flStartTime; // 0x1cc		
		// MPropertyFriendlyName "scale emission to used control points"
		// MParticleMaxVersion "1"
		float m_flEmissionScale; // 0x1d0		
		// MPropertyFriendlyName "emission count scale control point"
		int32_t m_nScaleControlPoint; // 0x1d4		
		// MPropertyFriendlyName "emission count scale control point field"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nScaleControlPointField; // 0x1d8		
		// MPropertyFriendlyName "world noise scale control point"
		int32_t m_nWorldNoisePoint; // 0x1dc		
		// MPropertyFriendlyName "absolute value"
		bool m_bAbsVal; // 0x1e0		
		// MPropertyFriendlyName "invert absolute value"
		bool m_bAbsValInv; // 0x1e1		
	private:
		[[maybe_unused]] uint8_t __pad01e2[0x2]; // 0x1e2
	public:
		// MPropertyFriendlyName "time coordinate offset"
		float m_flOffset; // 0x1e4		
		// MPropertyFriendlyName "emission minimum"
		float m_flOutputMin; // 0x1e8		
		// MPropertyFriendlyName "emission maximum"
		float m_flOutputMax; // 0x1ec		
		// MPropertyFriendlyName "time noise coordinate scale"
		float m_flNoiseScale; // 0x1f0		
		// MPropertyFriendlyName "world spatial noise coordinate scale"
		float m_flWorldNoiseScale; // 0x1f4		
		// MPropertyFriendlyName "spatial coordinate offset"
		// MVectorIsCoordinate
		Vector m_vecOffsetLoc; // 0x1f8		
		// MPropertyFriendlyName "world time noise coordinate scale"
		float m_flWorldTimeScale; // 0x204		
	};
};
