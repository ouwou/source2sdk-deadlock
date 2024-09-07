#pragma once
#include "client/C_ParticleSystem.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xdf8
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flAlphaScale"
	// MNetworkVarNames "float32 m_flRadiusScale"
	// MNetworkVarNames "float32 m_flSelfIllumScale"
	// MNetworkVarNames "Color m_ColorTint"
	// MNetworkVarNames "HRenderTextureStrong m_hTextureOverride"
	class C_EnvParticleGlow : public client::C_ParticleSystem
	{
	public:
		// MNetworkEnable
		float m_flAlphaScale; // 0xde0		
		// MNetworkEnable
		float m_flRadiusScale; // 0xde4		
		// MNetworkEnable
		float m_flSelfIllumScale; // 0xde8		
		// MNetworkEnable
		Color m_ColorTint; // 0xdec		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hTextureOverride; // 0xdf0		
		
		// Datamap fields:
		// float InputSetScale; // 0x0
		// float InputSetAlphaScale; // 0x0
		// Color InputSetColorTint; // 0x0
	};
};
