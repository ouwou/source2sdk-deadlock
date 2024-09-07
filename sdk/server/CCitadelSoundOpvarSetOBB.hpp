#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x528
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
	class CCitadelSoundOpvarSetOBB : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszStackName; // 0x4d8		
		// MNetworkEnable
		CUtlSymbolLarge m_iszOperatorName; // 0x4e0		
		// MNetworkEnable
		CUtlSymbolLarge m_iszOpvarName; // 0x4e8		
		// MNetworkEnable
		Vector m_vDistanceInnerMins; // 0x4f0		
		// MNetworkEnable
		Vector m_vDistanceInnerMaxs; // 0x4fc		
		// MNetworkEnable
		Vector m_vDistanceOuterMins; // 0x508		
		// MNetworkEnable
		Vector m_vDistanceOuterMaxs; // 0x514		
		// MNetworkEnable
		int32_t m_nAABBDirection; // 0x520		
	};
};
