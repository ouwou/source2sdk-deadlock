#pragma once
#include "source2sdk/client/ConditionId_t.hpp"
#include "source2sdk/server/CNPC_TrooperNeutral.hpp"
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
    // Size: 0x16c8
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralNodeMover : public server::CNPC_TrooperNeutral
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1670[0x58];
        // Static fields:
        static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_MOVE_TO_NEW_NODE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[0]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_HIDE_IN_NODE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[1]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_COME_OUT_OF_NODE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[2]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_RETURN_TO_NODE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[3]->m_pInstance);};
        static client::ConditionId_t &Get_COND_FAR_FROM_NODE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[4]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_PICK_NEW_NODE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[5]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_MOVE_TO_NEXT_MOVEMENT_NODE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[6]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_HIDE_IN_NODE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[7]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_COME_OUT_OF_NODE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[8]->m_pInstance);};
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNPC_TrooperNeutralNodeMover) == 0x16c8);
};
