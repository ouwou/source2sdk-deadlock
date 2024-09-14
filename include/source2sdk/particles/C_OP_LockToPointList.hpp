#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/PointDefinition_t.hpp"
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
    class C_OP_LockToPointList : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "point list"
        // m_pointList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::PointDefinition_t> m_pointList;
        char m_pointList[0x18]; // 0x1c8        
        // metadata: MPropertyFriendlyName "space points along path"
        bool m_bPlaceAlongPath; // 0x1e0        
        // metadata: MPropertyFriendlyName "Treat path as a loop"
        bool m_bClosedLoop; // 0x1e1        
        [[maybe_unused]] std::uint8_t pad_0x1e2[0x2]; // 0x1e2
        // metadata: MPropertyFriendlyName "Numer of points along path"
        int32_t m_nNumPointsAlongPath; // 0x1e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_LockToPointList because it is not a standard-layout class
    static_assert(sizeof(C_OP_LockToPointList) == 0x1e8);
};
