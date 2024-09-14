#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
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
    // Size: 0x1f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapCPtoCP : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "input control point number"
        int32_t m_nInputControlPoint; // 0x1c8        
        // metadata: MPropertyFriendlyName "output control point number"
        int32_t m_nOutputControlPoint; // 0x1cc        
        // metadata: MPropertyFriendlyName "input field"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nInputField; // 0x1d0        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nOutputField; // 0x1d4        
        // metadata: MPropertyFriendlyName "input minimum"
        float m_flInputMin; // 0x1d8        
        // metadata: MPropertyFriendlyName "input maximum"
        float m_flInputMax; // 0x1dc        
        // metadata: MPropertyFriendlyName "output minimum"
        float m_flOutputMin; // 0x1e0        
        // metadata: MPropertyFriendlyName "output maximum"
        float m_flOutputMax; // 0x1e4        
        // metadata: MPropertyFriendlyName "use the derivative"
        bool m_bDerivative; // 0x1e8        
        [[maybe_unused]] std::uint8_t pad_0x1e9[0x3]; // 0x1e9
        // metadata: MPropertyFriendlyName "interpolation"
        float m_flInterpRate; // 0x1ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapCPtoCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapCPtoCP) == 0x1f0);
};
