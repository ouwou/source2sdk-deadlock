#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleParentSetMode_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
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
    // Size: 0x280
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_DistanceBetweenCPsToCP : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "starting control point"
        int32_t m_nStartCP; // 0x1c8        
        // metadata: MPropertyFriendlyName "ending control point"
        int32_t m_nEndCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "output control point"
        int32_t m_nOutputCP; // 0x1d0        
        // metadata: MPropertyFriendlyName "output control point field"
        int32_t m_nOutputCPField; // 0x1d4        
        // metadata: MPropertyFriendlyName "only set distance once"
        bool m_bSetOnce; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1d9[0x3]; // 0x1d9
        // metadata: MPropertyFriendlyName "distance minimum"
        float m_flInputMin; // 0x1dc        
        // metadata: MPropertyFriendlyName "distance maximum"
        float m_flInputMax; // 0x1e0        
        // metadata: MPropertyFriendlyName "output minimum"
        float m_flOutputMin; // 0x1e4        
        // metadata: MPropertyFriendlyName "output maximum"
        float m_flOutputMax; // 0x1e8        
        // metadata: MPropertyFriendlyName "maximum trace length"
        float m_flMaxTraceLength; // 0x1ec        
        // metadata: MPropertyFriendlyName "LOS Failure Scale"
        float m_flLOSScale; // 0x1f0        
        // metadata: MPropertyFriendlyName "ensure line of sight"
        bool m_bLOS; // 0x1f4        
        // metadata: MPropertyFriendlyName "LOS collision group"
        char m_CollisionGroupName[128]; // 0x1f5        
        [[maybe_unused]] std::uint8_t pad_0x275[0x3]; // 0x275
        // metadata: MPropertyFriendlyName "Trace Set"
        particles::ParticleTraceSet_t m_nTraceSet; // 0x278        
        // metadata: MPropertyFriendlyName "set parent"
        particles::ParticleParentSetMode_t m_nSetParent; // 0x27c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_DistanceBetweenCPsToCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_DistanceBetweenCPsToCP) == 0x280);
};
