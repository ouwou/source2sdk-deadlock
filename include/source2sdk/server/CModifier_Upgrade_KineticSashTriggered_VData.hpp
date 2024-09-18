#pragma once
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x618
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifier_Upgrade_KineticSashTriggered_VData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_TriggeredSound; // 0x608        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Upgrade_KineticSashTriggered_VData because it is not a standard-layout class
    static_assert(sizeof(CModifier_Upgrade_KineticSashTriggered_VData) == 0x618);
};
