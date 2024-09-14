#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Chomp_Grapple : public client::CCitadelModifier
    {
    public:
        // m_hMoveToTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hMoveToTarget;
        char m_hMoveToTarget[0x4]; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0xe4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Chomp_Grapple because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Chomp_Grapple) == 0x1a8);
};
