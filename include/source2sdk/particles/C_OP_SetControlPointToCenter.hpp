#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleParentSetMode_t.hpp"
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
    // Size: 0x1e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetControlPointToCenter : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "control point number to set"
        int32_t m_nCP1; // 0x1c8        
        // metadata: MPropertyFriendlyName "center offset"
        // metadata: MVectorIsCoordinate
        Vector m_vecCP1Pos; // 0x1cc        
        // metadata: MPropertyFriendlyName "use average particle position"
        // metadata: MVectorIsCoordinate
        bool m_bUseAvgParticlePos; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1d9[0x3]; // 0x1d9
        // metadata: MPropertyFriendlyName "set parent"
        particles::ParticleParentSetMode_t m_nSetParent; // 0x1dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetControlPointToCenter because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetControlPointToCenter) == 0x1e0);
};
