#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe0
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CBaseModifierAura : public client::CCitadelModifier
    {
    public:
        // m_hAuraUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hAuraUnits;
        char m_hAuraUnits[0x18]; // 0xc0        
        client::ParticleIndex_t m_hAmbientEffect; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xdc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseModifierAura because it is not a standard-layout class
    static_assert(sizeof(CBaseModifierAura) == 0xe0);
};
