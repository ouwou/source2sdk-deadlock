#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0x950
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerBurrowUnderground : public server::CBaseTrigger
    {
    public:
        // m_pTouchedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_pTouchedEntities;
        char m_pTouchedEntities[0x18]; // 0x938        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerBurrowUnderground because it is not a standard-layout class
    static_assert(sizeof(CTriggerBurrowUnderground) == 0x950);
};
