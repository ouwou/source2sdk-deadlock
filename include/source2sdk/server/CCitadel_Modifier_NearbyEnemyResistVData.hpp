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
    // Size: 0x650
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_NearbyEnemyResistVData : public server::CCitadelModifierVData
    {
    public:
        float m_flNearbyEnemyResistRange; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x634[0x4]; // 0x634
        // m_flResistValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_flResistValues;
        char m_flResistValues[0x18]; // 0x638        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_NearbyEnemyResistVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_NearbyEnemyResistVData) == 0x650);
};
