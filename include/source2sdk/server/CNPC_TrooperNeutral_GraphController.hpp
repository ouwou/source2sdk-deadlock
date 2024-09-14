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
    // Size: 0x690
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_TrooperNeutral_GraphController : public server::CAI_CitadelNPC_GraphController
    {
    public:
        // m_bShielded has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bShielded;
        char m_bShielded[0x20]; // 0x5e0        
        // m_bAlert has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bAlert;
        char m_bAlert[0x20]; // 0x600        
        // m_pszAttackLeanPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszAttackLeanPosition;
        char m_pszAttackLeanPosition[0x28]; // 0x620        
        // m_pszOrbDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszOrbDrop;
        char m_pszOrbDrop[0x28]; // 0x648        
        // m_bHeavyMelee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bHeavyMelee;
        char m_bHeavyMelee[0x20]; // 0x670        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_TrooperNeutral_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_TrooperNeutral_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutral_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutral_GraphController) == 0x690);
};
