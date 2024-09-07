#pragma once
#include "particles/CBaseRendererSource2.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleOrientationChoiceList_t.hpp"
#include "particleslib/CParticleCollectionRendererFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x2c70
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderRopes : public particles::CBaseRendererSource2
	{
	public:
		// MPropertyStartGroup "Screenspace Fading and culling"
		// MPropertyFriendlyName "enable fading and clamping"
		// MPropertySortPriority "1000"
		bool m_bEnableFadingAndClamping; // 0x27e8		
	private:
		[[maybe_unused]] uint8_t __pad27e9[0x3]; // 0x27e9
	public:
		// MPropertyFriendlyName "minimum visual screen-size"
		// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
		float m_flMinSize; // 0x27ec		
		// MPropertyFriendlyName "maximum visual screen-size"
		// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
		float m_flMaxSize; // 0x27f0		
		// MPropertyFriendlyName "start fade screen-size"
		// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
		float m_flStartFadeSize; // 0x27f4		
		// MPropertyFriendlyName "end fade and cull screen-size"
		// MPropertySuppressExpr "!m_bEnableFadingAndClamping"
		float m_flEndFadeSize; // 0x27f8		
		// MPropertyFriendlyName "start fade dot product of normal vs view"
		// MPropertySortPriority "1000"
		float m_flStartFadeDot; // 0x27fc		
		// MPropertyFriendlyName "end fade dot product of normal vs view"
		// MPropertySortPriority "1000"
		float m_flEndFadeDot; // 0x2800		
		// MPropertyStartGroup "Rope Tesselation"
		// MPropertyFriendlyName "amount to taper the width of the trail end by"
		float m_flRadiusTaper; // 0x2804		
		// MPropertyFriendlyName "minium number of quads per render segment"
		// MPropertySortPriority "850"
		int32_t m_nMinTesselation; // 0x2808		
		// MPropertyFriendlyName "maximum number of quads per render segment"
		int32_t m_nMaxTesselation; // 0x280c		
		// MPropertyFriendlyName "tesselation resolution scale factor"
		float m_flTessScale; // 0x2810		
	private:
		[[maybe_unused]] uint8_t __pad2814[0x4]; // 0x2814
	public:
		// MPropertyStartGroup "+Rope Global UV Controls"
		// MPropertyFriendlyName "global texture V World Size"
		// MPropertySortPriority "800"
		particleslib::CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x2818		
		// MPropertyFriendlyName "global texture V Scroll Rate"
		particleslib::CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x2978		
		// MPropertyFriendlyName "global texture V Offset"
		particleslib::CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x2ad8		
		// MPropertyFriendlyName "global texture V Params CP"
		int32_t m_nTextureVParamsCP; // 0x2c38		
		// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
		bool m_bClampV; // 0x2c3c		
	private:
		[[maybe_unused]] uint8_t __pad2c3d[0x3]; // 0x2c3d
	public:
		// MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
		// MPropertyFriendlyName "scale CP start"
		int32_t m_nScaleCP1; // 0x2c40		
		// MPropertyFriendlyName "scale CP end"
		int32_t m_nScaleCP2; // 0x2c44		
		// MPropertyFriendlyName "scale V world size by CP distance"
		float m_flScaleVSizeByControlPointDistance; // 0x2c48		
		// MPropertyFriendlyName "scale V scroll rate by CP distance"
		float m_flScaleVScrollByControlPointDistance; // 0x2c4c		
		// MPropertyFriendlyName "scale V offset by CP distance"
		float m_flScaleVOffsetByControlPointDistance; // 0x2c50		
	private:
		[[maybe_unused]] uint8_t __pad2c54[0x1]; // 0x2c54
	public:
		// MPropertyStartGroup "Rope Global UV Controls"
		// MPropertyFriendlyName "Use scalar attribute for texture coordinate"
		bool m_bUseScalarForTextureCoordinate; // 0x2c55		
	private:
		[[maybe_unused]] uint8_t __pad2c56[0x2]; // 0x2c56
	public:
		// MPropertyFriendlyName "scalar to use for texture coordinate"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
		particles::ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x2c58		
		// MPropertyFriendlyName "scale value to map attribute to texture coordinate"
		// MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
		float m_flScalarAttributeTextureCoordScale; // 0x2c5c		
		// MPropertyStartGroup "Rope Order Controls"
		// MPropertyFriendlyName "reverse point order"
		// MPropertySortPriority "800"
		bool m_bReverseOrder; // 0x2c60		
		// MPropertyFriendlyName "Closed loop"
		bool m_bClosedLoop; // 0x2c61		
	private:
		[[maybe_unused]] uint8_t __pad2c62[0x2]; // 0x2c62
	public:
		// MPropertyStartGroup "Orientation"
		// MPropertyFriendlyName "orientation_type"
		// MPropertySortPriority "750"
		particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x2c64		
		// MPropertyFriendlyName "attribute to use for normal"
		// MPropertyAttributeChoiceName "particlefield_vector"
		// MPropertySortPriority "750"
		// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
		particles::ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x2c68		
		// MPropertyStartGroup "Material"
		// MPropertyFriendlyName "draw as opaque"
		bool m_bDrawAsOpaque; // 0x2c6c		
		// MPropertyStartGroup "Orientation"
		// MPropertyFriendlyName "generate normals for cylinder"
		bool m_bGenerateNormals; // 0x2c6d		
	};
};
