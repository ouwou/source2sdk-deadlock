#pragma once
#include "client/CCitadelAnimatingModelEntity.hpp"
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
	// Size: 0xb78
	// Has VTable
	// 
	// MNetworkVarNames "int32 m_eLootType"
	// MNetworkVarNames "int32 m_nCurrencyValue"
	// MNetworkVarNames "string_t m_iszModelName"
	// MNetworkVarNames "float m_flModelScale"
	// MNetworkVarNames "EHANDLE m_hTargetPlayer"
	// MNetworkVarNames "float m_flFallRate"
	class C_CitadelItemPickup : public client::CCitadelAnimatingModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0b48[0x8]; // 0xb48
	public:
		// MNetworkEnable
		int32_t m_eLootType; // 0xb50		
		// MNetworkEnable
		int32_t m_nCurrencyValue; // 0xb54		
		// MNetworkEnable
		CUtlSymbolLarge m_iszModelName; // 0xb58		
		// MNetworkEnable
		float m_flModelScale; // 0xb60		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hTargetPlayer; // 0xb64		
		// MNetworkEnable
		float m_flFallRate; // 0xb68		
		
		// Datamap fields:
		// bool from_crate; // 0x7fffffff
	};
};
