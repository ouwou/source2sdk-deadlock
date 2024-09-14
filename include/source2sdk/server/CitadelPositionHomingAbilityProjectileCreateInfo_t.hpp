#pragma once
#include "source2sdk/server/CitadelAbilityProjectileCreateInfo_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x60
    #pragma pack(push, 1)
    struct CitadelPositionHomingAbilityProjectileCreateInfo_t : public server::CitadelAbilityProjectileCreateInfo_t
    {
    public:
        Vector m_vecHomingPosition; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CitadelPositionHomingAbilityProjectileCreateInfo_t because it is not a standard-layout class
    static_assert(sizeof(CitadelPositionHomingAbilityProjectileCreateInfo_t) == 0x60);
};
