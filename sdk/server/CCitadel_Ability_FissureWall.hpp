#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xbe0
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vecStartPos"
	// MNetworkVarNames "Vector m_vecPosition"
	// MNetworkVarNames "Vector m_vecInitialPosition"
	// MNetworkVarNames "GameTime_t m_CastTime"
	// MNetworkVarNames "Vector m_vecDirection"
	// MNetworkVarNames "Vector m_vecLeft"
	// MNetworkVarNames "float m_Length"
	// MNetworkVarNames "bool m_bTraveling"
	// MNetworkVarNames "bool m_bPreview"
	class CCitadel_Ability_FissureWall : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0xb8]; // 0xad8
	public:
		// MNetworkEnable
		Vector m_vecStartPos; // 0xb90		
		// MNetworkEnable
		Vector m_vecPosition; // 0xb9c		
		// MNetworkEnable
		Vector m_vecInitialPosition; // 0xba8		
		// MNetworkEnable
		entity2::GameTime_t m_CastTime; // 0xbb4		
		// MNetworkEnable
		Vector m_vecDirection; // 0xbb8		
		// MNetworkEnable
		Vector m_vecLeft; // 0xbc4		
		// MNetworkEnable
		float m_Length; // 0xbd0		
	private:
		[[maybe_unused]] uint8_t __pad0bd4[0xa]; // 0xbd4
	public:
		// MNetworkEnable
		bool m_bTraveling; // 0xbde		
		// MNetworkEnable
		bool m_bPreview; // 0xbdf		
	};
};
