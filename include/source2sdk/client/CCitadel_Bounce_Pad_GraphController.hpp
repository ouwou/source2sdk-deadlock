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
    // Size: 0x40
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Bounce_Pad_GraphController : public client::CAnimGraphControllerBase
    {
    public:
        // m_bLaunch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bLaunch;
        char m_bLaunch[0x20]; // 0x20        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Bounce_Pad_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Bounce_Pad_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Bounce_Pad_GraphController because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Bounce_Pad_GraphController) == 0x40);
};
