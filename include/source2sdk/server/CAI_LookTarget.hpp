#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CAI_LookTarget : public server::CPointEntity
    {
    public:
        int32_t m_iContext; // 0x4d8        
        int32_t m_iPriority; // 0x4dc        
        bool m_bDisabled; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e1[0x3]; // 0x4e1
        entity2::GameTime_t m_flTimeNextAvailable; // 0x4e4        
        float m_flMaxDist; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_LookTarget because it is not a standard-layout class
    static_assert(sizeof(CAI_LookTarget) == 0x4f0);
};
