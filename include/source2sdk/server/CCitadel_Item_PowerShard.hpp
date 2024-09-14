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
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb48
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Item_PowerShard : public server::CCitadel_Item
    {
    public:
        // m_hLastSignatureToActivate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hLastSignatureToActivate;
        char m_hLastSignatureToActivate[0x4]; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb0c[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_PowerShard because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_PowerShard) == 0xb48);
};
