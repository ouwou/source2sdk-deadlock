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
    // Size: 0xb48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
    #pragma pack(push, 1)
    class CCitadel_Nano_Predatory_Statue : public server::CCitadelAnimatingModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb28[0x18]; // 0xb28
        // metadata: MNetworkEnable
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbility;
        char m_hAbility[0x4]; // 0xb40        
        float m_flLifetime; // 0xb44        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Nano_Predatory_Statue because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Nano_Predatory_Statue) == 0xb48);
};
