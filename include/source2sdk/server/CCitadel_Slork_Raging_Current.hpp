#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Size: 0xb38
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Slork_Raging_Current : public server::CCitadelBaseAbility
    {
    public:
        // m_vecMarkedTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecMarkedTargets;
        char m_vecMarkedTargets[0x18]; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xb00[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Slork_Raging_Current because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Slork_Raging_Current) == 0xb38);
};
