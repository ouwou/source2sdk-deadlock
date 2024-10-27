#pragma once
#include "source2sdk/server/CTriggerModifier.hpp"
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
    // Size: 0x988
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelInteriorTrigger : public server::CTriggerModifier
    {
    public:
        int32_t m_nInteriorType; // 0x980        
        CUtlStringToken m_tInteriorModifier; // 0x984        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelInteriorTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelInteriorTrigger) == 0x988);
};
