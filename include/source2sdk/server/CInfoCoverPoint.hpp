#pragma once
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4e8
    // Has VTable
    #pragma pack(push, 1)
    class CInfoCoverPoint : public server::CServerOnlyPointEntity
    {
    public:
        int32_t m_nGroupID; // 0x4d8        
        int32_t m_nVisionRadius; // 0x4dc        
        bool m_bAllowOffNav; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoCoverPoint because it is not a standard-layout class
    static_assert(sizeof(CInfoCoverPoint) == 0x4e8);
};
