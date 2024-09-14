#pragma once
#include "source2sdk/server/CCitadelModelEntity.hpp"
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
    // Size: 0x8f0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelViscousBall : public server::CCitadelModelEntity
    {
    public:
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbility;
        char m_hAbility[0x4]; // 0x8e8        
        [[maybe_unused]] std::uint8_t pad_0x8ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelViscousBall because it is not a standard-layout class
    static_assert(sizeof(CCitadelViscousBall) == 0x8f0);
};
