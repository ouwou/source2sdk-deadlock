#pragma once
#include "animgraphlib/CAnimInputDamping.hpp"
#include "animgraphlib/LookAtBone_t.hpp"
#include "modellib/CAnimAttachment.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0xc0
	// 
	// MGetKV3ClassDefaults
	struct LookAtOpFixedSettings_t
	{
	public:
		modellib::CAnimAttachment m_attachment; // 0x0		
		animgraphlib::CAnimInputDamping m_damping; // 0x80		
		CUtlVector<animgraphlib::LookAtBone_t> m_bones; // 0x90		
		float m_flYawLimit; // 0xa8		
		float m_flPitchLimit; // 0xac		
		float m_flHysteresisInnerAngle; // 0xb0		
		float m_flHysteresisOuterAngle; // 0xb4		
		bool m_bRotateYawForward; // 0xb8		
		bool m_bMaintainUpDirection; // 0xb9		
		bool m_bTargetIsPosition; // 0xba		
		bool m_bUseHysteresis; // 0xbb		
	};
};
