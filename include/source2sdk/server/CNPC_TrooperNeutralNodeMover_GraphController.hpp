#pragma once
#include "source2sdk/server/CNPC_TrooperNeutral_GraphController.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6a8
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralNodeMover_GraphController : public server::CNPC_TrooperNeutral_GraphController
    {
    public:
        CAnimGraphTagRef m_sHidingInNode; // 0x690        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutralNodeMover_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutralNodeMover_GraphController) == 0x6a8);
};
