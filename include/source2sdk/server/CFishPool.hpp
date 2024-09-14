#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CFish;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x530
    // Has VTable
    #pragma pack(push, 1)
    class CFishPool : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4d8[0x10]; // 0x4d8
        int32_t m_fishCount; // 0x4e8        
        float m_maxRange; // 0x4ec        
        float m_swimDepth; // 0x4f0        
        float m_waterLevel; // 0x4f4        
        bool m_isDormant; // 0x4f8        
        [[maybe_unused]] std::uint8_t pad_0x4f9[0x7]; // 0x4f9
        // m_fishes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CFish>> m_fishes;
        char m_fishes[0x18]; // 0x500        
        server::CountdownTimer m_visTimer; // 0x518        
        
        // Datamap fields:
        // void CFishPoolUpdate; // 0x0
        // float max_range; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFishPool because it is not a standard-layout class
    static_assert(sizeof(CFishPool) == 0x530);
};
