#pragma once
#include "animgraphlib/AnimScriptType.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x58
	// 
	// MGetKV3ClassDefaults
	struct ScriptInfo_t
	{
	public:
		CUtlString m_code; // 0x0		
		CUtlVector<animgraphlib::CAnimParamHandle> m_paramsModified; // 0x8		
		CUtlVector<int32_t> m_proxyReadParams; // 0x20		
		CUtlVector<int32_t> m_proxyWriteParams; // 0x38		
		animgraphlib::AnimScriptType m_eScriptType; // 0x50		
	};
};
