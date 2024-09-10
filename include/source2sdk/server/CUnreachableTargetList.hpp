#pragma once
#include "source2sdk/server/UnreachableTarget_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x20
    #pragma pack(push, 1)
    class CUnreachableTargetList
    {
    public:
        // m_vecTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::UnreachableTarget_t> m_vecTargets;
        char m_vecTargets[0x18]; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x18[0x8];
        
        // Datamap fields:
        // void m_pOuter; // 0x18
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CUnreachableTargetList, m_vecTargets) == 0x0);
    
    static_assert(sizeof(CUnreachableTargetList) == 0x20);
};
