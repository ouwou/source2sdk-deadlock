#pragma once
#include "animgraphlib/CAnimActionUpdater.hpp"
#include "animgraphlib/StateActionBehavior.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x10
	// 
	// MGetKV3ClassDefaults
	class CStateActionUpdater
	{
	public:
		CSmartPtr<animgraphlib::CAnimActionUpdater> m_pAction; // 0x0		
		animgraphlib::StateActionBehavior m_eBehavior; // 0x8		
	};
};
