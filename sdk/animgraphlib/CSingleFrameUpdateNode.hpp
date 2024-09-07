#pragma once
#include "animationsystem/HSequence.hpp"
#include "animgraphlib/CAnimActionUpdater.hpp"
#include "animgraphlib/CLeafUpdateNode.hpp"
#include "animgraphlib/CPoseHandle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x80
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CSingleFrameUpdateNode : public animgraphlib::CLeafUpdateNode
	{
	public:
		CUtlVector<CSmartPtr<animgraphlib::CAnimActionUpdater>> m_actions; // 0x58		
		animgraphlib::CPoseHandle m_hPoseCacheHandle; // 0x70		
		animationsystem::HSequence m_hSequence; // 0x74		
		float m_flCycle; // 0x78		
	};
};
