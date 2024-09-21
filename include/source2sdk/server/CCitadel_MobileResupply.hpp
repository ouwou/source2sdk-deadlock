#pragma once
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
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
    // Size: 0xb90
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
    // static metadata: MNetworkVarNames "bool m_bFloating"
    #pragma pack(push, 1)
    class CCitadel_MobileResupply : public server::CCitadelAnimatingModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb28[0x5c]; // 0xb28
        // metadata: MNetworkEnable
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbility;
        char m_hAbility[0x4]; // 0xb84        
        // metadata: MNetworkEnable
        bool m_bFloating; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb89[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_MobileResupply because it is not a standard-layout class
    static_assert(sizeof(CCitadel_MobileResupply) == 0xb90);
};
