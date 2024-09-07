#pragma once
#include "animationsystem/HSequence.hpp"
#include "animgraphlib/AnimVectorSource.hpp"
#include "animgraphlib/CAnimInputDamping.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
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
	// Size: 0xe8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CLeanMatrixUpdateNode : public animgraphlib::CLeafUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0058[0x4]; // 0x58
	public:
		int32_t m_frameCorners[3][3]; // 0x5c		
		animgraphlib::CPoseHandle m_poses[9]; // 0x80		
	private:
		[[maybe_unused]] uint8_t __pad00a4[0x4]; // 0xa4
	public:
		animgraphlib::CAnimInputDamping m_damping; // 0xa8		
		animgraphlib::AnimVectorSource m_blendSource; // 0xb8		
		animgraphlib::CAnimParamHandle m_paramIndex; // 0xbc		
	private:
		[[maybe_unused]] uint8_t __pad00be[0x2]; // 0xbe
	public:
		Vector m_verticalAxis; // 0xc0		
		Vector m_horizontalAxis; // 0xcc		
		animationsystem::HSequence m_hSequence; // 0xd8		
		float m_flMaxValue; // 0xdc		
		int32_t m_nSequenceMaxFrame; // 0xe0		
	};
};
