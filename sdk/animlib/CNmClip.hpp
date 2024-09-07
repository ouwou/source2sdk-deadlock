#pragma once
#include "animlib/CNmRootMotionData.hpp"
#include "animlib/CNmSyncTrack.hpp"
#include "animlib/NmCompressionSettings_t.hpp"
#include "resourcesystem/InfoForResourceTypeCNmSkeleton.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 16
	// Size: 0x1b0
	// 
	// MGetKV3ClassDefaults
	class CNmClip
	{
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeCNmSkeleton> m_skeleton; // 0x0		
		uint32_t m_nNumFrames; // 0x8		
		float m_flDuration; // 0xc		
		CUtlBinaryBlock m_compressedPoseData; // 0x10		
		CUtlVector<animlib::NmCompressionSettings_t> m_trackCompressionSettings; // 0x28		
		CUtlVector<uint32_t> m_compressedPoseOffsets; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0058[0x48]; // 0x58
	public:
		animlib::CNmSyncTrack m_syncTrack; // 0xa0		
		animlib::CNmRootMotionData m_rootMotion; // 0x150		
		bool m_bIsAdditive; // 0x1a0		
	};
};
