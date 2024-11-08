#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CBeam;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x618
    // Has VTable
    #pragma pack(push, 1)
    class CTestEffect : public server::CBaseEntity
    {
    public:
        int32_t m_iLoop; // 0x4e8        
        int32_t m_iBeam; // 0x4ec        
        server::CBeam* m_pBeam[24]; // 0x4f0        
        entity2::GameTime_t m_flBeamTime[24]; // 0x5b0        
        entity2::GameTime_t m_flStartTime; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTestEffect because it is not a standard-layout class
    static_assert(sizeof(CTestEffect) == 0x618);
};
