#pragma once
#include "server/CBaseEntity.hpp"
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
	// Size: 0x4e0
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CBaseEntity> m_Handle"
	// MNetworkVarNames "bool m_bSendHandle"
	class CHandleTest : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_Handle; // 0x4d8		
		// MNetworkEnable
		bool m_bSendHandle; // 0x4dc		
	};
};
