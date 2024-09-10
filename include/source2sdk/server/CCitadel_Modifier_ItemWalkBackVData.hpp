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
    class CCitadel_Modifier_ItemWalkBackVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flStopDistance; // 0x5f8        
        float m_flMaxSpeedDistance; // 0x5fc        
        float m_flSlowSpeed; // 0x600        
        float m_flFastSpeed; // 0x604        
        float m_flVerticalOffset; // 0x608        
        float m_flTolerance; // 0x60c        
        float m_flRepathTime; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ItemWalkBackVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_ItemWalkBackVData) == 0x618);
};
