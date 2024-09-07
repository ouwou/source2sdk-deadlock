#pragma once
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include "animgraphlib/HitReactFixedSettings_t.hpp"
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
	class CHitReactUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	public:
		animgraphlib::HitReactFixedSettings_t m_opFixedSettings; // 0x68		
	private:
		[[maybe_unused]] uint8_t __pad00ac[0x8]; // 0xac
	public:
		animgraphlib::CAnimParamHandle m_triggerParam; // 0xb4		
		animgraphlib::CAnimParamHandle m_hitBoneParam; // 0xb6		
		animgraphlib::CAnimParamHandle m_hitOffsetParam; // 0xb8		
		animgraphlib::CAnimParamHandle m_hitDirectionParam; // 0xba		
		animgraphlib::CAnimParamHandle m_hitStrengthParam; // 0xbc		
	private:
		[[maybe_unused]] uint8_t __pad00be[0x2]; // 0xbe
	public:
		float m_flMinDelayBetweenHits; // 0xc0		
		bool m_bResetChild; // 0xc4		
	};
};
