#pragma once
#include "client/FireUserEntityIO_t.hpp"
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CGameModifier_FireUserEntityIOVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Fire User Entity IO"
		// MPropertyDescription "User Entity IO to fire when modifier added. 0 = don't fire."
		client::FireUserEntityIO_t m_FireOnAdded; // 0x5f8		
		// MPropertyDescription "User Entity IO to fire when modifier removed. 0 = don't fire."
		client::FireUserEntityIO_t m_FireOnRemoved; // 0x5fc		
	};
};
