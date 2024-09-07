#pragma once
#include "client/C_BaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x860
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hLocalPortalLink"
	// MNetworkVarNames "EHANDLE m_hRemotePortalLink"
	// MNetworkVarNames "CUtlString m_brushModelName"
	// MNetworkVarNames "float m_flFadeStartDist"
	// MNetworkVarNames "float m_flFadeEndDist"
	// MNetworkVarNames "float m_flFadeStartAngle"
	// MNetworkVarNames "float m_flFadeEndAngle"
	// MNetworkVarNames "Color m_fadeToColor"
	class C_RenderPortal : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hLocalPortalLink; // 0x830		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hRemotePortalLink; // 0x834		
		// MNetworkEnable
		CUtlString m_brushModelName; // 0x838		
		// MNetworkEnable
		float m_flFadeStartDist; // 0x840		
		// MNetworkEnable
		float m_flFadeEndDist; // 0x844		
		// MNetworkEnable
		float m_flFadeStartAngle; // 0x848		
		// MNetworkEnable
		float m_flFadeEndAngle; // 0x84c		
		// MNetworkEnable
		Color m_fadeToColor; // 0x850		
	};
};
