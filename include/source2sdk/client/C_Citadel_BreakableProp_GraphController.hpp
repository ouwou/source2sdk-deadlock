#pragma once
#include "source2sdk/client/CAnimGraphControllerBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x98
    // Has VTable
    #pragma pack(push, 1)
    class C_Citadel_BreakableProp_GraphController : public client::CAnimGraphControllerBase
    {
    public:
        // m_bSetInit has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bSetInit;
        char m_bSetInit[0x20]; // 0x18        
        // m_flDamageReceived has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flDamageReceived;
        char m_flDamageReceived[0x20]; // 0x38        
        // m_bOnRespawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bOnRespawn;
        char m_bOnRespawn[0x20]; // 0x58        
        // m_bHitTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bHitTrigger;
        char m_bHitTrigger[0x20]; // 0x78        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_Citadel_BreakableProp_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_Citadel_BreakableProp_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_BreakableProp_GraphController because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_BreakableProp_GraphController) == 0x98);
};
