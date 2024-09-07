#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "entity2/GameTime_t.hpp"
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
	// Size: 0xeb0
	// Has VTable
	// 
	// MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
	class CCitadel_Ability_GooGrenade : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecPuddleModifiers; // 0xc60		
	private:
		[[maybe_unused]] uint8_t __pad0c78[0x230]; // 0xc78
	public:
		entity2::GameTime_t m_LastDetonateTime; // 0xea8		
	};
};
