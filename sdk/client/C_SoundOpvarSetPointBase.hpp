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
	// Size: 0x578
	// Has VTable
	// 
	// MNetworkVarNames "string_t m_iszStackName"
	// MNetworkVarNames "string_t m_iszOperatorName"
	// MNetworkVarNames "string_t m_iszOpvarName"
	// MNetworkVarNames "int m_iOpvarIndex"
	// MNetworkVarNames "bool m_bUseAutoCompare"
	class C_SoundOpvarSetPointBase : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszStackName; // 0x558		
		// MNetworkEnable
		CUtlSymbolLarge m_iszOperatorName; // 0x560		
		// MNetworkEnable
		CUtlSymbolLarge m_iszOpvarName; // 0x568		
		// MNetworkEnable
		int32_t m_iOpvarIndex; // 0x570		
		// MNetworkEnable
		bool m_bUseAutoCompare; // 0x574		
	};
};
