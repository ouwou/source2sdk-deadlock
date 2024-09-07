#pragma once
#include "animgraphlib/AnimValueSource.hpp"
#include "animgraphlib/CAnimInputDamping.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
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
	class CFollowPathUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
	public:
		float m_flBlendOutTime; // 0x6c		
		bool m_bBlockNonPathMovement; // 0x70		
		bool m_bStopFeetAtGoal; // 0x71		
		bool m_bScaleSpeed; // 0x72		
	private:
		[[maybe_unused]] uint8_t __pad0073[0x1]; // 0x73
	public:
		float m_flScale; // 0x74		
		float m_flMinAngle; // 0x78		
		float m_flMaxAngle; // 0x7c		
		float m_flSpeedScaleBlending; // 0x80		
	private:
		[[maybe_unused]] uint8_t __pad0084[0x4]; // 0x84
	public:
		animgraphlib::CAnimInputDamping m_turnDamping; // 0x88		
		animgraphlib::AnimValueSource m_facingTarget; // 0x98		
		animgraphlib::CAnimParamHandle m_hParam; // 0x9c		
	private:
		[[maybe_unused]] uint8_t __pad009e[0x2]; // 0x9e
	public:
		float m_flTurnToFaceOffset; // 0xa0		
		bool m_bTurnToFace; // 0xa4		
	};
};
