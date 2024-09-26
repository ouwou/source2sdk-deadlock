#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_CitadelProjectile;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CCitadelProjectile> m_hActiveProjectile"
    #pragma pack(push, 1)
    class CAbility_Mirage_Tornado : public client::C_CitadelBaseAbility
    {
    public:
        Vector m_vLastValidMovementPosition; // 0xc78        
        // metadata: MNetworkEnable
        // m_hActiveProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelProjectile> m_hActiveProjectile;
        char m_hActiveProjectile[0x4]; // 0xc84        
        [[maybe_unused]] std::uint8_t pad_0xc88[0x1c0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Mirage_Tornado because it is not a standard-layout class
    static_assert(sizeof(CAbility_Mirage_Tornado) == 0xe48);
};
