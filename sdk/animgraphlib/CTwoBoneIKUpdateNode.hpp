#pragma once
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include "animgraphlib/TwoBoneIKSettings_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0x1e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CTwoBoneIKUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
	public:
		animgraphlib::TwoBoneIKSettings_t m_opFixedData; // 0x70		
	};
};
