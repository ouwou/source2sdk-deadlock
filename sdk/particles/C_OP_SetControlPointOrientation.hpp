#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x350
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetControlPointOrientation : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "set orientation in world space"
		bool m_bUseWorldLocation; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01c9[0x1]; // 0x1c9
	public:
		// MPropertyFriendlyName "randomize"
		bool m_bRandomize; // 0x1ca		
		// MPropertyFriendlyName "only set orientation once"
		bool m_bSetOnce; // 0x1cb		
		// MPropertyFriendlyName "control point number"
		int32_t m_nCP; // 0x1cc		
		// MPropertyFriendlyName "control point to offset orientation from"
		int32_t m_nHeadLocation; // 0x1d0		
		// MPropertyFriendlyName "pitch yaw roll"
		QAngle m_vecRotation; // 0x1d4		
		// MPropertyFriendlyName "pitch yaw roll max"
		QAngle m_vecRotationB; // 0x1e0		
	private:
		[[maybe_unused]] uint8_t __pad01ec[0x4]; // 0x1ec
	public:
		// MPropertyFriendlyName "interpolation"
		particleslib::CParticleCollectionFloatInput m_flInterpolation; // 0x1f0		
	};
};
