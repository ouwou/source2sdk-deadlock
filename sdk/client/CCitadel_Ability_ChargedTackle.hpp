#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ParticleIndex_t.hpp"
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
	// Size: 0xea0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bPreparing"
	// MNetworkVarNames "bool m_bTackling"
	// MNetworkVarNames "GameTime_t m_flTackleStartTime"
	// MNetworkVarNames "GameTime_t m_flPrepareStartTime"
	// MNetworkVarNames "Vector m_vecTackleDir"
	class CCitadel_Ability_ChargedTackle : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x1f8]; // 0xc60
	public:
		// MNetworkEnable
		bool m_bPreparing; // 0xe58		
		// MNetworkEnable
		bool m_bTackling; // 0xe59		
	private:
		[[maybe_unused]] uint8_t __pad0e5a[0x2]; // 0xe5a
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flTackleStartTime; // 0xe5c		
		// MNetworkEnable
		entity2::GameTime_t m_flPrepareStartTime; // 0xe60		
		// MNetworkEnable
		Vector m_vecTackleDir; // 0xe64		
		Vector m_vecLastPosition; // 0xe70		
		int32_t m_nStuckFramesCount; // 0xe7c		
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecHitEnemies; // 0xe80		
		client::ParticleIndex_t m_nDistancePreview; // 0xe98		
	};
};
