#pragma once
#include "animgraphlib/CAnimComponentUpdater.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CLookComponentUpdater : public animgraphlib::CAnimComponentUpdater
	{
	private:
		[[maybe_unused]] uint8_t __pad0030[0x4]; // 0x30
	public:
		animgraphlib::CAnimParamHandle m_hLookHeading; // 0x34		
		animgraphlib::CAnimParamHandle m_hLookHeadingVelocity; // 0x36		
		animgraphlib::CAnimParamHandle m_hLookPitch; // 0x38		
		animgraphlib::CAnimParamHandle m_hLookDistance; // 0x3a		
		animgraphlib::CAnimParamHandle m_hLookDirection; // 0x3c		
		animgraphlib::CAnimParamHandle m_hLookTarget; // 0x3e		
		animgraphlib::CAnimParamHandle m_hLookTargetWorldSpace; // 0x40		
		bool m_bNetworkLookTarget; // 0x42		
	};
};
