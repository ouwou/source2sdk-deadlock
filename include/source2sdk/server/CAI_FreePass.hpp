#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/server/AI_FreePassParams_t.hpp"
#include "source2sdk/server/CAI_MoveMonitor.hpp"
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
    // Size: 0x88
    // Has VTable
    #pragma pack(push, 1)
    class CAI_FreePass : public client::CAI_Component
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x40        
        float m_FreePassTimeRemaining; // 0x44        
        server::CAI_MoveMonitor m_FreePassMoveMonitor; // 0x48        
        server::AI_FreePassParams_t m_Params; // 0x58        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_FreePass because it is not a standard-layout class
    static_assert(sizeof(CAI_FreePass) == 0x88);
};
