#pragma once
#include "source2sdk/particles/AnimationType_t.hpp"
#include "source2sdk/particles/C_OP_RenderPoints.hpp"
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
    // Size: 0x238
    // Has VTable
    // 
    // static metadata: MObsoleteParticleFunction
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderLights : public particles::C_OP_RenderPoints
    {
    public:
        // metadata: MPropertyFriendlyName "animation rate"
        float m_flAnimationRate; // 0x218        
        // metadata: MPropertyFriendlyName "animation type"
        particles::AnimationType_t m_nAnimationType; // 0x21c        
        // metadata: MPropertyFriendlyName "set animation value in FPS"
        bool m_bAnimateInFPS; // 0x220        
        [[maybe_unused]] std::uint8_t pad_0x221[0x3]; // 0x221
        // metadata: MPropertyFriendlyName "minimum visual size"
        float m_flMinSize; // 0x224        
        // metadata: MPropertyFriendlyName "maximum visual size"
        float m_flMaxSize; // 0x228        
        // metadata: MPropertyFriendlyName "size at which to start fading"
        float m_flStartFadeSize; // 0x22c        
        // metadata: MPropertyFriendlyName "size at which to fade away"
        float m_flEndFadeSize; // 0x230        
        [[maybe_unused]] std::uint8_t pad_0x234[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderLights because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderLights) == 0x238);
};
