#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/CPathParameters.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x210
    // Has VTable
    // 
    // static metadata: MParticleMaxVersion "7"
    // static metadata: MParticleReplacementOp "C_OP_LockToSavedSequentialPathV2"
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_LockToSavedSequentialPath : public particles::CParticleFunctionOperator
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1c0[0x4]; // 0x1c0
        // metadata: MPropertyFriendlyName "start fade time"
        float m_flFadeStart; // 0x1c4        
        // metadata: MPropertyFriendlyName "end fade time"
        float m_flFadeEnd; // 0x1c8        
        // metadata: MPropertyFriendlyName "Use sequential CP pairs between start and end point"
        bool m_bCPPairs; // 0x1cc        
        [[maybe_unused]] std::uint8_t pad_0x1cd[0x3]; // 0x1cd
        particles::CPathParameters m_PathParams; // 0x1d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_LockToSavedSequentialPath because it is not a standard-layout class
    static_assert(sizeof(C_OP_LockToSavedSequentialPath) == 0x210);
};
