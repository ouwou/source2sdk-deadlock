#pragma once
#include "client/C_BaseClientUIEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xa30
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bIgnoreInput"
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
	class C_PointClientUIHUD : public client::C_BaseClientUIEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0860[0x8]; // 0x860
	public:
		bool m_bCheckCSSClasses; // 0x868		
	private:
		[[maybe_unused]] uint8_t __pad0869[0x17f]; // 0x869
	public:
		// MNetworkEnable
		bool m_bIgnoreInput; // 0x9e8		
	private:
		[[maybe_unused]] uint8_t __pad09e9[0x3]; // 0x9e9
	public:
		// MNetworkEnable
		float m_flWidth; // 0x9ec		
		// MNetworkEnable
		float m_flHeight; // 0x9f0		
		// MNetworkEnable
		float m_flDPI; // 0x9f4		
		// MNetworkEnable
		float m_flInteractDistance; // 0x9f8		
		// MNetworkEnable
		float m_flDepthOffset; // 0x9fc		
		// MNetworkEnable
		uint32_t m_unOwnerContext; // 0xa00		
		// MNetworkEnable
		uint32_t m_unHorizontalAlign; // 0xa04		
		// MNetworkEnable
		uint32_t m_unVerticalAlign; // 0xa08		
		// MNetworkEnable
		uint32_t m_unOrientation; // 0xa0c		
		// MNetworkEnable
		bool m_bAllowInteractionFromAllSceneWorlds; // 0xa10		
	private:
		[[maybe_unused]] uint8_t __pad0a11[0x7]; // 0xa11
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses; // 0xa18		
	};
};
