#pragma once
#include "source2sdk/client/CAI_BaseNPCGraphController.hpp"
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
    // Size: 0x5e0
    // Has VTable
    #pragma pack(push, 1)
    class CAI_CitadelNPC_GraphController : public client::CAI_BaseNPCGraphController
    {
    public:
        // m_nHitLayerTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<int32_t> m_nHitLayerTrigger;
        char m_nHitLayerTrigger[0x20]; // 0x578        
        // m_pszDamageState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszDamageState;
        char m_pszDamageState[0x28]; // 0x598        
        // m_fHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_fHealth;
        char m_fHealth[0x20]; // 0x5c0        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_CitadelNPC_GraphController because it is not a standard-layout class
    static_assert(sizeof(CAI_CitadelNPC_GraphController) == 0x5e0);
};
