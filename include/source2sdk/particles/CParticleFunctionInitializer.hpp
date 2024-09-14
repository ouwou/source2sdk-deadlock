#pragma once
#include "source2sdk/particles/CParticleFunction.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1c8
    // Has VTable
    // Is Abstract
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CParticleFunctionInitializer : public particles::CParticleFunction
    {
    public:
        // metadata: MPropertyFriendlyName "Associated emitter Index"
        int32_t m_nAssociatedEmitterIndex; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CParticleFunctionInitializer because it is not a standard-layout class
    static_assert(sizeof(CParticleFunctionInitializer) == 0x1c8);
};
