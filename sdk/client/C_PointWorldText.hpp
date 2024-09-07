#pragma once
#include "client/C_ModelPointEntity.hpp"
#include "client/PointWorldTextJustifyHorizontal_t.hpp"
#include "client/PointWorldTextJustifyVertical_t.hpp"
#include "client/PointWorldTextReorientMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xaa8
	// Has VTable
	// 
	// MNetworkVarNames "char m_messageText"
	// MNetworkVarNames "char m_FontName"
	// MNetworkVarNames "bool m_bEnabled"
	// MNetworkVarNames "bool m_bFullbright"
	// MNetworkVarNames "float m_flWorldUnitsPerPx"
	// MNetworkVarNames "float m_flFontSize"
	// MNetworkVarNames "float m_flDepthOffset"
	// MNetworkVarNames "Color m_Color"
	// MNetworkVarNames "PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal"
	// MNetworkVarNames "PointWorldTextJustifyVertical_t m_nJustifyVertical"
	// MNetworkVarNames "PointWorldTextReorientMode_t m_nReorientMode"
	class C_PointWorldText : public client::C_ModelPointEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0830[0x8]; // 0x830
	public:
		bool m_bForceRecreateNextUpdate; // 0x838		
	private:
		[[maybe_unused]] uint8_t __pad0839[0xf]; // 0x839
	public:
		// MNetworkEnable
		char m_messageText[512]; // 0x848		
		// MNetworkEnable
		char m_FontName[64]; // 0xa48		
		// MNetworkEnable
		bool m_bEnabled; // 0xa88		
		// MNetworkEnable
		bool m_bFullbright; // 0xa89		
	private:
		[[maybe_unused]] uint8_t __pad0a8a[0x2]; // 0xa8a
	public:
		// MNetworkEnable
		float m_flWorldUnitsPerPx; // 0xa8c		
		// MNetworkEnable
		float m_flFontSize; // 0xa90		
		// MNetworkEnable
		float m_flDepthOffset; // 0xa94		
		// MNetworkEnable
		Color m_Color; // 0xa98		
		// MNetworkEnable
		client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0xa9c		
		// MNetworkEnable
		client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0xaa0		
		// MNetworkEnable
		client::PointWorldTextReorientMode_t m_nReorientMode; // 0xaa4		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void InputToggle; // 0x0
		// CUtlSymbolLarge InputSetMessage; // 0x0
		// int32_t InputSetIntMessage; // 0x0
	};
};
