#pragma once
#include "source2sdk/physicslib/RnShapeDesc_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x28
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct RnSphereDesc_t : public physicslib::RnShapeDesc_t
    {
    public:
        // m_Sphere has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // SphereBase_t<float> m_Sphere;
        char m_Sphere[0x10]; // 0x18        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in RnSphereDesc_t because it is not a standard-layout class
    static_assert(sizeof(RnSphereDesc_t) == 0x28);
};
