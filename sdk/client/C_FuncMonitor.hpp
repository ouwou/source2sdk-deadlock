#pragma once
#include "client/C_FuncBrush.hpp"
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
	// Alignment: 16
	// Size: 0xcf0
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
	class C_FuncMonitor : public client::C_FuncBrush
	{
	public:
		// MNetworkEnable
		CUtlString m_targetCamera; // 0x830		
		// MNetworkEnable
		int32_t m_nResolutionEnum; // 0x838		
		// MNetworkEnable
		bool m_bRenderShadows; // 0x83c		
		// MNetworkEnable
		bool m_bUseUniqueColorTarget; // 0x83d		
	private:
		[[maybe_unused]] uint8_t __pad083e[0x2]; // 0x83e
	public:
		// MNetworkEnable
		CUtlString m_brushModelName; // 0x840		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hTargetCamera; // 0x848		
		// MNetworkEnable
		bool m_bEnabled; // 0x84c		
		// MNetworkEnable
		bool m_bDraw3DSkybox; // 0x84d		
	};
};
