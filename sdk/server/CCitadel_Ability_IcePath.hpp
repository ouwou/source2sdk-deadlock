#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb78
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bIcePathing"
	// MNetworkVarNames "QAngle m_qLastAngles"
	// MNetworkVarNames "Vector m_vLastVelocity"
	// MNetworkVarNames "bool m_bFirstMovementTick"
	class CCitadel_Ability_IcePath : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x70]; // 0xad8
	public:
		Vector m_vInitialPosition; // 0xb48		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bIcePathing; // 0xb54		
	private:
		[[maybe_unused]] uint8_t __pad0b55[0x3]; // 0xb55
	public:
		// MNetworkEnable
		QAngle m_qLastAngles; // 0xb58		
		// MNetworkEnable
		Vector m_vLastVelocity; // 0xb64		
		// MNetworkEnable
		bool m_bFirstMovementTick; // 0xb70		
	};
};
