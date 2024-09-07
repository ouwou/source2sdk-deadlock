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
	// Size: 0xd18
	// Has VTable
	// 
	// MNetworkVarNames "int m_iBonusHealth"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hTarget"
	class CCitadel_Ability_UltCombo : public client::C_CitadelBaseAbility
	{
	public:
		entity2::GameTime_t m_flLastAttackTime; // 0xc60		
		int32_t m_nAttackNum; // 0xc64		
	private:
		[[maybe_unused]] uint8_t __pad0c68[0xa8]; // 0xc68
	public:
		// MNetworkEnable
		int32_t m_iBonusHealth; // 0xd10		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hTarget; // 0xd14		
	};
};
