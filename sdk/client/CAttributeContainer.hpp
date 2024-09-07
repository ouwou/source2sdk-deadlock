#pragma once
#include "client/CAttributeManager.hpp"
#include "client/C_EconItemView.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
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
	class CAttributeContainer : public client::CAttributeManager
	{
	public:
		// MNetworkEnable
		client::C_EconItemView m_Item; // 0x68		
	};
};
