#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x1e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_NormalOffset : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "offset min"
        // metadata: MVectorIsCoordinate
        Vector m_OffsetMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "offset max"
        // metadata: MVectorIsCoordinate
        Vector m_OffsetMax; // 0x1d4        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1e0        
        // metadata: MPropertyFriendlyName "offset in local space 0/1"
        bool m_bLocalCoords; // 0x1e4        
        // metadata: MPropertyFriendlyName "normalize output 0/1"
        bool m_bNormalize; // 0x1e5        
        [[maybe_unused]] std::uint8_t pad_0x1e6[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_NormalOffset because it is not a standard-layout class
    static_assert(sizeof(C_INIT_NormalOffset) == 0x1e8);
};
