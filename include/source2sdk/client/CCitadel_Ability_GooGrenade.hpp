#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xec8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
    #pragma pack(push, 1)
    class CCitadel_Ability_GooGrenade : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_vecPuddleModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecPuddleModifiers;
        char m_vecPuddleModifiers[0x18]; // 0xc78        
        [[maybe_unused]] std::uint8_t pad_0xc90[0x230]; // 0xc90
        entity2::GameTime_t m_LastDetonateTime; // 0xec0        
        [[maybe_unused]] std::uint8_t pad_0xec4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GooGrenade because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GooGrenade) == 0xec8);
};
