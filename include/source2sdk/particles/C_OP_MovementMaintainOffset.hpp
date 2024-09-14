#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
    // Size: 0x1d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_MovementMaintainOffset : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "desired offset"
        // metadata: MVectorIsCoordinate
        Vector m_vecOffset; // 0x1c0        
        // metadata: MPropertyFriendlyName "local space CP"
        int32_t m_nCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "scale by radius"
        bool m_bRadiusScale; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_MovementMaintainOffset because it is not a standard-layout class
    static_assert(sizeof(C_OP_MovementMaintainOffset) == 0x1d8);
};
