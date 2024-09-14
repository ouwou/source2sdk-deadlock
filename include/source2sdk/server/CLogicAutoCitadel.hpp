#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x558
    // Has VTable
    #pragma pack(push, 1)
    class CLogicAutoCitadel : public server::CBaseEntity
    {
    public:
        entity2::CEntityIOOutput m_OnWaitingForPlayersToJoin; // 0x4d8        
        entity2::CEntityIOOutput m_OnPreGameWait; // 0x500        
        entity2::CEntityIOOutput m_OnGameInProgress; // 0x528        
        [[maybe_unused]] std::uint8_t pad_0x550[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicAutoCitadel because it is not a standard-layout class
    static_assert(sizeof(CLogicAutoCitadel) == 0x558);
};
