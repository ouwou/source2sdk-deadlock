#pragma once
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include "animgraphlib/JiggleBoneSettingsList_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x88
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CJiggleBoneUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	public:
		animgraphlib::JiggleBoneSettingsList_t m_opFixedData; // 0x68		
	};
};
