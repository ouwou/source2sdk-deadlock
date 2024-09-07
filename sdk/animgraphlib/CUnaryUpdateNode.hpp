#pragma once
#include "animgraphlib/CAnimUpdateNodeBase.hpp"
#include "animgraphlib/CAnimUpdateNodeRef.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x68
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CUnaryUpdateNode : public animgraphlib::CAnimUpdateNodeBase
	{
	public:
		animgraphlib::CAnimUpdateNodeRef m_pChildNode; // 0x58		
	};
};
