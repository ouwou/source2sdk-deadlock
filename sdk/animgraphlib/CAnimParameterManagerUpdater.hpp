#pragma once
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CAnimParameterBase.hpp"
#include "modellib/AnimParamID.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x100
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimParameterManagerUpdater
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
	public:
		CUtlVector<CSmartPtr<animgraphlib::CAnimParameterBase>> m_parameters; // 0x18		
		CUtlHashtable<modellib::AnimParamID,int32_t> m_idToIndexMap; // 0x30		
		CUtlHashtable<CUtlString,int32_t> m_nameToIndexMap; // 0x50		
		CUtlVector<animgraphlib::CAnimParamHandle> m_indexToHandle; // 0x70		
		CUtlVector<CUtlPair<animgraphlib::CAnimParamHandle,CAnimVariant>> m_autoResetParams; // 0x88		
		CUtlHashtable<animgraphlib::CAnimParamHandle,int16_t> m_autoResetMap; // 0xa0		
	};
};
