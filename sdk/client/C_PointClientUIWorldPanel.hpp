#pragma once
#include "client/C_BaseClientUIEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CPointOffScreenIndicatorUi;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 16
	// Size: 0xa90
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "bool m_bIgnoreInput"
	// MNetworkVarNames "bool m_bLit"
	// MNetworkVarNames "bool m_bFollowPlayerAcrossTeleport"
	// MNetworkVarNames "float m_flWidth"
	// MNetworkVarNames "float m_flHeight"
	// MNetworkVarNames "float m_flDPI"
	// MNetworkVarNames "float m_flInteractDistance"
	// MNetworkVarNames "float m_flDepthOffset"
	// MNetworkVarNames "uint32 m_unOwnerContext"
	// MNetworkVarNames "uint32 m_unHorizontalAlign"
	// MNetworkVarNames "uint32 m_unVerticalAlign"
	// MNetworkVarNames "uint32 m_unOrientation"
	// MNetworkVarNames "bool m_bAllowInteractionFromAllSceneWorlds"
	// MNetworkVarNames "string_t m_vecCSSClasses"
	// MNetworkVarNames "bool m_bOpaque"
	// MNetworkVarNames "bool m_bNoDepth"
	// MNetworkVarNames "bool m_bRenderBackface"
	// MNetworkVarNames "bool m_bUseOffScreenIndicator"
	// MNetworkVarNames "bool m_bExcludeFromSaveGames"
	// MNetworkVarNames "bool m_bGrabbable"
	// MNetworkVarNames "bool m_bOnlyRenderToTexture"
	// MNetworkVarNames "bool m_bDisableMipGen"
	// MNetworkVarNames "int32 m_nExplicitImageLayout"
	class C_PointClientUIWorldPanel : public client::C_BaseClientUIEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0860[0x8]; // 0x860
	public:
		bool m_bForceRecreateNextUpdate; // 0x868		
		bool m_bMoveViewToPlayerNextThink; // 0x869		
		bool m_bCheckCSSClasses; // 0x86a		
	private:
		[[maybe_unused]] uint8_t __pad086b[0x5]; // 0x86b
	public:
		CTransform m_anchorDeltaTransform; // 0x870		
	private:
		[[maybe_unused]] uint8_t __pad0890[0x178]; // 0x890
	public:
		client::CPointOffScreenIndicatorUi* m_pOffScreenIndicator; // 0xa08		
	private:
		[[maybe_unused]] uint8_t __pad0a10[0x20]; // 0xa10
	public:
		// MNetworkEnable
		bool m_bIgnoreInput; // 0xa30		
		// MNetworkEnable
		bool m_bLit; // 0xa31		
		// MNetworkEnable
		bool m_bFollowPlayerAcrossTeleport; // 0xa32		
	private:
		[[maybe_unused]] uint8_t __pad0a33[0x1]; // 0xa33
	public:
		// MNetworkEnable
		float m_flWidth; // 0xa34		
		// MNetworkEnable
		float m_flHeight; // 0xa38		
		// MNetworkEnable
		float m_flDPI; // 0xa3c		
		// MNetworkEnable
		float m_flInteractDistance; // 0xa40		
		// MNetworkEnable
		float m_flDepthOffset; // 0xa44		
		// MNetworkEnable
		uint32_t m_unOwnerContext; // 0xa48		
		// MNetworkEnable
		uint32_t m_unHorizontalAlign; // 0xa4c		
		// MNetworkEnable
		uint32_t m_unVerticalAlign; // 0xa50		
		// MNetworkEnable
		uint32_t m_unOrientation; // 0xa54		
		// MNetworkEnable
		bool m_bAllowInteractionFromAllSceneWorlds; // 0xa58		
	private:
		[[maybe_unused]] uint8_t __pad0a59[0x7]; // 0xa59
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses; // 0xa60		
		// MNetworkEnable
		bool m_bOpaque; // 0xa78		
		// MNetworkEnable
		bool m_bNoDepth; // 0xa79		
		// MNetworkEnable
		bool m_bRenderBackface; // 0xa7a		
		// MNetworkEnable
		bool m_bUseOffScreenIndicator; // 0xa7b		
		// MNetworkEnable
		bool m_bExcludeFromSaveGames; // 0xa7c		
		// MNetworkEnable
		bool m_bGrabbable; // 0xa7d		
		// MNetworkEnable
		bool m_bOnlyRenderToTexture; // 0xa7e		
		// MNetworkEnable
		bool m_bDisableMipGen; // 0xa7f		
		// MNetworkEnable
		int32_t m_nExplicitImageLayout; // 0xa80		
		
		// Datamap fields:
		// CStrongHandle< InfoForResourceTypeIMaterial2 > m_hPanelOverrideMaterial; // 0xa00
	};
};
