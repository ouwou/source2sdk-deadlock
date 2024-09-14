#pragma once
#include "source2sdk/client/CCitadelModelEntity.hpp"
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
    // Size: 0x840
    // Has VTable
    #pragma pack(push, 1)
    class C_CitadelViscousBall : public client::CCitadelModelEntity
    {
    public:
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelBaseAbility> m_hAbility;
        char m_hAbility[0x4]; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x83c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelViscousBall because it is not a standard-layout class
    static_assert(sizeof(C_CitadelViscousBall) == 0x840);
};
