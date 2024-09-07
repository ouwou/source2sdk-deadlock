#pragma once
#include "animgraphlib/IKBoneNameAndIndex_t.hpp"
#include "animgraphlib/IKTargetCoordinateSystem.hpp"
#include "animgraphlib/IKTargetSource.hpp"
#include "modellib/AnimParamID.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x28
	struct IKTargetSettings_t
	{
	public:
		// MPropertyFriendlyName "Target Source"
		// MPropertyAttrChangeCallback
		animgraphlib::IKTargetSource m_TargetSource; // 0x0		
		// MPropertyFriendlyName "Bone"
		// MPropertyAttrStateCallback
		animgraphlib::IKBoneNameAndIndex_t m_Bone; // 0x8		
		// MPropertyFriendlyName "Animgraph Position Parameter"
		// MPropertyAttributeChoiceName "VectorParameter"
		// MPropertyAttrStateCallback
		modellib::AnimParamID m_AnimgraphParameterNamePosition; // 0x18		
		// MPropertyFriendlyName "Animgraph Orientation Parameter"
		// MPropertyAttributeChoiceName "QuaternionParameter"
		// MPropertyAttrStateCallback
		modellib::AnimParamID m_AnimgraphParameterNameOrientation; // 0x1c		
		// MPropertyFriendlyName "Target Coords"
		// MPropertyAttrStateCallback
		animgraphlib::IKTargetCoordinateSystem m_TargetCoordSystem; // 0x20		
	};
};
