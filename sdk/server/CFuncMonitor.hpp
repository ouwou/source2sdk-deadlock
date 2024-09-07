#pragma once
#include "server/CFuncBrush.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7a8
	// Has VTable
	// 
	// MNetworkVarNames "CUtlString m_targetCamera"
	// MNetworkVarNames "int m_nResolutionEnum"
	// MNetworkVarNames "bool m_bRenderShadows"
	// MNetworkVarNames "bool m_bUseUniqueColorTarget"
	// MNetworkVarNames "CUtlString m_brushModelName"
	// MNetworkVarNames "EHANDLE m_hTargetCamera"
	// MNetworkVarNames "bool m_bEnabled"
	// MNetworkVarNames "bool m_bDraw3DSkybox"
	class CFuncMonitor : public server::CFuncBrush
	{
	public:
		// MNetworkEnable
		CUtlString m_targetCamera; // 0x788		
		// MNetworkEnable
		int32_t m_nResolutionEnum; // 0x790		
		// MNetworkEnable
		bool m_bRenderShadows; // 0x794		
		// MNetworkEnable
		bool m_bUseUniqueColorTarget; // 0x795		
	private:
		[[maybe_unused]] uint8_t __pad0796[0x2]; // 0x796
	public:
		// MNetworkEnable
		CUtlString m_brushModelName; // 0x798		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hTargetCamera; // 0x7a0		
		// MNetworkEnable
		bool m_bEnabled; // 0x7a4		
		// MNetworkEnable
		bool m_bDraw3DSkybox; // 0x7a5		
		bool m_bStartEnabled; // 0x7a6		
		
		// Datamap fields:
		// void InputToggle; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// CUtlSymbolLarge InputSetCamera; // 0x0
	};
};
