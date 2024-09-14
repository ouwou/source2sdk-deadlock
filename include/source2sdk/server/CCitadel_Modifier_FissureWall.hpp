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
    // Size: 0x350
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_FissureWall : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x230]; // 0xc0
        // m_vecFissureWallEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecFissureWallEntities;
        char m_vecFissureWallEntities[0x18]; // 0x2f0        
        // m_vecFisureEntitiesHit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecFisureEntitiesHit;
        char m_vecFisureEntitiesHit[0x18]; // 0x308        
        int32_t m_nSegment; // 0x320        
        Vector m_vPosition; // 0x324        
        Vector m_vDirection; // 0x330        
        Vector m_vLeft; // 0x33c        
        float m_Length; // 0x348        
        [[maybe_unused]] std::uint8_t pad_0x34c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_FissureWall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_FissureWall) == 0x350);
};
