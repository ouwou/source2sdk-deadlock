#pragma once
#include "source2sdk/client/MantleType_t.hpp"
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
    // Size: 0x1558
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityMantleVData : public server::CitadelAbilityVData
    {
    public:
        // m_vecMantleTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::MantleType_t> m_vecMantleTypes;
        char m_vecMantleTypes[0x18]; // 0x1540        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityMantleVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityMantleVData) == 0x1558);
};
