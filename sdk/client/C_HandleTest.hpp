#pragma once
#include "client/C_BaseEntity.hpp"
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
	// Size: 0x560
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CBaseEntity> m_Handle"
	// MNetworkVarNames "bool m_bSendHandle"
	class C_HandleTest : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_Handle; // 0x558		
		// MNetworkEnable
		bool m_bSendHandle; // 0x55c		
	};
};
