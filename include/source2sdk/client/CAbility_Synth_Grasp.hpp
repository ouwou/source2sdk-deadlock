#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcc8
    // Has VTable
    #pragma pack(push, 1)
    class CAbility_Synth_Grasp : public client::C_CitadelBaseAbility
    {
    public:
        // m_vecTetheredEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecTetheredEnemies;
        char m_vecTetheredEnemies[0x18]; // 0xc78        
        [[maybe_unused]] std::uint8_t pad_0xc90[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_Grasp because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_Grasp) == 0xcc8);
};
