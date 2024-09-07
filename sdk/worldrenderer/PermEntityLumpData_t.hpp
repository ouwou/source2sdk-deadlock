#pragma once
#include "resourcesystem/InfoForResourceTypeCEntityLump.hpp"
#include "worldrenderer/EntityKeyValueData_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	struct PermEntityLumpData_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CUtlString m_name; // 0x8		
		CUtlVector<CStrongHandleCopyable<resourcesystem::InfoForResourceTypeCEntityLump>> m_childLumps; // 0x10		
		CUtlLeanVector<worldrenderer::EntityKeyValueData_t> m_entityKeyValues; // 0x28		
	};
};
