#pragma once
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x4f0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelPayload_PathMarker : public server::CPointEntity
    {
    public:
        int32_t m_iLane; // 0x4d8        
        bool m_bStart; // 0x4dc        
        bool m_bRollBackToHere; // 0x4dd        
        [[maybe_unused]] std::uint8_t pad_0x4de[0x2]; // 0x4de
        float m_flDistFromPrev; // 0x4e0        
        float m_flProgressAlongTotalPath; // 0x4e4        
        server::CCitadelPayload_PathMarker* m_pPrevious; // 0x4e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPayload_PathMarker because it is not a standard-layout class
    static_assert(sizeof(CCitadelPayload_PathMarker) == 0x4f0);
};
