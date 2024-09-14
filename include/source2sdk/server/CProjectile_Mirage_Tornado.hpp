#pragma once
#include "source2sdk/server/CCitadelProjectile.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAbility_Mirage_Tornado;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x978
    // Has VTable
    #pragma pack(push, 1)
    class CProjectile_Mirage_Tornado : public server::CCitadelProjectile
    {
    public:
        int32_t m_cTicksNoMovement; // 0x820        
        // m_TornadoAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAbility_Mirage_Tornado> m_TornadoAbility;
        char m_TornadoAbility[0x4]; // 0x824        
        [[maybe_unused]] std::uint8_t pad_0x828[0x150];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CProjectile_Mirage_Tornado because it is not a standard-layout class
    static_assert(sizeof(CProjectile_Mirage_Tornado) == 0x978);
};
