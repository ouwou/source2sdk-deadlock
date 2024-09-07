#pragma once
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CAnimUpdateNodeRef.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include "animgraphlib/StanceInfo_t.hpp"
#include "animgraphlib/StanceOverrideMode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x98
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CStanceOverrideUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	public:
		CUtlVector<animgraphlib::StanceInfo_t> m_footStanceInfo; // 0x68		
		animgraphlib::CAnimUpdateNodeRef m_pStanceSourceNode; // 0x80		
		animgraphlib::CAnimParamHandle m_hParameter; // 0x90		
	private:
		[[maybe_unused]] uint8_t __pad0092[0x2]; // 0x92
	public:
		animgraphlib::StanceOverrideMode m_eMode; // 0x94		
	};
};
