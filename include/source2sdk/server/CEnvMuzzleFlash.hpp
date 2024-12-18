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
    class CEnvMuzzleFlash : public server::CPointEntity
    {
    public:
        float m_flScale; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4]; // 0x4e4
        CUtlSymbolLarge m_iszParentAttachment; // 0x4e8        
        
        // Datamap fields:
        // void InputFire; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvMuzzleFlash because it is not a standard-layout class
    static_assert(sizeof(CEnvMuzzleFlash) == 0x4f0);
};
