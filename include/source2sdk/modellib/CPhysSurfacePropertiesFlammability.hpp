#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPhysSurfacePropertiesFlammability
    {
    public:
        // metadata: MKV3TransferName "heatconductivity"
        float m_heatConductivity; // 0x0        
        // metadata: MKV3TransferName "flashpoint"
        float m_flashpoint; // 0x4        
        // metadata: MKV3TransferName "burnfuel"
        float m_burnfuel; // 0x8        
        // metadata: MKV3TransferName "heataura"
        float m_heataura; // 0xc        
        // metadata: MKV3TransferName "immediateignition"
        bool m_immediateignition; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x11[0x3]; // 0x11
        // metadata: MKV3TransferName "burndamage"
        float m_burndamage; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPhysSurfacePropertiesFlammability, m_heatConductivity) == 0x0);
    static_assert(offsetof(CPhysSurfacePropertiesFlammability, m_flashpoint) == 0x4);
    static_assert(offsetof(CPhysSurfacePropertiesFlammability, m_burnfuel) == 0x8);
    static_assert(offsetof(CPhysSurfacePropertiesFlammability, m_heataura) == 0xc);
    static_assert(offsetof(CPhysSurfacePropertiesFlammability, m_immediateignition) == 0x10);
    static_assert(offsetof(CPhysSurfacePropertiesFlammability, m_burndamage) == 0x14);
    
    static_assert(sizeof(CPhysSurfacePropertiesFlammability) == 0x18);
};
