#pragma once
#include "source2sdk/client/CCitadel_Item.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd08
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Upgrade_AmmoScavenger : public client::CCitadel_Item
    {
    public:
        // m_hLastOrbTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastOrbTarget;
        char m_hLastOrbTarget[0x4]; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xc94[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Upgrade_AmmoScavenger because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Upgrade_AmmoScavenger) == 0xd08);
};
