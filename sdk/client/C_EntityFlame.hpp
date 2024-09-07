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
	// Size: 0x590
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< C_BaseEntity> m_hEntAttached"
	// MNetworkVarNames "bool m_bCheapEffect"
	class C_EntityFlame : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hEntAttached; // 0x558		
	private:
		[[maybe_unused]] uint8_t __pad055c[0x24]; // 0x55c
	public:
		CHandle<client::C_BaseEntity> m_hOldAttached; // 0x580		
		// MNetworkEnable
		bool m_bCheapEffect; // 0x584		
		
		// Datamap fields:
		// void m_hEffect; // 0x560
	};
};
