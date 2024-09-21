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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1690
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flForwardSpeed"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
    #pragma pack(push, 1)
    class CNPC_NanoRollermine : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1608[0x38]; // 0x1608
        // metadata: MNetworkEnable
        float m_flForwardSpeed; // 0x1640        
        [[maybe_unused]] std::uint8_t pad_0x1644[0x44]; // 0x1644
        // metadata: MNetworkEnable
        // m_hOwnerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwnerPawn;
        char m_hOwnerPawn[0x4]; // 0x1688        
        [[maybe_unused]] std::uint8_t pad_0x168c[0x4];
        
        // Static fields:
        static CUtlSymbolLarge &Get_SCHED_NANO_ROLLERMINE_ROLL_FORWARD() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[0]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_NANO_ROLLERMINE_EXPLODE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[1]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_NANO_ROLLERMINE_EXPLODING() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[2]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_NANO_ROLLERMINE_CHARGE_PATH() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[3]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_NANO_ROLLERMINE_EXPLODE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[4]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_NANO_ROLLERMINE_PATH_TO_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[5]->m_pInstance);};
        static client::ConditionId_t &Get_COND_NANO_ROLLERMINE_EXPLODE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[6]->m_pInstance);};
        static client::ConditionId_t &Get_COND_NANO_ROLLERMINE_EXPLODING() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[7]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_NanoRollermine because it is not a standard-layout class
    static_assert(sizeof(CNPC_NanoRollermine) == 0x1690);
};
