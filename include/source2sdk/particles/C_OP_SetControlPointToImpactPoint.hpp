#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Size: 0x3d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointToImpactPoint : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "control point to set"
        int32_t m_nCPOut; // 0x1c8        
        // metadata: MPropertyFriendlyName "control point to trace from"
        int32_t m_nCPIn; // 0x1cc        
        // metadata: MPropertyFriendlyName "trace update rate"
        float m_flUpdateRate; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d4[0x4]; // 0x1d4
        // metadata: MPropertyFriendlyName "max trace length"
        particleslib::CParticleCollectionFloatInput m_flTraceLength; // 0x1d8        
        // metadata: MPropertyFriendlyName "offset start point amount"
        float m_flStartOffset; // 0x338        
        // metadata: MPropertyFriendlyName "offset end point amount"
        float m_flOffset; // 0x33c        
        // metadata: MPropertyFriendlyName "trace direction override"
        // metadata: MVectorIsCoordinate
        Vector m_vecTraceDir; // 0x340        
        // metadata: MPropertyFriendlyName "trace collision group"
        char m_CollisionGroupName[128]; // 0x34c        
        // metadata: MPropertyFriendlyName "Trace Set"
        particles::ParticleTraceSet_t m_nTraceSet; // 0x3cc        
        // metadata: MPropertyFriendlyName "set to trace endpoint if no collision"
        bool m_bSetToEndpoint; // 0x3d0        
        // metadata: MPropertyFriendlyName "trace to closest surface along all cardinal directions"
        bool m_bTraceToClosestSurface; // 0x3d1        
        // metadata: MPropertyFriendlyName "include water"
        bool m_bIncludeWater; // 0x3d2        
        [[maybe_unused]] std::uint8_t pad_0x3d3[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointToImpactPoint because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointToImpactPoint) == 0x3d8);
};
