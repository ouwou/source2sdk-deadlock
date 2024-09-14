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
    // Size: 0xc18
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Wrecker_Salvage : public server::CCitadelBaseAbility
    {
    public:
        // m_vecTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecTargets;
        char m_vecTargets[0x18]; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xb00[0x118];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Wrecker_Salvage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Wrecker_Salvage) == 0xc18);
};
