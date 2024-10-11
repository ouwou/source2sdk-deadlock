#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xc8
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CAnimGraphControllerBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x28]; // 0x0
        // m_vecParamsToResetInPostGraphUpdate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<CGlobalSymbol,8> m_vecParamsToResetInPostGraphUpdate;
        char m_vecParamsToResetInPostGraphUpdate[0x58]; // 0x28        
        // m_sDestructiblePartDestroyedHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_sDestructiblePartDestroyedHitGroup;
        char m_sDestructiblePartDestroyedHitGroup[0x28]; // 0x80        
        // m_nDestructiblePartDestroyedPartIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<int32_t> m_nDestructiblePartDestroyedPartIndex;
        char m_nDestructiblePartDestroyedPartIndex[0x20]; // 0xa8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimGraphControllerBase, m_vecParamsToResetInPostGraphUpdate) == 0x28);
    static_assert(offsetof(CAnimGraphControllerBase, m_sDestructiblePartDestroyedHitGroup) == 0x80);
    static_assert(offsetof(CAnimGraphControllerBase, m_nDestructiblePartDestroyedPartIndex) == 0xa8);
    
    static_assert(sizeof(CAnimGraphControllerBase) == 0xc8);
};
