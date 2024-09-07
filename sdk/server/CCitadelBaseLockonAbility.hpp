#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include "server/LockonTarget_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc48
	// Has VTable
	// 
	// MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
	// MNetworkVarNames "GameTime_t m_LockOnStartTime"
	class CCitadelBaseLockonAbility : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x118]; // 0xad8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CUtlVectorEmbeddedNetworkVar<server::LockonTarget_t> m_vecLockonTargets; // 0xbf0		
		// MNetworkEnable
		entity2::GameTime_t m_LockOnStartTime; // 0xc40		
	};
};
