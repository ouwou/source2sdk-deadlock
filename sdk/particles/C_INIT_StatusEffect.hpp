#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/Detail2Combo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x228
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_StatusEffect : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "D_DETAIL_2"
		particles::Detail2Combo_t m_nDetail2Combo; // 0x1c8		
		// MPropertyFriendlyName "$DETAIL2ROTATION"
		float m_flDetail2Rotation; // 0x1cc		
		// MPropertyFriendlyName "$DETAIL2SCALE"
		float m_flDetail2Scale; // 0x1d0		
		// MPropertyFriendlyName "$DETAIL2BLENDFACTOR"
		float m_flDetail2BlendFactor; // 0x1d4		
		// MPropertyFriendlyName "$COLORWARPINTENSITY"
		float m_flColorWarpIntensity; // 0x1d8		
		// MPropertyFriendlyName "$DIFFUSEWARPBLENDTOFULL"
		float m_flDiffuseWarpBlendToFull; // 0x1dc		
		// MPropertyFriendlyName "$ENVMAPINTENSITY"
		float m_flEnvMapIntensity; // 0x1e0		
		// MPropertyFriendlyName "$AMBIENTSCALE"
		float m_flAmbientScale; // 0x1e4		
		// MPropertyFriendlyName "$SPECULARCOLOR"
		Color m_specularColor; // 0x1e8		
		// MPropertyFriendlyName "$SPECULARSCALE"
		float m_flSpecularScale; // 0x1ec		
		// MPropertyFriendlyName "$SPECULAREXPONENT"
		float m_flSpecularExponent; // 0x1f0		
		// MPropertyFriendlyName "$SPECULAREXPONENTBLENDTOFULL"
		float m_flSpecularExponentBlendToFull; // 0x1f4		
		// MPropertyFriendlyName "$SPECULARBLENDTOFULL"
		float m_flSpecularBlendToFull; // 0x1f8		
		// MPropertyFriendlyName "$RIMLIGHTCOLOR"
		Color m_rimLightColor; // 0x1fc		
		// MPropertyFriendlyName "$RIMLIGHTSCALE"
		float m_flRimLightScale; // 0x200		
		// MPropertyFriendlyName "$REFLECTIONSTINTBYBASEBLENDTONONE"
		float m_flReflectionsTintByBaseBlendToNone; // 0x204		
		// MPropertyFriendlyName "$METALNESSBLENDTOFULL"
		float m_flMetalnessBlendToFull; // 0x208		
		// MPropertyFriendlyName "$SELFILLUMBLENDTOFULL"
		float m_flSelfIllumBlendToFull; // 0x20c		
	};
};
