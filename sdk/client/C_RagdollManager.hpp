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
	// Size: 0x560
	// Has VTable
	// 
	// MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
	class C_RagdollManager : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		int8_t m_iCurrentMaxRagdollCount; // 0x558		
	};
};
