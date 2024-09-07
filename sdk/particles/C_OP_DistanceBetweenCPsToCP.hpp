#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particles/ParticleParentSetMode_t.hpp"
#include "particles/ParticleTraceSet_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x280
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_DistanceBetweenCPsToCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "starting control point"
		int32_t m_nStartCP; // 0x1c8		
		// MPropertyFriendlyName "ending control point"
		int32_t m_nEndCP; // 0x1cc		
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutputCP; // 0x1d0		
		// MPropertyFriendlyName "output control point field"
		int32_t m_nOutputCPField; // 0x1d4		
		// MPropertyFriendlyName "only set distance once"
		bool m_bSetOnce; // 0x1d8		
	private:
		[[maybe_unused]] uint8_t __pad01d9[0x3]; // 0x1d9
	public:
		// MPropertyFriendlyName "distance minimum"
		float m_flInputMin; // 0x1dc		
		// MPropertyFriendlyName "distance maximum"
		float m_flInputMax; // 0x1e0		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1e4		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1e8		
		// MPropertyFriendlyName "maximum trace length"
		float m_flMaxTraceLength; // 0x1ec		
		// MPropertyFriendlyName "LOS Failure Scale"
		float m_flLOSScale; // 0x1f0		
		// MPropertyFriendlyName "ensure line of sight"
		bool m_bLOS; // 0x1f4		
		// MPropertyFriendlyName "LOS collision group"
		char m_CollisionGroupName[128]; // 0x1f5		
	private:
		[[maybe_unused]] uint8_t __pad0275[0x3]; // 0x275
	public:
		// MPropertyFriendlyName "Trace Set"
		particles::ParticleTraceSet_t m_nTraceSet; // 0x278		
		// MPropertyFriendlyName "set parent"
		particles::ParticleParentSetMode_t m_nSetParent; // 0x27c		
	};
};
