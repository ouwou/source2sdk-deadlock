#pragma once
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x1550
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelYamatoBaseVData : public server::CitadelAbilityVData
    {
    public:
        float m_flShadowFormSpeed; // 0x1548        
        [[maybe_unused]] std::uint8_t pad_0x154c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelYamatoBaseVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelYamatoBaseVData) == 0x1550);
};
