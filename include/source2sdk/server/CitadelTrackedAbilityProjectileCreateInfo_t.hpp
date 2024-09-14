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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x58
    #pragma pack(push, 1)
    struct CitadelTrackedAbilityProjectileCreateInfo_t : public server::CitadelAbilityProjectileCreateInfo_t
    {
    public:
        // m_hTrackedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTrackedTarget;
        char m_hTrackedTarget[0x4]; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CitadelTrackedAbilityProjectileCreateInfo_t because it is not a standard-layout class
    static_assert(sizeof(CitadelTrackedAbilityProjectileCreateInfo_t) == 0x58);
};
