#pragma once
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x68
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "Vector dirPrimary"
	// MNetworkVarNames "Color colorPrimary"
	// MNetworkVarNames "Color colorSecondary"
	// MNetworkVarNames "Color colorPrimaryLerpTo"
	// MNetworkVarNames "Color colorSecondaryLerpTo"
	// MNetworkVarNames "float32 start"
	// MNetworkVarNames "float32 end"
	// MNetworkVarNames "float32 farz"
	// MNetworkVarNames "float32 maxdensity"
	// MNetworkVarNames "float32 exponent"
	// MNetworkVarNames "float32 HDRColorScale"
	// MNetworkVarNames "float32 skyboxFogFactor"
	// MNetworkVarNames "float32 skyboxFogFactorLerpTo"
	// MNetworkVarNames "float32 startLerpTo"
	// MNetworkVarNames "float32 endLerpTo"
	// MNetworkVarNames "float32 maxdensityLerpTo"
	// MNetworkVarNames "GameTime_t lerptime"
	// MNetworkVarNames "float32 duration"
	// MNetworkVarNames "float32 blendtobackground"
	// MNetworkVarNames "float32 scattering"
	// MNetworkVarNames "float32 locallightscale"
	// MNetworkVarNames "bool enable"
	// MNetworkVarNames "bool blend"
	// MNetworkVarNames "bool m_bNoReflectionFog"
	struct fogparams_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector dirPrimary; // 0x8		
		// MNetworkEnable
		Color colorPrimary; // 0x14		
		// MNetworkEnable
		Color colorSecondary; // 0x18		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		Color colorPrimaryLerpTo; // 0x1c		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		Color colorSecondaryLerpTo; // 0x20		
		// MNetworkEnable
		float start; // 0x24		
		// MNetworkEnable
		float end; // 0x28		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		float farz; // 0x2c		
		// MNetworkEnable
		float maxdensity; // 0x30		
		// MNetworkEnable
		float exponent; // 0x34		
		// MNetworkEnable
		float HDRColorScale; // 0x38		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		float skyboxFogFactor; // 0x3c		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		float skyboxFogFactorLerpTo; // 0x40		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		float startLerpTo; // 0x44		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		float endLerpTo; // 0x48		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		float maxdensityLerpTo; // 0x4c		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		entity2::GameTime_t lerptime; // 0x50		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		float duration; // 0x54		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		float blendtobackground; // 0x58		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		float scattering; // 0x5c		
		// MNetworkEnable
		// MNetworkUserGroup "FogController"
		float locallightscale; // 0x60		
		// MNetworkEnable
		bool enable; // 0x64		
		// MNetworkEnable
		bool blend; // 0x65		
		// MNetworkEnable
		bool m_bNoReflectionFog; // 0x66		
		bool m_bPadding; // 0x67		
	};
};
