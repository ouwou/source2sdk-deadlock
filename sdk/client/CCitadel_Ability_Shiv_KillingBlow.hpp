#pragma once
#include "client/CCitadelAutoScaledTime.hpp"
#include "client/CCitadelBaseShivAbility.hpp"
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
	// Size: 0x1048
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "EHANDLE m_hCurrentTarget"
	// MNetworkVarNames "Vector m_vStartPosition"
	// MNetworkVarNames "Vector m_vDeparturePosition"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flDepartureTime"
	// MNetworkVarNames "CCitadelAutoScaledTime m_flArrivalTime"
	// MNetworkVarNames "GameTime_t m_flDrainSuppressEndTime"
	class CCitadel_Ability_Shiv_KillingBlow : public client::CCitadelBaseShivAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x1c0]; // 0xc60
	public:
		// MNetworkEnable
		bool m_bActive; // 0xe20		
	private:
		[[maybe_unused]] uint8_t __pad0e21[0x3]; // 0xe21
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hCurrentTarget; // 0xe24		
		// MNetworkEnable
		Vector m_vStartPosition; // 0xe28		
		// MNetworkEnable
		Vector m_vDeparturePosition; // 0xe34		
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flDepartureTime; // 0xe40		
		// MNetworkEnable
		client::CCitadelAutoScaledTime m_flArrivalTime; // 0xe58		
		Vector m_vLastKnownSafePos; // 0xe70		
	private:
		[[maybe_unused]] uint8_t __pad0e7c[0x4]; // 0xe7c
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flDrainSuppressEndTime; // 0xe80		
	};
};
