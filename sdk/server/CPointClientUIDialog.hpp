#pragma once
#include "server/CBaseClientUIEntity.hpp"
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
	// Size: 0x920
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hActivator"
	class CPointClientUIDialog : public server::CBaseClientUIEntity
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnDialogActivatorChanged"
		CHandle<server::CBaseEntity> m_hActivator; // 0x918		
		bool m_bStartEnabled; // 0x91c		
	};
};
