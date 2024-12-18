#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x120
    // Has VTable
    #pragma pack(push, 1)
    class CBuoyancyHelper
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x18]; // 0x0
        CUtlStringToken m_nFluidType; // 0x18        
        float m_flFluidDensity; // 0x1c        
        float m_flNeutrallyBuoyantGravity; // 0x20        
        float m_flNeutrallyBuoyantLinearDamping; // 0x24        
        float m_flNeutrallyBuoyantAngularDamping; // 0x28        
        bool m_bNeutrallyBuoyant; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x2d[0x3]; // 0x2d
        // m_vecFractionOfWheelSubmergedForWheelFriction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecFractionOfWheelSubmergedForWheelFriction;
        char m_vecFractionOfWheelSubmergedForWheelFriction[0x18]; // 0x30        
        // m_vecWheelFrictionScales has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecWheelFrictionScales;
        char m_vecWheelFrictionScales[0x18]; // 0x48        
        // m_vecFractionOfWheelSubmergedForWheelDrag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecFractionOfWheelSubmergedForWheelDrag;
        char m_vecFractionOfWheelSubmergedForWheelDrag[0x18]; // 0x60        
        // m_vecWheelDrag has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecWheelDrag;
        char m_vecWheelDrag[0x18]; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x90[0x90];
        
        // Datamap fields:
        // void m_pController; // 0x8
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBuoyancyHelper, m_nFluidType) == 0x18);
    static_assert(offsetof(CBuoyancyHelper, m_flFluidDensity) == 0x1c);
    static_assert(offsetof(CBuoyancyHelper, m_flNeutrallyBuoyantGravity) == 0x20);
    static_assert(offsetof(CBuoyancyHelper, m_flNeutrallyBuoyantLinearDamping) == 0x24);
    static_assert(offsetof(CBuoyancyHelper, m_flNeutrallyBuoyantAngularDamping) == 0x28);
    static_assert(offsetof(CBuoyancyHelper, m_bNeutrallyBuoyant) == 0x2c);
    static_assert(offsetof(CBuoyancyHelper, m_vecFractionOfWheelSubmergedForWheelFriction) == 0x30);
    static_assert(offsetof(CBuoyancyHelper, m_vecWheelFrictionScales) == 0x48);
    static_assert(offsetof(CBuoyancyHelper, m_vecFractionOfWheelSubmergedForWheelDrag) == 0x60);
    static_assert(offsetof(CBuoyancyHelper, m_vecWheelDrag) == 0x78);
    
    static_assert(sizeof(CBuoyancyHelper) == 0x120);
};
