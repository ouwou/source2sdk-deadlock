#pragma once
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x1548
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelYamatoBaseVData : public client::CitadelAbilityVData
    {
    public:
        float m_flShadowFormSpeed; // 0x1540        
        [[maybe_unused]] std::uint8_t pad_0x1544[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelYamatoBaseVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelYamatoBaseVData) == 0x1548);
};
