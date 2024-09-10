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
    // Size: 0x228
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ChainLightningEffect : public server::CCitadelModifier
    {
    public:
        int32_t m_nChainCount; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x4]; // 0xcc
        // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitEntities;
        char m_hHitEntities[0x18]; // 0xd0        
        // m_hUnhitEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hUnhitEnts;
        char m_hUnhitEnts[0x18]; // 0xe8        
        Vector m_vLastSource; // 0x100        
        [[maybe_unused]] std::uint8_t pad_0x10c[0x11c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ChainLightningEffect because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_ChainLightningEffect) == 0x228);
};
