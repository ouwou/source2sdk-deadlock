#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CRuleBrushEntity.hpp"
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
    // Size: 0x810
    // Has VTable
    #pragma pack(push, 1)
    class CGamePlayerZone : public server::CRuleBrushEntity
    {
    public:
        entity2::CEntityIOOutput m_OnPlayerInZone; // 0x770        
        entity2::CEntityIOOutput m_OnPlayerOutZone; // 0x798        
        // m_PlayersInCount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<int32_t> m_PlayersInCount;
        char m_PlayersInCount[0x28]; // 0x7c0        
        // m_PlayersOutCount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<int32_t> m_PlayersOutCount;
        char m_PlayersOutCount[0x28]; // 0x7e8        
        
        // Datamap fields:
        // void InputCountPlayersInZone; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGamePlayerZone because it is not a standard-layout class
    static_assert(sizeof(CGamePlayerZone) == 0x810);
};
