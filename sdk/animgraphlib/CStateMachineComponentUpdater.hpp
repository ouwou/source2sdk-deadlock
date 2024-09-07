#pragma once
#include "animgraphlib/CAnimComponentUpdater.hpp"
#include "animgraphlib/CAnimStateMachineUpdater.hpp"
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
	class CStateMachineComponentUpdater : public animgraphlib::CAnimComponentUpdater
	{
	public:
		animgraphlib::CAnimStateMachineUpdater m_stateMachine; // 0x30		
	};
};
