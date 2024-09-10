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
    // Size: 0x608
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_ConsumedProtectionRacketVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strShieldBreakSound; // 0x5f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ConsumedProtectionRacketVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_ConsumedProtectionRacketVData) == 0x608);
};