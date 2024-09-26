#pragma once
#include "source2sdk/client/ConditionId_t.hpp"
#include "source2sdk/server/CAI_CitadelNPC.hpp"
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
    // Size: 0x1788
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    #pragma pack(push, 1)
    class CNPC_FlyingDrone : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1730[0x58];
        // Static fields:
        static CUtlSymbolLarge &Get_SCHED_DRONE_FOLLOW_TARGET() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->GetStaticFields()[0]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_DRONE_TELEPORT_TO_FOLLOW_TARGET() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->GetStaticFields()[1]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_DRONE_TELEPORT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->GetStaticFields()[2]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_DRONE_FOLLOW_TARGET() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->GetStaticFields()[3]->m_pInstance);};
        static client::ConditionId_t &Get_COND_DRONE_LOST_TARGET() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->GetStaticFields()[4]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNPC_FlyingDrone) == 0x1788);
};
