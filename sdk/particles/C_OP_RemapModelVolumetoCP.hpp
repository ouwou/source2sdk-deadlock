#pragma once
#include "particles/BBoxVolumeType_t.hpp"
#include "particles/CParticleFunctionPreEmission.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapModelVolumetoCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "output BBox Type"
		particles::BBoxVolumeType_t m_nBBoxType; // 0x1c8		
		// MPropertyFriendlyName "input control point"
		int32_t m_nInControlPointNumber; // 0x1cc		
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutControlPointNumber; // 0x1d0		
		// MPropertyFriendlyName "output max control point"
		// MPropertySuppressExpr "m_nBBoxType != BBOX_MINS_MAXS"
		int32_t m_nOutControlPointMaxNumber; // 0x1d4		
		// MPropertyFriendlyName "output CP component"
		// MPropertyAttributeChoiceName "vector_component"
		// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
		int32_t m_nField; // 0x1d8		
		// MPropertyFriendlyName "input volume minimum in cubic units"
		// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
		float m_flInputMin; // 0x1dc		
		// MPropertyFriendlyName "input volume maximum in cubic units"
		// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
		float m_flInputMax; // 0x1e0		
		// MPropertyFriendlyName "output minimum"
		// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
		float m_flOutputMin; // 0x1e4		
		// MPropertyFriendlyName "output maximum"
		// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
		float m_flOutputMax; // 0x1e8		
		// MPropertyFriendlyName "check full bbox only"
		// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
		bool m_bBBoxOnly; // 0x1ec		
		// MPropertyFriendlyName "cube root of volume"
		// MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
		bool m_bCubeRoot; // 0x1ed		
	};
};
