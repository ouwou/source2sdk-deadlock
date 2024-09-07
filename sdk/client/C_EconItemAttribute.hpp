#pragma once
#include "client/attrib_definition_index_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	// 
	// MNetworkVarNames "attrib_definition_index_t m_iAttributeDefinitionIndex"
	// MNetworkVarNames "float m_flValue"
	class C_EconItemAttribute
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
	public:
		// MNetworkEnable
		client::attrib_definition_index_t m_iAttributeDefinitionIndex; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0032[0x2]; // 0x32
	public:
		// MNetworkEnable
		// MNetworkAlias "m_iRawValue32"
		float m_flValue; // 0x34		
	};
};
