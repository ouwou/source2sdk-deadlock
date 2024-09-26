#pragma once
#include "source2sdk/server/CNPC_SimpleAnimatingAI_GraphController.hpp"
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
    // Size: 0xc0
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_BaseDefenseSentry_GraphController : public server::CNPC_SimpleAnimatingAI_GraphController
    {
    public:
        // m_flPanel1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flPanel1;
        char m_flPanel1[0x20]; // 0x40        
        // m_bUnpackInstant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bUnpackInstant;
        char m_bUnpackInstant[0x20]; // 0x60        
        // m_flVelocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flVelocity;
        char m_flVelocity[0x20]; // 0x80        
        // m_bAlert has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bAlert;
        char m_bAlert[0x20]; // 0xa0        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_BaseDefenseSentry_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_BaseDefenseSentry_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_BaseDefenseSentry_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_BaseDefenseSentry_GraphController) == 0xc0);
};
