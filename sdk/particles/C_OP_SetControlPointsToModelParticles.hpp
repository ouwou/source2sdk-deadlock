#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x2d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetControlPointsToModelParticles : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "hitbox set"
		char m_HitboxSetName[128]; // 0x1c0		
		// MPropertyFriendlyName "attachment to follow"
		char m_AttachmentName[128]; // 0x240		
		// MPropertyFriendlyName "First control point to set"
		int32_t m_nFirstControlPoint; // 0x2c0		
		// MPropertyFriendlyName "# of control points to set"
		int32_t m_nNumControlPoints; // 0x2c4		
		// MPropertyFriendlyName "first particle to copy"
		int32_t m_nFirstSourcePoint; // 0x2c8		
		// MPropertyFriendlyName "use skinning instead of hitboxes"
		bool m_bSkin; // 0x2cc		
		// MPropertyFriendlyName "follow attachment"
		bool m_bAttachment; // 0x2cd		
	};
};
