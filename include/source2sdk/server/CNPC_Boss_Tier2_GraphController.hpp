#pragma once
#include "source2sdk/server/CAI_CitadelNPC_GraphController.hpp"
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
    // Size: 0xa08
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_Boss_Tier2_GraphController : public server::CAI_CitadelNPC_GraphController
    {
    public:
        // m_pszActivity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszActivity;
        char m_pszActivity[0x28]; // 0x918        
        // m_pszStompAttack has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszStompAttack;
        char m_pszStompAttack[0x28]; // 0x940        
        // m_pszStaggerDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszStaggerDirection;
        char m_pszStaggerDirection[0x28]; // 0x968        
        // m_pszElectricBeamPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszElectricBeamPosition;
        char m_pszElectricBeamPosition[0x28]; // 0x990        
        CAnimGraphTagRef m_sStaggered; // 0x9b8        
        CAnimGraphTagRef m_sStomp; // 0x9d0        
        [[maybe_unused]] std::uint8_t pad_0x9e8[0x8]; // 0x9e8
        CAnimGraphTagRef m_sApplyStompDamage; // 0x9f0        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier2_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier2_GraphController) == 0xa08);
};
