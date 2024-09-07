#pragma once
#include "animgraphlib/CAnimActionUpdater.hpp"
#include "animgraphlib/CAnimComponentUpdater.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CActionComponentUpdater : public animgraphlib::CAnimComponentUpdater
	{
	public:
		CUtlVector<CSmartPtr<animgraphlib::CAnimActionUpdater>> m_actions; // 0x30		
	};
};
