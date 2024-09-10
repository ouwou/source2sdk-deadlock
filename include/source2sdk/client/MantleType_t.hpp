#pragma once
#include "source2sdk/client/EMantleType.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct MantleType_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyDescription "The minimum height difference of the player origin from the ledge for this type to be selected"
        float m_flMinHeight; // 0x8        
        // metadata: MPropertyDescription "How much vertical distance the anim of this type will appear to travel"
        float m_flAnimHeight; // 0xc        
        // metadata: MPropertyDescription "The maximum height difference of the player origin from the ledge for this type to be selected"
        float m_flMaxHeight; // 0x10        
        // metadata: MPropertyDescription "How long to apply all of the vertical movement of this mantle"
        float m_flVerticalTime; // 0x14        
        // metadata: MPropertyDescription "How long to apply all of the horizontal movement of this mantle.  NOTE: Horizontal applies after the vertical"
        float m_flHorizontalTime; // 0x18        
        client::EMantleType m_eMantleType; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(MantleType_t, m_flMinHeight) == 0x8);
    static_assert(offsetof(MantleType_t, m_flAnimHeight) == 0xc);
    static_assert(offsetof(MantleType_t, m_flMaxHeight) == 0x10);
    static_assert(offsetof(MantleType_t, m_flVerticalTime) == 0x14);
    static_assert(offsetof(MantleType_t, m_flHorizontalTime) == 0x18);
    static_assert(offsetof(MantleType_t, m_eMantleType) == 0x1c);
    
    static_assert(sizeof(MantleType_t) == 0x20);
};
