#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x220
    // Has VTable
    // 
    // static metadata: MParticleMaxVersion "7"
    // static metadata: MParticleReplacementOp "C_INIT_CreateSequentialPathV2"
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateSequentialPath : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "maximum distance"
        float m_fMaxDistance; // 0x1c8        
        // metadata: MPropertyFriendlyName "particles to map from start to end"
        float m_flNumToAssign; // 0x1cc        
        // metadata: MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
        bool m_bLoop; // 0x1d0        
        // metadata: MPropertyFriendlyName "use sequential CP pairs between start and end point"
        bool m_bCPPairs; // 0x1d1        
        // metadata: MPropertyFriendlyName "save offset"
        bool m_bSaveOffset; // 0x1d2        
        [[maybe_unused]] std::uint8_t pad_0x1d3[0xd]; // 0x1d3
        particles::CPathParameters m_PathParams; // 0x1e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateSequentialPath because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateSequentialPath) == 0x220);
};
