#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/DetailCombo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x218
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_StatusEffectCitadel : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "$SFXColorWarpAmount"
		float m_flSFXColorWarpAmount; // 0x1c8		
		// MPropertyFriendlyName "$SFXNormalAmount"
		float m_flSFXNormalAmount; // 0x1cc		
		// MPropertyFriendlyName "$SFXMetalnessAmount"
		float m_flSFXMetalnessAmount; // 0x1d0		
		// MPropertyFriendlyName "$SFXRoughnessAmount"
		float m_flSFXRoughnessAmount; // 0x1d4		
		// MPropertyFriendlyName "$SFXSelfIllumAmount"
		float m_flSFXSelfIllumAmount; // 0x1d8		
		// MPropertyFriendlyName "$SFXTextureScale"
		float m_flSFXSScale; // 0x1dc		
		// MPropertyFriendlyName "$SFXTextureScrollX"
		float m_flSFXSScrollX; // 0x1e0		
		// MPropertyFriendlyName "$SFXTextureScrollY"
		float m_flSFXSScrollY; // 0x1e4		
		// MPropertyFriendlyName "$SFXTextureScrollZ"
		float m_flSFXSScrollZ; // 0x1e8		
		// MPropertyFriendlyName "$SFXTextureOffsetX"
		float m_flSFXSOffsetX; // 0x1ec		
		// MPropertyFriendlyName "$SFXTextureOffsetY"
		float m_flSFXSOffsetY; // 0x1f0		
		// MPropertyFriendlyName "$SFXTextureOffsetZ"
		float m_flSFXSOffsetZ; // 0x1f4		
		// MPropertyFriendlyName "D_DETAIL"
		particles::DetailCombo_t m_nDetailCombo; // 0x1f8		
		// MPropertyFriendlyName "$SFXDetailAmount"
		float m_flSFXSDetailAmount; // 0x1fc		
		// MPropertyFriendlyName "$SFXDetailTextureScale"
		float m_flSFXSDetailScale; // 0x200		
		// MPropertyFriendlyName "$SFXDetailTextureScrollX"
		float m_flSFXSDetailScrollX; // 0x204		
		// MPropertyFriendlyName "$SFXDetailTextureScrollY"
		float m_flSFXSDetailScrollY; // 0x208		
		// MPropertyFriendlyName "$SFXDetailTextureScrollZ"
		float m_flSFXSDetailScrollZ; // 0x20c		
		// MPropertyFriendlyName "$SFXUseModelUVs"
		float m_flSFXSUseModelUVs; // 0x210		
	};
};
