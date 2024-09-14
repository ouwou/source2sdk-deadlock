#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x4e8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelHeroLoader : public server::CBaseEntity
    {
    public:
        CUtlSymbolLarge m_hero; // 0x4d8        
        int32_t m_nLoadSeq; // 0x4e0        
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x4e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelHeroLoader because it is not a standard-layout class
    static_assert(sizeof(CCitadelHeroLoader) == 0x4e8);
};
