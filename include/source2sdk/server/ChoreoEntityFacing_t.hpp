#pragma once
#include "source2sdk/client/SceneEventId_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x14
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct ChoreoEntityFacing_t
    {
    public:
        client::SceneEventId_t m_nSceneEventId; // 0x0        
        Vector m_vFacingTarget; // 0x4        
        float m_flImportance; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ChoreoEntityFacing_t, m_nSceneEventId) == 0x0);
    static_assert(offsetof(ChoreoEntityFacing_t, m_vFacingTarget) == 0x4);
    static_assert(offsetof(ChoreoEntityFacing_t, m_flImportance) == 0x10);
    
    static_assert(sizeof(ChoreoEntityFacing_t) == 0x14);
};
