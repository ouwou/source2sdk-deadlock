#pragma once
#include "server/CCitadelAnimatingModelEntity.hpp"
#include "server/CCitadelMinimapComponent.hpp"
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
	// Size: 0x5c18
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
	// MNetworkVarNames "int32 m_eLootType"
	// MNetworkVarNames "int32 m_nCurrencyValue"
	// MNetworkVarNames "string_t m_iszModelName"
	// MNetworkVarNames "float m_flModelScale"
	// MNetworkVarNames "EHANDLE m_hTargetPlayer"
	// MNetworkVarNames "float m_flFallRate"
	class CCitadelItemPickup : public server::CCitadelAnimatingModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0b20[0x8]; // 0xb20
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelMinimapComponent"
		// MNetworkAlias "CCitadelMinimapComponent"
		// MNetworkTypeAlias "CCitadelMinimapComponent"
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xb28		
		// MNetworkEnable
		int32_t m_eLootType; // 0xb40		
		// MNetworkEnable
		int32_t m_nCurrencyValue; // 0xb44		
		// MNetworkEnable
		CUtlSymbolLarge m_iszModelName; // 0xb48		
		// MNetworkEnable
		float m_flModelScale; // 0xb50		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hTargetPlayer; // 0xb54		
		// MNetworkEnable
		float m_flFallRate; // 0xb58		
	private:
		[[maybe_unused]] uint8_t __pad0b5c[0xc]; // 0xb5c
	public:
		Vector m_vHomePosition; // 0xb68		
		Vector m_vDropPosition; // 0xb74		
		
		// Datamap fields:
		// bool m_bRequireGroundForPickup; // 0xb60
		// bool from_crate; // 0x7fffffff
		// int32_t m_eObjectivePosition; // 0xb5c
		// int32_t m_nKillingTeamNumber; // 0xb64
	};
};
