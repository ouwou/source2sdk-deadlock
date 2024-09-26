#pragma once
#include "source2sdk/particles/CBaseRendererSource2.hpp"
#include "source2sdk/particles/CReplicationParameters.hpp"
#include "source2sdk/particles/ParticleLightingQuality_t.hpp"
#include "source2sdk/particles/ParticleOrientationChoiceList_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4728
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderSprites : public particles::CBaseRendererSource2
    {
    public:
        // metadata: MPropertyStartGroup "Animation"
        // metadata: MPropertyFriendlyName "sequence id override"
        // metadata: MPropertySortPriority "500"
        particleslib::CParticleCollectionRendererFloatInput m_nSequenceOverride; // 0x2ab8        
        // metadata: MPropertyStartGroup "Orientation"
        // metadata: MPropertyFriendlyName "orientation type"
        // metadata: MPropertySortPriority "750"
        particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x2c18        
        // metadata: MPropertyFriendlyName "orientation control point"
        // metadata: MPropertySortPriority "750"
        // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
        int32_t m_nOrientationControlPoint; // 0x2c1c        
        // metadata: MPropertyFriendlyName "enable yaw for particles aligned to normals"
        // metadata: MPropertySortPriority "750"
        // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
        bool m_bUseYawWithNormalAligned; // 0x2c20        
        [[maybe_unused]] std::uint8_t pad_0x2c21[0x7]; // 0x2c21
        // metadata: MPropertyStartGroup "Fading and culling"
        // metadata: MPropertyFriendlyName "minimum visual screen size"
        // metadata: MPropertySortPriority "1000"
        particleslib::CParticleCollectionRendererFloatInput m_flMinSize; // 0x2c28        
        // metadata: MPropertyFriendlyName "maximum visual screen size"
        // metadata: MPropertySortPriority "1000"
        particleslib::CParticleCollectionRendererFloatInput m_flMaxSize; // 0x2d88        
        // metadata: MPropertyFriendlyName "Factor to map size adjustment to alpha"
        // metadata: MPropertySortPriority "1000"
        particleslib::CParticleCollectionRendererFloatInput m_flAlphaAdjustWithSizeAdjust; // 0x2ee8        
        // metadata: MPropertyFriendlyName "screen size to start fading"
        // metadata: MPropertySortPriority "1000"
        particleslib::CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x3048        
        // metadata: MPropertyFriendlyName "screen size to fade away"
        // metadata: MPropertySortPriority "1000"
        particleslib::CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x31a8        
        // metadata: MPropertyFriendlyName "start fade dot product of normal vs view"
        // metadata: MPropertySortPriority "1000"
        float m_flStartFadeDot; // 0x3308        
        // metadata: MPropertyFriendlyName "end fade dot product of normal vs view"
        // metadata: MPropertySortPriority "1000"
        float m_flEndFadeDot; // 0x330c        
        // metadata: MPropertyStartGroup "Distance to alpha coding"
        // metadata: MPropertyFriendlyName "distance alpha"
        // metadata: MPropertySortPriority "0"
        bool m_bDistanceAlpha; // 0x3310        
        // metadata: MPropertyFriendlyName "use soft edges for distance alpha"
        // metadata: MPropertySortPriority "0"
        // metadata: MPropertySuppressExpr "!m_bDistanceAlpha"
        bool m_bSoftEdges; // 0x3311        
        [[maybe_unused]] std::uint8_t pad_0x3312[0x2]; // 0x3312
        // metadata: MPropertyFriendlyName "start value for soft edges for distance alpha"
        // metadata: MPropertySortPriority "0"
        // metadata: MPropertySuppressExpr "!m_bDistanceAlpha"
        float m_flEdgeSoftnessStart; // 0x3314        
        // metadata: MPropertyFriendlyName "end value for soft edges for distance alpha"
        // metadata: MPropertySortPriority "0"
        // metadata: MPropertySuppressExpr "!m_bDistanceAlpha"
        float m_flEdgeSoftnessEnd; // 0x3318        
        // metadata: MPropertyStartGroup "Outlining"
        // metadata: MPropertyFriendlyName "enable particle outlining"
        // metadata: MPropertySortPriority "0"
        bool m_bOutline; // 0x331c        
        // metadata: MPropertyFriendlyName "outline color"
        // metadata: MPropertySortPriority "0"
        // metadata: MPropertySuppressExpr "!m_bOutline"
        Color m_OutlineColor; // 0x331d        
        [[maybe_unused]] std::uint8_t pad_0x3321[0x3]; // 0x3321
        // metadata: MPropertyFriendlyName "outline alpha"
        // metadata: MPropertyAttributeRange "0 255"
        // metadata: MPropertySortPriority "0"
        // metadata: MPropertySuppressExpr "!m_bOutline"
        int32_t m_nOutlineAlpha; // 0x3324        
        // metadata: MPropertyFriendlyName "outline start 0"
        // metadata: MPropertySortPriority "0"
        // metadata: MPropertySuppressExpr "!m_bOutline"
        float m_flOutlineStart0; // 0x3328        
        // metadata: MPropertyFriendlyName "outline start 1"
        // metadata: MPropertySortPriority "0"
        // metadata: MPropertySuppressExpr "!m_bOutline"
        float m_flOutlineStart1; // 0x332c        
        // metadata: MPropertyFriendlyName "outline end 0"
        // metadata: MPropertySortPriority "0"
        // metadata: MPropertySuppressExpr "!m_bOutline"
        float m_flOutlineEnd0; // 0x3330        
        // metadata: MPropertyFriendlyName "outline end 1"
        // metadata: MPropertySortPriority "0"
        // metadata: MPropertySuppressExpr "!m_bOutline"
        float m_flOutlineEnd1; // 0x3334        
        // metadata: MPropertyStartGroup "Lighting and Shadows"
        // metadata: MPropertyFriendlyName "lighting mode"
        // metadata: MPropertySortPriority "400"
        // metadata: MPropertySuppressExpr "mod != hlx"
        particles::ParticleLightingQuality_t m_nLightingMode; // 0x3338        
        [[maybe_unused]] std::uint8_t pad_0x333c[0x4]; // 0x333c
        // metadata: MPropertyFriendlyName "vertex lighting tessellation (0-5)"
        // metadata: MPropertyAttributeRange "0 5"
        // metadata: MPropertySortPriority "400"
        // metadata: MPropertySuppressExpr "mod != hlx || m_nLightingMode != PARTICLE_LIGHTING_PER_VERTEX"
        particleslib::CParticleCollectionRendererFloatInput m_flLightingTessellation; // 0x3340        
        // metadata: MPropertyFriendlyName "lighting directionality"
        // metadata: MPropertySortPriority "400"
        // metadata: MPropertySuppressExpr "mod != hlx"
        particleslib::CParticleCollectionRendererFloatInput m_flLightingDirectionality; // 0x34a0        
        // metadata: MPropertyFriendlyName "Particle Shadows"
        // metadata: MPropertySortPriority "400"
        // metadata: MPropertySuppressExpr "mod != csgo"
        bool m_bParticleShadows; // 0x3600        
        [[maybe_unused]] std::uint8_t pad_0x3601[0x3]; // 0x3601
        // metadata: MPropertyFriendlyName "Shadow Density"
        // metadata: MPropertySortPriority "400"
        // metadata: MPropertySuppressExpr "!m_bParticleShadows"
        float m_flShadowDensity; // 0x3604        
        // metadata: MPropertyStartGroup "Replication"
        // metadata: MPropertyFriendlyName "Replication settings"
        particles::CReplicationParameters m_replicationParameters; // 0x3608        
        [[maybe_unused]] std::uint8_t pad_0x4720[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderSprites because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderSprites) == 0x4728);
};
