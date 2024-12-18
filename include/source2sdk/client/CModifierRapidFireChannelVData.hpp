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
    // Size: 0x638
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierRapidFireChannelVData : public client::CCitadelModifierVData
    {
    public:
        float m_flAirDrag; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x634[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierRapidFireChannelVData because it is not a standard-layout class
    static_assert(sizeof(CModifierRapidFireChannelVData) == 0x638);
};
