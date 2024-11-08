#pragma once
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x518
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelZipLinePathNode : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e8[0x8]; // 0x4e8
        bool m_bCornerNode; // 0x4f0        
        bool m_bDisableZippingToByPlayers; // 0x4f1        
        bool m_bEnabled; // 0x4f2        
        bool m_bCapturable; // 0x4f3        
        bool m_bAlwaysUsable; // 0x4f4        
        bool m_bOneWay; // 0x4f5        
        [[maybe_unused]] std::uint8_t pad_0x4f6[0x2]; // 0x4f6
        CUtlSymbolLarge m_strGuardBossName; // 0x4f8        
        CUtlSymbolLarge m_strGuardBossName2; // 0x500        
        CUtlSymbolLarge m_strGuardBossName3; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x510[0x4]; // 0x510
        bool m_bUseForMinimapDrawing; // 0x514        
        [[maybe_unused]] std::uint8_t pad_0x515[0x3];
        
        // Datamap fields:
        // void m_pNode; // 0x510
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelZipLinePathNode because it is not a standard-layout class
    static_assert(sizeof(CCitadelZipLinePathNode) == 0x518);
};
