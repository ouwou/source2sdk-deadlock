#pragma once
#include "animationsystem/HSequence.hpp"
#include "animgraphlib/AnimValueSource.hpp"
#include "animgraphlib/CAnimInputDamping.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CLeafUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xa8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CDirectionalBlendUpdateNode : public animgraphlib::CLeafUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0058[0x4]; // 0x58
	public:
		animationsystem::HSequence m_hSequences[8]; // 0x5c		
	private:
		[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
	public:
		animgraphlib::CAnimInputDamping m_damping; // 0x80		
		animgraphlib::AnimValueSource m_blendValueSource; // 0x90		
		animgraphlib::CAnimParamHandle m_paramIndex; // 0x94		
	private:
		[[maybe_unused]] uint8_t __pad0096[0x2]; // 0x96
	public:
		float m_playbackSpeed; // 0x98		
		float m_duration; // 0x9c		
		bool m_bLoop; // 0xa0		
		bool m_bLockBlendOnReset; // 0xa1		
	};
};
