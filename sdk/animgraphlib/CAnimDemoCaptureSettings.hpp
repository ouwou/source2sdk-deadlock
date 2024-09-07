#pragma once
#include "animgraphlib/BoneDemoCaptureSettings_t.hpp"
#include "animgraphlib/EDemoBoneSelectionMode.hpp"
#include "animgraphlib/IKDemoCaptureSettings_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x80
	// 
	// MGetKV3ClassDefaults
	class CAnimDemoCaptureSettings
	{
	public:
		// MPropertyFriendlyName "Rotation Error Range"
		// MPropertyGroupName "+Spline Settings"
		Vector2D m_vecErrorRangeSplineRotation; // 0x0		
		// MPropertyFriendlyName "Translation Error Range"
		// MPropertyGroupName "+Spline Settings"
		Vector2D m_vecErrorRangeSplineTranslation; // 0x8		
		// MPropertyFriendlyName "Scale Error Range"
		// MPropertyGroupName "+Spline Settings"
		Vector2D m_vecErrorRangeSplineScale; // 0x10		
		// MPropertyFriendlyName "Max IK Rotation Error"
		// MPropertyGroupName "+Spline Settings"
		float m_flIkRotation_MaxSplineError; // 0x18		
		// MPropertyFriendlyName "Max IK Translation Error"
		// MPropertyGroupName "+Spline Settings"
		float m_flIkTranslation_MaxSplineError; // 0x1c		
		// MPropertyFriendlyName "Rotation Error Range"
		// MPropertyGroupName "+Quantization Settings"
		Vector2D m_vecErrorRangeQuantizationRotation; // 0x20		
		// MPropertyFriendlyName "Translation Error Range"
		// MPropertyGroupName "+Quantization Settings"
		Vector2D m_vecErrorRangeQuantizationTranslation; // 0x28		
		// MPropertyFriendlyName "Scale Error Range"
		// MPropertyGroupName "+Quantization Settings"
		Vector2D m_vecErrorRangeQuantizationScale; // 0x30		
		// MPropertyFriendlyName "Max IK Rotation Error"
		// MPropertyGroupName "+Quantization Settings"
		float m_flIkRotation_MaxQuantizationError; // 0x38		
		// MPropertyFriendlyName "Max IK Translation Error"
		// MPropertyGroupName "+Quantization Settings"
		float m_flIkTranslation_MaxQuantizationError; // 0x3c		
		// MPropertyFriendlyName "Base Sequence"
		// MPropertyGroupName "+Base Pose"
		// MPropertyAttributeChoiceName "Sequence"
		CUtlString m_baseSequence; // 0x40		
		// MPropertyFriendlyName "Base Sequence Frame"
		// MPropertyGroupName "+Base Pose"
		int32_t m_nBaseSequenceFrame; // 0x48		
		// MPropertyFriendlyName "Bone Selection Mode"
		// MPropertyGroupName "+Bones"
		// MPropertyAttrChangeCallback
		animgraphlib::EDemoBoneSelectionMode m_boneSelectionMode; // 0x4c		
		// MPropertyFriendlyName "Bones"
		// MPropertyGroupName "+Bones"
		// MPropertyAttrStateCallback
		CUtlVector<animgraphlib::BoneDemoCaptureSettings_t> m_bones; // 0x50		
		// MPropertyFriendlyName "IK Chains"
		CUtlVector<animgraphlib::IKDemoCaptureSettings_t> m_ikChains; // 0x68		
	};
};
