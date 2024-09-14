#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
    // Size: 0x12e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateOnModel : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "input model"
        particleslib::CParticleModelInput m_modelInput; // 0x1c8        
        // metadata: MPropertyFriendlyName "input transform for transforming local space bias vector"
        // metadata: MParticleInputOptional
        particleslib::CParticleTransformInput m_transformInput; // 0x228        
        // metadata: MPropertyFriendlyName "force to be inside model"
        int32_t m_nForceInModel; // 0x290        
        // metadata: MPropertyFriendlyName "bias box distribution by volume"
        bool m_bScaleToVolume; // 0x294        
        // metadata: MPropertyFriendlyName "even distribution within boxes"
        bool m_bEvenDistribution; // 0x295        
        [[maybe_unused]] std::uint8_t pad_0x296[0x2]; // 0x296
        // metadata: MPropertyFriendlyName "desired hitbox"
        particleslib::CParticleCollectionFloatInput m_nDesiredHitbox; // 0x298        
        // metadata: MPropertyFriendlyName "Control Point Providing Hitbox index"
        int32_t m_nHitboxValueFromControlPointIndex; // 0x3f8        
        [[maybe_unused]] std::uint8_t pad_0x3fc[0x4]; // 0x3fc
        // metadata: MPropertyFriendlyName "hitbox scale"
        particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x400        
        // metadata: MPropertyFriendlyName "inherited velocity scale"
        float m_flBoneVelocity; // 0xa78        
        // metadata: MPropertyFriendlyName "maximum inherited velocity"
        float m_flMaxBoneVelocity; // 0xa7c        
        // metadata: MPropertyFriendlyName "direction bias"
        // metadata: MVectorIsCoordinate
        particleslib::CParticleCollectionVecInput m_vecDirectionBias; // 0xa80        
        // metadata: MPropertyFriendlyName "hitbox set"
        char m_HitboxSetName[128]; // 0x10f8        
        // metadata: MPropertyFriendlyName "bias in local space"
        bool m_bLocalCoords; // 0x1178        
        // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
        bool m_bUseBones; // 0x1179        
        // metadata: MPropertyFriendlyName "Use renderable meshes instead of hitboxes"
        bool m_bUseMesh; // 0x117a        
        [[maybe_unused]] std::uint8_t pad_0x117b[0x5]; // 0x117b
        // metadata: MPropertyFriendlyName "hitbox shell thickness"
        particleslib::CParticleCollectionFloatInput m_flShellSize; // 0x1180        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateOnModel because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateOnModel) == 0x12e0);
};
