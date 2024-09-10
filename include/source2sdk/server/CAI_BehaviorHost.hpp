#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAI_BaseNPC;
};

namespace source2sdk::server
{
    class CAI_Behavior;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x30
    #pragma pack(push, 1)
    class CAI_BehaviorHost
    {
    public:
        server::CAI_Behavior* m_pActiveBehavior; // 0x0        
        server::CAI_BaseNPC* m_pOuter; // 0x8        
        // m_Behaviors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CAI_Behavior*> m_Behaviors;
        char m_Behaviors[0x18]; // 0x10        
        bool m_bCalledBehaviorSelectSchedule; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x29[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_BehaviorHost, m_pActiveBehavior) == 0x0);
    static_assert(offsetof(CAI_BehaviorHost, m_pOuter) == 0x8);
    static_assert(offsetof(CAI_BehaviorHost, m_Behaviors) == 0x10);
    static_assert(offsetof(CAI_BehaviorHost, m_bCalledBehaviorSelectSchedule) == 0x28);
    
    static_assert(sizeof(CAI_BehaviorHost) == 0x30);
};
