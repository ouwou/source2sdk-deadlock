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
	// Size: 0xe78
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bIsFriendlyTarget"
	// MNetworkVarNames "EHANDLE m_hTarget"
	// MNetworkVarNames "Vector m_vAttackTarget"
	// MNetworkVarNames "GameTime_t m_flPounceStartTime"
	// MNetworkVarNames "GameTime_t m_flToTargetStartTime"
	class CCitadel_Ability_Nano_Pounce : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x1f8]; // 0xc60
	public:
		// MNetworkEnable
		bool m_bIsFriendlyTarget; // 0xe58		
	private:
		[[maybe_unused]] uint8_t __pad0e59[0x3]; // 0xe59
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hTarget; // 0xe5c		
		// MNetworkEnable
		Vector m_vAttackTarget; // 0xe60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flPounceStartTime; // 0xe6c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flToTargetStartTime; // 0xe70		
	};
};
