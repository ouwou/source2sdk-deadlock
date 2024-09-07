#pragma once
#include "animgraphlib/CStateActionUpdater.hpp"
#include "modellib/AnimScriptHandle.hpp"
#include "modellib/AnimStateID.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x48
	// 
	// MGetKV3ClassDefaults
	class CStateUpdateData
	{
	public:
		CUtlString m_name; // 0x0		
		modellib::AnimScriptHandle m_hScript; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		CUtlVector<int32_t> m_transitionIndices; // 0x10		
		CUtlVector<animgraphlib::CStateActionUpdater> m_actions; // 0x28		
		modellib::AnimStateID m_stateID; // 0x40		
		struct 
		{
			uint8_t m_bIsStartState: 1; 			
			uint8_t m_bIsEndState: 1; 			
			uint8_t m_bIsPassthrough: 1; 			
			uint8_t __pad0: 3;
		}; // 6 bits
	};
};
