#pragma once
#include "animgraphlib/CAnimInputDamping.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x90
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CStopAtGoalUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
	public:
		float m_flOuterRadius; // 0x6c		
		float m_flInnerRadius; // 0x70		
		float m_flMaxScale; // 0x74		
		float m_flMinScale; // 0x78		
	private:
		[[maybe_unused]] uint8_t __pad007c[0x4]; // 0x7c
	public:
		animgraphlib::CAnimInputDamping m_damping; // 0x80		
	};
};
