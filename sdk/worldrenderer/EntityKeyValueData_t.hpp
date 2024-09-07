#pragma once
#include "worldrenderer/EntityIOConnectionData_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x40
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	struct EntityKeyValueData_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CUtlVector<worldrenderer::EntityIOConnectionData_t> m_connections; // 0x8		
		CUtlBinaryBlock m_keyValuesData; // 0x20		
	};
};
