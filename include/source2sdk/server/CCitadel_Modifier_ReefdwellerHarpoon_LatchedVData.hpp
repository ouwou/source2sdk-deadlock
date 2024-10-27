#pragma once
#include "source2sdk/server/CCitadel_Modifier_InvisVData.hpp"
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
    // Size: 0x8d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_ReefdwellerHarpoon_LatchedVData : public server::CCitadel_Modifier_InvisVData
    {
    public:
        // metadata: MPropertyStartGroup "+Properties"
        float m_flMaxCameraAngleForSeeing; // 0x8d0        
        float m_flMaxDistanceForSeeing; // 0x8d4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ReefdwellerHarpoon_LatchedVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ReefdwellerHarpoon_LatchedVData) == 0x8d8);
};
