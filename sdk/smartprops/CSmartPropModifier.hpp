#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x50
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	// MVDataBase
	// MVDataNodeType "1"
	// MVDataAnonymousNode
	class CSmartPropModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MVDataEnableKey
		CSmartPropAttributeBool m_bEnabled; // 0x8		
	};
};
