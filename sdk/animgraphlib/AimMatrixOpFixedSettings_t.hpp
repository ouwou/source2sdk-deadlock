#pragma once
#include "animgraphlib/AimMatrixBlendMode.hpp"
#include "animgraphlib/CAnimInputDamping.hpp"
#include "animgraphlib/CBlendCurve.hpp"
#include "animgraphlib/CPoseHandle.hpp"
#include "modellib/CAnimAttachment.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0xe0
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct AimMatrixOpFixedSettings_t
	{
	public:
		modellib::CAnimAttachment m_attachment; // 0x0		
		animgraphlib::CAnimInputDamping m_damping; // 0x80		
		animgraphlib::CPoseHandle m_poseCacheHandles[10]; // 0x90		
		animgraphlib::AimMatrixBlendMode m_eBlendMode; // 0xb8		
		float m_flMaxYawAngle; // 0xbc		
		float m_flMaxPitchAngle; // 0xc0		
		int32_t m_nSequenceMaxFrame; // 0xc4		
		int32_t m_nBoneMaskIndex; // 0xc8		
		bool m_bTargetIsPosition; // 0xcc		
		bool m_bUseBiasAndClamp; // 0xcd		
	private:
		[[maybe_unused]] uint8_t __pad00ce[0x2]; // 0xce
	public:
		float m_flBiasAndClampYawOffset; // 0xd0		
		float m_flBiasAndClampPitchOffset; // 0xd4		
		animgraphlib::CBlendCurve m_biasAndClampBlendCurve; // 0xd8		
	};
};
