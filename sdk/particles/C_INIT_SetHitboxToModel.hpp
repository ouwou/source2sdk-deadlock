#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xa40
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_SetHitboxToModel : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c8		
		// MPropertyFriendlyName "force to be inside model"
		int32_t m_nForceInModel; // 0x1cc		
		// MPropertyFriendlyName "even distribution"
		bool m_bEvenDistribution; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
	public:
		// MPropertyFriendlyName "desired hitbox"
		int32_t m_nDesiredHitbox; // 0x1d4		
		// MPropertyFriendlyName "model hitbox scale"
		particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x1d8		
		// MPropertyFriendlyName "direction bias"
		// MVectorIsCoordinate
		Vector m_vecDirectionBias; // 0x850		
		// MPropertyFriendlyName "maintain existing hitbox"
		bool m_bMaintainHitbox; // 0x85c		
		// MPropertyFriendlyName "use bones instead of hitboxes"
		bool m_bUseBones; // 0x85d		
		// MPropertyFriendlyName "hitbox set"
		char m_HitboxSetName[128]; // 0x85e		
	private:
		[[maybe_unused]] uint8_t __pad08de[0x2]; // 0x8de
	public:
		// MPropertyFriendlyName "hitbox shell thickness"
		particleslib::CParticleCollectionFloatInput m_flShellSize; // 0x8e0		
	};
};
