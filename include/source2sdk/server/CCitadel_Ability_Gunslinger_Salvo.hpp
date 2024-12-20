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
    // Size: 0xb78
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Gunslinger_Salvo : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x4]; // 0xaf8
        // m_CastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_CastTarget;
        char m_CastTarget[0x4]; // 0xafc        
        int32_t m_iCurrentShots; // 0xb00        
        int32_t m_iTotalShots; // 0xb04        
        [[maybe_unused]] std::uint8_t pad_0xb08[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Gunslinger_Salvo because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Gunslinger_Salvo) == 0xb78);
};
