#pragma once
#include "animgraphlib/CAnimStateMachineUpdater.hpp"
#include "animgraphlib/CAnimUpdateNodeBase.hpp"
#include "animgraphlib/CStateNodeStateData.hpp"
#include "animgraphlib/CStateNodeTransitionData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xf8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CStateMachineUpdateNode : public animgraphlib::CAnimUpdateNodeBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0058[0x10]; // 0x58
	public:
		animgraphlib::CAnimStateMachineUpdater m_stateMachine; // 0x68		
		CUtlVector<animgraphlib::CStateNodeStateData> m_stateData; // 0xc0		
		CUtlVector<animgraphlib::CStateNodeTransitionData> m_transitionData; // 0xd8		
	private:
		[[maybe_unused]] uint8_t __pad00f0[0x4]; // 0xf0
	public:
		bool m_bBlockWaningTags; // 0xf4		
		bool m_bLockStateWhenWaning; // 0xf5		
	};
};
