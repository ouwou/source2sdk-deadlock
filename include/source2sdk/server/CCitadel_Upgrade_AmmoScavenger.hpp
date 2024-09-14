#pragma once
#include "source2sdk/server/CCitadel_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb80
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Upgrade_AmmoScavenger : public server::CCitadel_Item
    {
    public:
        // m_hLastOrbTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastOrbTarget;
        char m_hLastOrbTarget[0x4]; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb0c[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Upgrade_AmmoScavenger because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Upgrade_AmmoScavenger) == 0xb80);
};
