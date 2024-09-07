#pragma once
#include "client/PointWorldTextJustifyHorizontal_t.hpp"
#include "client/PointWorldTextJustifyVertical_t.hpp"
#include "client/PointWorldTextReorientMode_t.hpp"
#include "server/CModelPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9c8
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
	class CPointWorldText : public server::CModelPointEntity
	{
	public:
		// MNetworkEnable
		char m_messageText[512]; // 0x768		
		// MNetworkEnable
		char m_FontName[64]; // 0x968		
		// MNetworkEnable
		bool m_bEnabled; // 0x9a8		
		// MNetworkEnable
		bool m_bFullbright; // 0x9a9		
	private:
		[[maybe_unused]] uint8_t __pad09aa[0x2]; // 0x9aa
	public:
		// MNetworkEnable
		float m_flWorldUnitsPerPx; // 0x9ac		
		// MNetworkEnable
		float m_flFontSize; // 0x9b0		
		// MNetworkEnable
		float m_flDepthOffset; // 0x9b4		
		// MNetworkEnable
		Color m_Color; // 0x9b8		
		// MNetworkEnable
		client::PointWorldTextJustifyHorizontal_t m_nJustifyHorizontal; // 0x9bc		
		// MNetworkEnable
		client::PointWorldTextJustifyVertical_t m_nJustifyVertical; // 0x9c0		
		// MNetworkEnable
		client::PointWorldTextReorientMode_t m_nReorientMode; // 0x9c4		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void InputToggle; // 0x0
		// CUtlSymbolLarge InputSetMessage; // 0x0
		// int32_t InputSetIntMessage; // 0x0
	};
};
