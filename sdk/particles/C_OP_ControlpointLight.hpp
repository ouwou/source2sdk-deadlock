#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x6d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ControlpointLight : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "initial color bias"
		float m_flScale; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x48c]; // 0x1c4
	public:
		// MPropertyFriendlyName "light 1 control point"
		int32_t m_nControlPoint1; // 0x650		
		// MPropertyFriendlyName "light 2 control point"
		int32_t m_nControlPoint2; // 0x654		
		// MPropertyFriendlyName "light 3 control point"
		int32_t m_nControlPoint3; // 0x658		
		// MPropertyFriendlyName "light 4 control point"
		int32_t m_nControlPoint4; // 0x65c		
		// MPropertyFriendlyName "light 1 control point offset"
		Vector m_vecCPOffset1; // 0x660		
		// MPropertyFriendlyName "light 2 control point offset"
		Vector m_vecCPOffset2; // 0x66c		
		// MPropertyFriendlyName "light 3 control point offset"
		Vector m_vecCPOffset3; // 0x678		
		// MPropertyFriendlyName "light 4 control point offset"
		Vector m_vecCPOffset4; // 0x684		
		// MPropertyFriendlyName "light 1 50% distance"
		float m_LightFiftyDist1; // 0x690		
		// MPropertyFriendlyName "light 1 0% distance"
		float m_LightZeroDist1; // 0x694		
		// MPropertyFriendlyName "light 2 50% distance"
		float m_LightFiftyDist2; // 0x698		
		// MPropertyFriendlyName "light 2 0% distance"
		float m_LightZeroDist2; // 0x69c		
		// MPropertyFriendlyName "light 3 50% distance"
		float m_LightFiftyDist3; // 0x6a0		
		// MPropertyFriendlyName "light 3 0% distance"
		float m_LightZeroDist3; // 0x6a4		
		// MPropertyFriendlyName "light 4 50% distance"
		float m_LightFiftyDist4; // 0x6a8		
		// MPropertyFriendlyName "light 4 0% distance"
		float m_LightZeroDist4; // 0x6ac		
		// MPropertyFriendlyName "light 1 color"
		Color m_LightColor1; // 0x6b0		
		// MPropertyFriendlyName "light 2 color"
		Color m_LightColor2; // 0x6b4		
		// MPropertyFriendlyName "light 3 color"
		Color m_LightColor3; // 0x6b8		
		// MPropertyFriendlyName "light 4 color"
		Color m_LightColor4; // 0x6bc		
		// MPropertyFriendlyName "light 1 type 0=point 1=spot"
		bool m_bLightType1; // 0x6c0		
		// MPropertyFriendlyName "light 2 type 0=point 1=spot"
		bool m_bLightType2; // 0x6c1		
		// MPropertyFriendlyName "light 3 type 0=point 1=spot"
		bool m_bLightType3; // 0x6c2		
		// MPropertyFriendlyName "light 4 type 0=point 1=spot"
		bool m_bLightType4; // 0x6c3		
		// MPropertyFriendlyName "light 1 dynamic light"
		bool m_bLightDynamic1; // 0x6c4		
		// MPropertyFriendlyName "light 2 dynamic light"
		bool m_bLightDynamic2; // 0x6c5		
		// MPropertyFriendlyName "light 3 dynamic light"
		bool m_bLightDynamic3; // 0x6c6		
		// MPropertyFriendlyName "light 4 dynamic light"
		bool m_bLightDynamic4; // 0x6c7		
		// MPropertyFriendlyName "compute normals from control points"
		bool m_bUseNormal; // 0x6c8		
		// MPropertyFriendlyName "half-lambert normals"
		bool m_bUseHLambert; // 0x6c9		
	private:
		[[maybe_unused]] uint8_t __pad06ca[0x4]; // 0x6ca
	public:
		// MPropertyFriendlyName "clamp minimum light value to initial color"
		bool m_bClampLowerRange; // 0x6ce		
		// MPropertyFriendlyName "clamp maximum light value to initial color"
		bool m_bClampUpperRange; // 0x6cf		
	};
};
