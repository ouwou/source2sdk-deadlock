#pragma once
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_CitadelBaseAbility;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
    // static metadata: MNetworkVarNames "bool m_bFloating"
    #pragma pack(push, 1)
    class CCitadel_MobileResupply : public client::CCitadelAnimatingModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelBaseAbility> m_hAbility;
        char m_hAbility[0x4]; // 0xb50        
        // metadata: MNetworkEnable
        bool m_bFloating; // 0xb54        
        [[maybe_unused]] std::uint8_t pad_0xb55[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_MobileResupply because it is not a standard-layout class
    static_assert(sizeof(CCitadel_MobileResupply) == 0xb58);
};
