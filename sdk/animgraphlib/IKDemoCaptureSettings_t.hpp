#pragma once
#include "animgraphlib/IKChannelMode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	struct IKDemoCaptureSettings_t
	{
	public:
		// MPropertyFriendlyName "Target Parent"
		// MPropertyAttributeChoiceName "Bone"
		CUtlString m_parentBoneName; // 0x0		
		// MPropertyFriendlyName "Solver Mode"
		// MPropertyAttrChangeCallback
		animgraphlib::IKChannelMode m_eMode; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		// MPropertyFriendlyName "IK Chain"
		// MPropertyAttributeChoiceName "IKChain"
		// MPropertyAttrStateCallback
		CUtlString m_ikChainName; // 0x10		
		// MPropertyFriendlyName "Start Bone"
		// MPropertyAttributeChoiceName "Bone"
		// MPropertyAttrStateCallback
		CUtlString m_oneBoneStart; // 0x18		
		// MPropertyFriendlyName "End Bone"
		// MPropertyAttributeChoiceName "Bone"
		// MPropertyAttrStateCallback
		CUtlString m_oneBoneEnd; // 0x20		
	};
};
