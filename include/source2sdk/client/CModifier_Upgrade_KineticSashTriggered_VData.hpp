#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x640
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifier_Upgrade_KineticSashTriggered_VData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_TriggeredSound; // 0x630        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Upgrade_KineticSashTriggered_VData because it is not a standard-layout class
    static_assert(sizeof(CModifier_Upgrade_KineticSashTriggered_VData) == 0x640);
};
