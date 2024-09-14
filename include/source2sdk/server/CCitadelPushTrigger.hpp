#pragma once
#include "source2sdk/server/CTriggerModifier.hpp"
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
    // Size: 0x960
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelPushTrigger : public server::CTriggerModifier
    {
    public:
        Vector m_vPush; // 0x948        
        QAngle m_angPushEntitySpace; // 0x954        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPushTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelPushTrigger) == 0x960);
};
