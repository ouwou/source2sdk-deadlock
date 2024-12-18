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
    // Size: 0x640
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_DragEnemyVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flForwardOffset; // 0x630        
        float m_flVerticalOffset; // 0x634        
        float m_flDragDistance; // 0x638        
        float m_flForceDistScale; // 0x63c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_DragEnemyVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_DragEnemyVData) == 0x640);
};
