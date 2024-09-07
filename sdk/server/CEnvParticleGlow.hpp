#pragma once
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "server/CParticleSystem.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xcf8
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flAlphaScale"
	// MNetworkVarNames "float32 m_flRadiusScale"
	// MNetworkVarNames "float32 m_flSelfIllumScale"
	// MNetworkVarNames "Color m_ColorTint"
	// MNetworkVarNames "HRenderTextureStrong m_hTextureOverride"
	class CEnvParticleGlow : public server::CParticleSystem
	{
	public:
		// MNetworkEnable
		float m_flAlphaScale; // 0xce0		
		// MNetworkEnable
		float m_flRadiusScale; // 0xce4		
		// MNetworkEnable
		float m_flSelfIllumScale; // 0xce8		
		// MNetworkEnable
		Color m_ColorTint; // 0xcec		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hTextureOverride; // 0xcf0		
		
		// Datamap fields:
		// float InputSetScale; // 0x0
		// float InputSetAlphaScale; // 0x0
		// Color InputSetColorTint; // 0x0
	};
};
