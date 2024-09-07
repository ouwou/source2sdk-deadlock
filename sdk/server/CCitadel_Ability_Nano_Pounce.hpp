#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
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
	// Size: 0xcf0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bIsFriendlyTarget"
	// MNetworkVarNames "EHANDLE m_hTarget"
	// MNetworkVarNames "Vector m_vAttackTarget"
	// MNetworkVarNames "GameTime_t m_flPounceStartTime"
	// MNetworkVarNames "GameTime_t m_flToTargetStartTime"
	class CCitadel_Ability_Nano_Pounce : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x1f8]; // 0xad8
	public:
		// MNetworkEnable
		bool m_bIsFriendlyTarget; // 0xcd0		
	private:
		[[maybe_unused]] uint8_t __pad0cd1[0x3]; // 0xcd1
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hTarget; // 0xcd4		
		// MNetworkEnable
		Vector m_vAttackTarget; // 0xcd8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flPounceStartTime; // 0xce4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flToTargetStartTime; // 0xce8		
	};
};
