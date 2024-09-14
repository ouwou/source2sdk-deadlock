#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CUtlVector<EHANDLE> m_vecPuddleModifiers"
    #pragma pack(push, 1)
    class CCitadel_Ability_GooGrenade : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_vecPuddleModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecPuddleModifiers;
        char m_vecPuddleModifiers[0x18]; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xb00[0x230]; // 0xb00
        entity2::GameTime_t m_LastDetonateTime; // 0xd30        
        [[maybe_unused]] std::uint8_t pad_0xd34[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GooGrenade because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GooGrenade) == 0xd38);
};
