#pragma once
#include "animationsystem/AnimationDecodeDebugDumpElement_t.hpp"
#include "animationsystem/AnimationSnapshotType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 16
	// Size: 0x110
	// 
	// MGetKV3ClassDefaults
	struct AnimationSnapshotBase_t
	{
	public:
		float m_flRealTime; // 0x0		
		matrix3x4a_t m_rootToWorld; // 0x10		
		bool m_bBonesInWorldSpace; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0041[0x7]; // 0x41
	public:
		CUtlVector<uint32_t> m_boneSetupMask; // 0x48		
		CUtlVector<matrix3x4a_t> m_boneTransforms; // 0x60		
		CUtlVector<float> m_flexControllers; // 0x78		
		animationsystem::AnimationSnapshotType_t m_SnapshotType; // 0x90		
		bool m_bHasDecodeDump; // 0x94		
	private:
		[[maybe_unused]] uint8_t __pad0095[0x3]; // 0x95
	public:
		animationsystem::AnimationDecodeDebugDumpElement_t m_DecodeDump; // 0x98		
	};
};
