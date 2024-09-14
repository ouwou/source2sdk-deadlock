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
    // Size: 0x608
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_DragEnemyVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flForwardOffset; // 0x5f8        
        float m_flVerticalOffset; // 0x5fc        
        float m_flDragDistance; // 0x600        
        float m_flForceDistScale; // 0x604        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_DragEnemyVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_DragEnemyVData) == 0x608);
};
