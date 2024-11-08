#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x578
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelHeroLoader : public client::C_BaseEntity
    {
    public:
        CUtlSymbolLarge m_hero; // 0x568        
        int32_t m_nLoadSeq; // 0x570        
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x574        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelHeroLoader because it is not a standard-layout class
    static_assert(sizeof(CCitadelHeroLoader) == 0x578);
};
