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
    // Size: 0x1790
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_PestilenceDrone : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1730[0x60];
        // Static fields:
        static CUtlSymbolLarge &Get_SCHED_PESTILENCE_DRONE_NAVIGATE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->GetStaticFields()[0]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_PESTILENCE_DRONE_CHARGE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->GetStaticFields()[1]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_PESTILENCE_DRONE_ATTACH() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->GetStaticFields()[2]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_PESTILENCE_DRONE_FIZZLE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->GetStaticFields()[3]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_PESTILENCE_DRONE_CHARGE_PATH() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->GetStaticFields()[4]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_PESTILENCE_DRONE_ATTACH() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->GetStaticFields()[5]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_PESTILENCE_DRONE_FIZZLE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->GetStaticFields()[6]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_PESTILENCE_DRONE_PATH_TO_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->GetStaticFields()[7]->m_pInstance);};
        static client::ConditionId_t &Get_COND_PESTILENCE_DRONE_ATTACH() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->GetStaticFields()[8]->m_pInstance);};
        static client::ConditionId_t &Get_COND_PESTILENCE_DRONE_FIZZLE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_PestilenceDrone")->GetStaticFields()[9]->m_pInstance);};
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNPC_PestilenceDrone) == 0x1790);
};
