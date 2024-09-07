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
	// Size: 0xac8
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
		[[maybe_unused]] uint8_t __pad0a98[0x8]; // 0xa98
	public:
		// MNetworkEnable
		int32_t m_eLootType; // 0xaa0		
		// MNetworkEnable
		int32_t m_nCurrencyValue; // 0xaa4		
		// MNetworkEnable
		CUtlSymbolLarge m_iszModelName; // 0xaa8		
		// MNetworkEnable
		float m_flModelScale; // 0xab0		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hTargetPlayer; // 0xab4		
		// MNetworkEnable
		float m_flFallRate; // 0xab8		
		
		// Datamap fields:
		// bool from_crate; // 0x7fffffff
	};
};
