#pragma once
#include "server/CBaseClientUIEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x970
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
	class CPointClientUIWorldPanel : public server::CBaseClientUIEntity
	{
	public:
		// MNetworkEnable
		bool m_bIgnoreInput; // 0x918		
		// MNetworkEnable
		bool m_bLit; // 0x919		
		// MNetworkEnable
		bool m_bFollowPlayerAcrossTeleport; // 0x91a		
	private:
		[[maybe_unused]] uint8_t __pad091b[0x1]; // 0x91b
	public:
		// MNetworkEnable
		float m_flWidth; // 0x91c		
		// MNetworkEnable
		float m_flHeight; // 0x920		
		// MNetworkEnable
		float m_flDPI; // 0x924		
		// MNetworkEnable
		float m_flInteractDistance; // 0x928		
		// MNetworkEnable
		float m_flDepthOffset; // 0x92c		
		// MNetworkEnable
		uint32_t m_unOwnerContext; // 0x930		
		// MNetworkEnable
		uint32_t m_unHorizontalAlign; // 0x934		
		// MNetworkEnable
		uint32_t m_unVerticalAlign; // 0x938		
		// MNetworkEnable
		uint32_t m_unOrientation; // 0x93c		
		// MNetworkEnable
		bool m_bAllowInteractionFromAllSceneWorlds; // 0x940		
	private:
		[[maybe_unused]] uint8_t __pad0941[0x7]; // 0x941
	public:
		// MNetworkEnable
		CNetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses; // 0x948		
		// MNetworkEnable
		bool m_bOpaque; // 0x960		
		// MNetworkEnable
		bool m_bNoDepth; // 0x961		
		// MNetworkEnable
		bool m_bRenderBackface; // 0x962		
		// MNetworkEnable
		bool m_bUseOffScreenIndicator; // 0x963		
		// MNetworkEnable
		bool m_bExcludeFromSaveGames; // 0x964		
		// MNetworkEnable
		bool m_bGrabbable; // 0x965		
		// MNetworkEnable
		bool m_bOnlyRenderToTexture; // 0x966		
		// MNetworkEnable
		bool m_bDisableMipGen; // 0x967		
		// MNetworkEnable
		int32_t m_nExplicitImageLayout; // 0x968		
		
		// Datamap fields:
		// void InputIgnoreUserInput; // 0x0
		// void InputAcceptUserInput; // 0x0
		// CUtlSymbolLarge InputAddCSSClass; // 0x0
		// CUtlSymbolLarge InputRemoveCSSClass; // 0x0
		// CUtlSymbolLarge InputLocalPlayerAddCSSClass; // 0x0
		// CUtlSymbolLarge InputLocalPlayerRemoveCSSClass; // 0x0
	};
};
