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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x950
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vLaunchTarget"
    // static metadata: MNetworkVarNames "float m_flLaunchSpeed"
    #pragma pack(push, 1)
    class CCitadelCatapultTrigger : public server::CBaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vLaunchTarget; // 0x938        
        // metadata: MNetworkEnable
        float m_flLaunchSpeed; // 0x944        
        CUtlSymbolLarge m_nameTarget; // 0x948        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelCatapultTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelCatapultTrigger) == 0x950);
};
