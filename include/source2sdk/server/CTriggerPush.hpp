#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPathSimple;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9b0
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerPush : public server::CBaseTrigger
    {
    public:
        QAngle m_angPushEntitySpace; // 0x978        
        Vector m_vecPushDirEntitySpace; // 0x984        
        bool m_bTriggerOnStartTouch; // 0x990        
        bool m_bUsePathSimple; // 0x991        
        [[maybe_unused]] std::uint8_t pad_0x992[0x6]; // 0x992
        CUtlSymbolLarge m_iszPathSimpleName; // 0x998        
        server::CPathSimple* m_PathSimple; // 0x9a0        
        uint32_t m_splinePushType; // 0x9a8        
        [[maybe_unused]] std::uint8_t pad_0x9ac[0x4];
        
        // Datamap fields:
        // Vector InputSetPushDirection; // 0x0
        // float InputSetPushSpeed; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerPush because it is not a standard-layout class
    static_assert(sizeof(CTriggerPush) == 0x9b0);
};
