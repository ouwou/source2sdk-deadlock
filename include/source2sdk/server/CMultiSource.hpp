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
    // Size: 0x610
    // Has VTable
    #pragma pack(push, 1)
    class CMultiSource : public server::CLogicalEntity
    {
    public:
        // m_rgEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_rgEntities[32];
        char m_rgEntities[0x80]; // 0x4d8        
        int32_t m_rgTriggered[32]; // 0x558        
        entity2::CEntityIOOutput m_OnTrigger; // 0x5d8        
        int32_t m_iTotal; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4]; // 0x604
        CUtlSymbolLarge m_globalstate; // 0x608        
        
        // Datamap fields:
        // void CMultiSourceRegister; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMultiSource because it is not a standard-layout class
    static_assert(sizeof(CMultiSource) == 0x610);
};
