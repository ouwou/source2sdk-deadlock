#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x850
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vLaunchTarget"
    // static metadata: MNetworkVarNames "float m_flLaunchSpeed"
    #pragma pack(push, 1)
    class CCitadelCatapultTrigger : public client::C_BaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vLaunchTarget; // 0x838        
        // metadata: MNetworkEnable
        float m_flLaunchSpeed; // 0x844        
        CUtlSymbolLarge m_nameTarget; // 0x848        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelCatapultTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelCatapultTrigger) == 0x850);
};
