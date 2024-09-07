#pragma once
#include "client/C_BaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5c0
	// Has VTable
	// 
	// MNetworkVarNames "string_t m_iszStackName"
	// MNetworkVarNames "string_t m_iszOperatorName"
	// MNetworkVarNames "string_t m_iszOpvarName"
	// MNetworkVarNames "Vector m_vDistanceInnerMins"
	// MNetworkVarNames "Vector m_vDistanceInnerMaxs"
	// MNetworkVarNames "Vector m_vDistanceOuterMins"
	// MNetworkVarNames "Vector m_vDistanceOuterMaxs"
	// MNetworkVarNames "int m_nAABBDirection"
	class CCitadelSoundOpvarSetOBB : public client::C_BaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0558[0x18]; // 0x558
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszStackName; // 0x570		
		// MNetworkEnable
		CUtlSymbolLarge m_iszOperatorName; // 0x578		
		// MNetworkEnable
		CUtlSymbolLarge m_iszOpvarName; // 0x580		
		// MNetworkEnable
		Vector m_vDistanceInnerMins; // 0x588		
		// MNetworkEnable
		Vector m_vDistanceInnerMaxs; // 0x594		
		// MNetworkEnable
		Vector m_vDistanceOuterMins; // 0x5a0		
		// MNetworkEnable
		Vector m_vDistanceOuterMaxs; // 0x5ac		
		// MNetworkEnable
		int32_t m_nAABBDirection; // 0x5b8		
	};
};
