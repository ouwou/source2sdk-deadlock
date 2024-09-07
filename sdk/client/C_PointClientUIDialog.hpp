#pragma once
#include "client/C_BaseClientUIEntity.hpp"
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
	// Size: 0x868
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hActivator"
	class C_PointClientUIDialog : public client::C_BaseClientUIEntity
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnDialogActivatorChanged"
		CHandle<client::C_BaseEntity> m_hActivator; // 0x860		
		bool m_bStartEnabled; // 0x864		
	};
};
