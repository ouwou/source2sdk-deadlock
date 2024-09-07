#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 4
	// Size: 0x48
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CParticleVisibilityInputs
	{
	public:
		// MPropertyFriendlyName "camera depth bias"
		float m_flCameraBias; // 0x0		
		// MPropertyFriendlyName "input control point number"
		int32_t m_nCPin; // 0x4		
		// MPropertyFriendlyName "input proxy radius"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flProxyRadius; // 0x8		
		// MPropertyFriendlyName "input proxy pixel visibility minimum"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flInputMin; // 0xc		
		// MPropertyFriendlyName "input proxy pixel visibility maximum"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flInputMax; // 0x10		
		// MPropertyFriendlyName "input proxy pixel visibility fade out time"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flInputPixelVisFade; // 0x14		
		// MPropertyFriendlyName "input proxy unsupported hardware fallback value"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flNoPixelVisibilityFallback; // 0x18		
		// MPropertyFriendlyName "input distance minimum"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flDistanceInputMin; // 0x1c		
		// MPropertyFriendlyName "input distance maximum"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flDistanceInputMax; // 0x20		
		// MPropertyFriendlyName "input dot minimum"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flDotInputMin; // 0x24		
		// MPropertyFriendlyName "input dot maximum"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flDotInputMax; // 0x28		
		// MPropertyFriendlyName "input dot use CP angles"
		// MPropertySuppressExpr "m_nCPin == -1"
		bool m_bDotCPAngles; // 0x2c		
		// MPropertyFriendlyName "input dot use Camera angles"
		// MPropertySuppressExpr "m_nCPin == -1"
		bool m_bDotCameraAngles; // 0x2d		
	private:
		[[maybe_unused]] uint8_t __pad002e[0x2]; // 0x2e
	public:
		// MPropertyFriendlyName "output alpha scale minimum"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flAlphaScaleMin; // 0x30		
		// MPropertyFriendlyName "output alpha scale maximum"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flAlphaScaleMax; // 0x34		
		// MPropertyFriendlyName "output radius scale minimum"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flRadiusScaleMin; // 0x38		
		// MPropertyFriendlyName "output radius scale maximum"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flRadiusScaleMax; // 0x3c		
		// MPropertyFriendlyName "output radius FOV scale base"
		// MPropertySuppressExpr "m_nCPin == -1"
		float m_flRadiusScaleFOVBase; // 0x40		
		// MPropertyFriendlyName "vr camera right eye"
		// MParticleAdvancedField
		bool m_bRightEye; // 0x44		
	};
};
