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
    // Size: 0xb68
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hAbility"
    #pragma pack(push, 1)
    class C_Citadel_Nano_Predatory_Statue : public client::CCitadelAnimatingModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb58[0x8]; // 0xb58
        // metadata: MNetworkEnable
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelBaseAbility> m_hAbility;
        char m_hAbility[0x4]; // 0xb60        
        float m_flLifetime; // 0xb64        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_Nano_Predatory_Statue because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_Nano_Predatory_Statue) == 0xb68);
};
