#pragma once
#include "server/CAttributeManager.hpp"
#include "server/CEconItemView.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x140
	// Has VTable
	// 
	// MNetworkIncludeByName "m_ProviderType"
	// MNetworkIncludeByName "m_hOuter"
	// MNetworkIncludeByName "m_iReapplyProvisionParity"
	// MNetworkIncludeByName "m_Item"
	// MNetworkVarNames "CEconItemView m_Item"
	class CAttributeContainer : public server::CAttributeManager
	{
	public:
		// MNetworkEnable
		server::CEconItemView m_Item; // 0x68		
	};
};
