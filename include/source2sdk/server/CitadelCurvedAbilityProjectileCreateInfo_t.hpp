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
    // Size: 0x58
    #pragma pack(push, 1)
    struct CitadelCurvedAbilityProjectileCreateInfo_t : public server::CitadelAbilityProjectileCreateInfo_t
    {
    public:
        float m_flTimeToReturn; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CitadelCurvedAbilityProjectileCreateInfo_t because it is not a standard-layout class
    static_assert(sizeof(CitadelCurvedAbilityProjectileCreateInfo_t) == 0x58);
};
