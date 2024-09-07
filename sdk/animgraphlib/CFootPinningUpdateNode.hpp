#pragma once
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include "animgraphlib/FootPinningPoseOpFixedData_t.hpp"
#include "animgraphlib/FootPinningTimingSource.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xc8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CFootPinningUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x8]; // 0x68
	public:
		animgraphlib::FootPinningPoseOpFixedData_t m_poseOpFixedData; // 0x70		
		animgraphlib::FootPinningTimingSource m_eTimingSource; // 0xa0		
	private:
		[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
	public:
		CUtlVector<animgraphlib::CAnimParamHandle> m_params; // 0xa8		
		bool m_bResetChild; // 0xc0		
	};
};
