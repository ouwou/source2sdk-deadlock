#pragma once
#include "animgraphlib/CAnimUpdateSharedData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimGraphModelBinding
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CUtlString m_modelName; // 0x8		
		CSmartPtr<animgraphlib::CAnimUpdateSharedData> m_pSharedData; // 0x10		
	};
};
