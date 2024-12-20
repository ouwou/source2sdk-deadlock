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
    // Size: 0x660
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_BeltFed_MagazineVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_SpinUpSound; // 0x630        
        CSoundEventName m_SpinDownSound; // 0x640        
        CSoundEventName m_SpinLoopSound; // 0x650        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BeltFed_MagazineVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BeltFed_MagazineVData) == 0x660);
};
