#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x580
    // Has VTable
    #pragma pack(push, 1)
    class CLogicPlayerProxy : public server::CLogicalEntity
    {
    public:
        // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPlayer;
        char m_hPlayer[0x4]; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4dc[0x4]; // 0x4dc
        entity2::CEntityIOOutput m_PlayerHasAmmo; // 0x4e0        
        entity2::CEntityIOOutput m_PlayerHasNoAmmo; // 0x508        
        entity2::CEntityIOOutput m_PlayerDied; // 0x530        
        // m_RequestedPlayerHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<int32_t> m_RequestedPlayerHealth;
        char m_RequestedPlayerHealth[0x28]; // 0x558        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicPlayerProxy because it is not a standard-layout class
    static_assert(sizeof(CLogicPlayerProxy) == 0x580);
};
