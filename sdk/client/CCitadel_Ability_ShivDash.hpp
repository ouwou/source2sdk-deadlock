#pragma once
#include "client/CCitadelBaseShivAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xee0
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vStartPosition"
	// MNetworkVarNames "Vector m_vDashDirection"
	// MNetworkVarNames "bool m_bIsDashing"
	// MNetworkVarNames "bool m_bStartedInAir"
	class CCitadel_Ability_ShivDash : public client::CCitadelBaseShivAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vStartPosition; // 0xc60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vDashDirection; // 0xc6c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bIsDashing; // 0xc78		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bStartedInAir; // 0xc79		
	private:
		[[maybe_unused]] uint8_t __pad0c7a[0x6]; // 0xc7a
	public:
		CUtlVector<CEntityIndex> m_vecHitEnemies; // 0xc80		
		Vector m_vecLastPosition; // 0xc98		
		int32_t m_nReductionsLeft; // 0xca4		
	private:
		[[maybe_unused]] uint8_t __pad0ca8[0x230]; // 0xca8
	public:
		entity2::GameTime_t m_flStuckTime; // 0xed8		
	};
};
