#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 16
	// Size: 0x40
	// 
	// MGetKV3ClassDefaults
	struct PermModelExtPart_t
	{
	public:
		CTransform m_Transform; // 0x0		
		CUtlString m_Name; // 0x20		
		int32_t m_nParent; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_refModel; // 0x30		
	};
};
