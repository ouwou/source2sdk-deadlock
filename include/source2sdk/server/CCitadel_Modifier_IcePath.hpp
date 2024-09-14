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
    class CBaseModelEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x308
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_IcePath : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x230]; // 0xc0
        int32_t m_iShardCount; // 0x2f0        
        Vector m_vLastShardPosition; // 0x2f4        
        // m_hSurfShard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseModelEntity> m_hSurfShard;
        char m_hSurfShard[0x4]; // 0x300        
        [[maybe_unused]] std::uint8_t pad_0x304[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_IcePath because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_IcePath) == 0x308);
};
