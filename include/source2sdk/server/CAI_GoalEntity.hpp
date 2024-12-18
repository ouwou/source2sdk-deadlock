#pragma once
#include "source2sdk/server/CAI_GoalEntity__SearchType_t.hpp"
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
    class CAI_BaseNPC;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x528
    // Has VTable
    #pragma pack(push, 1)
    class CAI_GoalEntity : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x8]; // 0x4e0
        CUtlSymbolLarge m_iszActor; // 0x4e8        
        CUtlSymbolLarge m_iszGoal; // 0x4f0        
        bool m_fStartActive; // 0x4f8        
        [[maybe_unused]] std::uint8_t pad_0x4f9[0x3]; // 0x4f9
        server::CAI_GoalEntity__SearchType_t m_SearchType; // 0x4fc        
        CUtlSymbolLarge m_iszConceptModifiers; // 0x500        
        // m_actors has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CAI_BaseNPC>> m_actors;
        char m_actors[0x18]; // 0x508        
        // m_hGoalEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGoalEntity;
        char m_hGoalEntity[0x4]; // 0x520        
        uint32_t m_flags; // 0x524        
        
        // Datamap fields:
        // void CAI_GoalEntityDelayedRefresh; // 0x0
        // void InputActivate; // 0x0
        // void InputUpdateActors; // 0x0
        // void InputDeactivate; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_GoalEntity because it is not a standard-layout class
    static_assert(sizeof(CAI_GoalEntity) == 0x528);
};
