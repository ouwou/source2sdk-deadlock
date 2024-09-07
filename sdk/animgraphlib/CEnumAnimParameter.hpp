#pragma once
#include "animgraphlib/CConcreteAnimParameter.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xd8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Enum Parameter"
	class CEnumAnimParameter : public animgraphlib::CConcreteAnimParameter
	{
	private:
		[[maybe_unused]] uint8_t __pad0080[0x8]; // 0x80
	public:
		// MPropertyFriendlyName "Default Value"
		uint8_t m_defaultValue; // 0x88		
	private:
		[[maybe_unused]] uint8_t __pad0089[0x7]; // 0x89
	public:
		// MPropertyFriendlyName "Values"
		// MPropertyAttrChangeCallback
		CUtlVector<CUtlString> m_enumOptions; // 0x90		
		// MPropertyHideField
		CUtlVector<uint64_t> m_vecEnumReferenced; // 0xa8		
	};
};
