#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x220
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ChainLightningEffect : public server::CCitadelModifier
    {
    public:
        int32_t m_nChainCount; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x4]; // 0xc4
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0xc8        
        // m_hUnhitEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hUnhitEnts;
        char m_hUnhitEnts[0x18]; // 0xe0        
        Vector m_vLastSource; // 0xf8        
        [[maybe_unused]] std::uint8_t pad_0x104[0x11c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ChainLightningEffect because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ChainLightningEffect) == 0x220);
};
